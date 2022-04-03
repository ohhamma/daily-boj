#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

#define MAX 1000001

int N,maxIdx,maxDp;
int A[MAX];
int dp[MAX];
vector<int> v;    // v[i]: 길이가 i-1인 배열에서 가장 큰수
vector<int> ans;
stack<int> s;     // 역추적해서 LIS 수열 뽑아낼때 사용

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) {
    cin>>A[i];

    if(v.empty()) {
      v.push_back(A[0]);
      dp[i]=1;
    }
    else {
      if(v.back()<A[i]) {
        v.push_back(A[i]);
        dp[i] = v.size();
      }
      else {
        auto it = lower_bound(v.begin(),v.end(),A[i]);
        *it = A[i];   // A[i] 이상의 값을 갖는 첫번쨰 원소에 A[i] 삽입
        dp[i] = it-v.begin()+1;   // 벡터v 내 (A[i]인덱스)+1이 dp[i]임
      }
    }
    if(dp[i]>maxDp) { // 마지막에 LIS 만들때 사용
      maxIdx = i;
      maxDp = dp[i];
    }
  }
  cout << v.size() << '\n';   // LIS 길이

  s.push(A[maxIdx]);
  for(int i=maxIdx-1; i>=0; i--)
    if(dp[maxIdx]==dp[i]+1 && A[i]<A[maxIdx]) {
      maxIdx = i;
      s.push(A[i]);
    }
  while(!s.empty()) {
    cout << s.top() << ' ';   // LIS 배열
    s.pop();
  }
}

// Warning: 벡터v는 LIS의 길이만을 나타나기 위한 배열이지,
//              절대 LIS의 요소를 포함하는 배열이 아니다 !!!

// Point: 기존 LIS에서 배열을 돌며 최적의 위치를 찾는건
//        자신보다 작으면서 dp값은 가장 큰 index를 찾는것

// Stack 자료구조를 사용하여 maxIdx부터 for문을 거꾸로(i--) 돌며
// dp[maxIdx]==dp[i]+1 이고 A[maxIdx]>A[i]이면 stack에 A[i]를 push한다
// 마지막에 stack에서 하나씩 pop한 값들이 곧 LIS 배열임
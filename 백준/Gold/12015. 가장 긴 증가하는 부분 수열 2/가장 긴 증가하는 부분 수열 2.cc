#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

#define MAX 1000001

int N;
int A[MAX];
vector<int> v;    // v[i]: 길이가 i-1인 배열에서 가장 큰수

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) cin>>A[i];

  v.push_back(A[0]);
  for(int i=1; i<N; i++) {
    if(v.back()<A[i]) v.push_back(A[i]);
    else {
      auto it = lower_bound(v.begin(),v.end(),A[i]);
      *it = A[i];   // A[i] 이상의 값을 갖는 첫번쨰 원소에 A[i] 삽입
    }
  }
  cout << v.size();
}

// 가장긴증가하는수열(#11053) 문제와는 달리 수열이 길어져서
// 이중반복문을 돌리면 TLE 받을것으로 예상 O(N^2)

// 이분탐색을 사용하자 O(NlogN)

// lower_bound()를 사용하면 해당값 이상인 값을 갖는 iterator 반환
// ㄴ 이때 lower_bound는 범위내의 원소들이 정렬되어 있어야함 (중요*)
// ㄴ 단순히 v가 가장 긴 증가하는 수열이기 때문에 이 조건은 만족하게됨
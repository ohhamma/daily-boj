#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,idx,cnt;
vector<int> arr;
vector<int> sorted;

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) {
    int x; cin >> x;
    arr.push_back(x);
    sorted.push_back(x);
  }
  sort(sorted.begin(),sorted.end());
  for(int i=0; i<N; i++) {
    for(int j=0; j<N; j++)
      if(arr[i]==sorted[j]) {
        sorted[j] = 1111;
        idx = j;
        break;
      }
    if(idx==0&&sorted[idx]!=1111) cnt++;
    else if(idx==N-1&&sorted[N-2]!=1111) cnt++;
    else if(sorted[idx-1]!=1111&&sorted[idx+1]!=1111) cnt++;
  }
  cout << cnt;
}
// 덱의 특징을 활용하지만 문제 푸는 과정은 그리디
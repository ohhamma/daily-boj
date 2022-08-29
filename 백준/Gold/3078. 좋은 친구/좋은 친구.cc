#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,K;
ll res;   // res 값의 범위 고려해줄것
queue<int> q[21];

int main() {
  FASTIO;
  cin >> N >> K;
  for(int i=0; i<N; i++) {
    string s; cin >> s;
    int len = s.length();
    while (!q[len].empty() && i-q[len].front()>K)
      q[len].pop();
    res += q[len].size();
    q[len].push(i);
  }
  cout << res;
}

// queue의 특징상 (FIFO) 등수 높은 사람이 더 앞에 있음
// 이름길이별로 사람들을 queue에 넣은 뒤,
// 입력값을 새로 받을때마다 등수차가 K보다 큰 사람들은 모두 pop
// 남은 사람들의 수가 해당 입력값의 좋은 친구들 수(쌍의 수)임
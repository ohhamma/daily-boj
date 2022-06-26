#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N;
queue<int> q;

int main() {
  FASTIO;
  cin >> N;
  for(int i=1; i<=N; i++) q.push(i);
  while(!q.empty()) {
    cout << q.front() << ' ';
    q.pop();
    if(q.empty()) break;
    q.push(q.front());
    q.pop();
  }
}
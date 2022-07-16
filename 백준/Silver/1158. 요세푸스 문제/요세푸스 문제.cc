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
queue<int> q;

int main() {
  FASTIO;
  cin >> N >> K;
  cout << '<';
  for(int i=1; i<=N; i++) q.push(i);
  while(q.size()-1){
    for(int i=0; i<K-1; i++){
      int tmp = q.front();
      q.pop();
      q.push(tmp);
    }
    cout << q.front() << ", ";
    q.pop();
  }
  cout << q.front() << '>';
  q.pop();
}
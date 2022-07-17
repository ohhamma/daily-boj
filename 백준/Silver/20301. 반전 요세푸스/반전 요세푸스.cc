#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,K,M,cnt;
bool flag;
deque<int> dq;

int main() {
  FASTIO;
  cin >> N >> K >> M;
  for(int i=1; i<=N; i++) dq.push_back(i);
  while(!dq.empty()){
    if(!flag){
      for(int i=0; i<K-1; i++){
        int tmp = dq.front();
        dq.pop_front();
        dq.push_back(tmp);
      }
      cnt++;
      cout << dq.front() << '\n';
      dq.pop_front();
    }
    else{
      for(int i=0; i<K-1; i++){
        int tmp = dq.back();
        dq.pop_back();
        dq.push_front(tmp);
      }
      cnt++;
      cout << dq.back() << '\n';
      dq.pop_back();
    }
    if(cnt==M){
      flag = !flag;
      cnt = 0;
    }
  }
}
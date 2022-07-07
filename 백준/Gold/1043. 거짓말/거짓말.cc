#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

int N,M,num,tmp,res;
int parent[51];
vector<int> jinsil;
vector<int> party[51];

int Find(int x) {
  if(parent[x]==x) return x;
  return parent[x] = Find(parent[x]);
}

void Union(int x, int y) {
  x = Find(x);
  y = Find(y);
  parent[y] = x;
}

int main() {
  FASTIO;
  cin >> N >> M >> num;
  for(int i=0; i<num; i++) {
    cin >> tmp;
    jinsil.push_back(tmp);
  }
  for(int i=1; i<=M; i++) {
    cin >> num;
    for(int j=0; j<num; j++) {
      cin >> tmp;
      party[i].push_back(tmp);
    }
  }
  // parent 자기자신으로 초기화
  for(int i=1; i<=N; i++) parent[i] = i; 

  // 같은 파티 사람들을 같은 집합으로 합침 (Union)
  for(int i=1; i<=M; i++) {
    int curr = party[i][0];
    for(int j=1; j<party[i].size(); j++)
      Union(curr,party[i][j]);
  }

  // 파티 참여자가 이야기를 아는 사람과 같은 집합에 있는지 탐색 (Find)
  for(int i=1; i<=M; i++) {
    bool check = true;
    int curr = party[i][0];
    for(int j=0; j<jinsil.size(); j++) {
      if(Find(curr)==Find(jinsil[j])) {
        check = false;
        break;
      }
    }
    if(check) res++;
  }
  cout << res;
}

// Union Find
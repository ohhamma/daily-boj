#include <iostream>
#include <string>
#include <map>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

int N, M;
map<string,int> pokemon1;
string pokemon2[100001];

int main() {
  FASTIO;
  cin >> N >> M;
  for(int i=1; i<=N; i++) {
    string name; cin >> name;
    pokemon1.insert({name,i});
    pokemon2[i] = name;
  }
  while(M--) {
    string s; cin >> s;
    if('0'<s[0] && s[0]<='9')
      cout << pokemon2[stoi(s)] << '\n';  // 숫자 -> 문자
    else {
      cout << pokemon1[s] << '\n';        // 문자 -> 숫자
    }
  }
}

// 일부 포켓몬은 마지막 문자만 대문자
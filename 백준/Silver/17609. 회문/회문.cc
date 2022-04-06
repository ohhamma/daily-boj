#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int T,newI,newJ;
string s;

int sol(int l, int r, bool check) {   // check==true: 유사회문 판별
  while(l<r) {
    if(s[l]!=s[r]) {
      if(!check) {
        // 하나 제거한 이후 펠린드롬 검사 (유사회문 판별)
        if(sol(l+1,r,true)==0 || sol(l,r-1,true)==0) return 1;
      }
      return 2;
    }
    l++,r--;
  }
  return 0;
}

int main() {
  FASTIO;
  cin >> T;
  while(T--) {
    cin >> s;
    cout << sol(0,s.length()-1,false) << '\n';
  }
}
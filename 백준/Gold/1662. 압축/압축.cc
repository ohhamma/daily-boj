#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

string S;
stack<int> s;

int main() {
  FASTIO;
  cin >> S;
  S = "1(" + S + ")";   // 전체를 괄호로 인식 (*중요*)

  for(int i=0; i<S.length(); i++) {
    if(i+1<S.length()&&S[i+1]=='(')
      s.push(S[i]-'0');
    else if(S[i]=='(')
      s.push(-1);
    else if(S[i]==')') {
      int res = 0;
      while(s.top()!=-1) {
        res += s.top();
        s.pop();
      }
      s.pop();  // '('
      res *= s.top();
      s.pop();
      s.push(res);
    }
    else
      s.push(1);
  }
  cout << s.top();
}
// 어려운 스택 문제
// 재귀로도 풀수있다고 함 (더 간단)
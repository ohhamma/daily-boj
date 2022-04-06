#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

string str,res;
stack<char> s;

int main() {
  FASTIO;
  cin >> str;
  for(char i:str) {
    if(i>='A' && i<='Z') {   // 피연산자일경우, 바로 출력
      res+=i;
      continue;
    }
    switch (i) {
    case '(':
      s.push(i);
      break;

    case ')':
      while(!s.empty()&&s.top()!='(') {
        res+=s.top();
        s.pop();
      }
      s.pop();    // '(' pop
      break;

    case '*':     // 우선순위 높음
    case '/':
      while(!s.empty()&&(s.top()=='*'||s.top()=='/')) {
        res+=s.top();
        s.pop();
      }
      s.push(i);
      break;
    
    case '+':     // 우선순위 낮음
    case '-':
      while(!s.empty()&&s.top()!='(') {
        res+=s.top();
        s.pop();
      }
      s.push(i);
      break;
    }
  }
  while(!s.empty()) {
    res+=s.top();
    s.pop();
  }
  cout << res;
}
// point) stack 안에는 우선순위가 작은것~큰것 순으로 들어있어야함
// a.k.a 우선순위 높은 연산자부터 출력(pop)
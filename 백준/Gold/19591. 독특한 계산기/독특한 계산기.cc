#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

string s;
bool opFront,opBack;    // 앞을 연살할건지, 뒤를 연산할건지
char op1,op2;
ll cal1,cal2;
ll left1,left2,right1,right2;
deque<char> op;
deque<ll> num;

bool isNum(char c) { return (c>='0'&&c<='9'); }

int opOrder(char c) {   // 연산자 우선순위
  if(c=='+'||c=='-') return 1;
  else return 2;
}

ll operate(ll a, ll b, char c) {
  if(c=='+') return a+b;
  if(c=='-') return a-b;
  if(c=='*') return a*b;
  if(c=='/') return a/b;
}

int main() {
  FASTIO;
  cin >> s;
  bool neg = false;
  string tmp = "";
  for(int i=0; i<s.length(); i++) {
    if(s[i]=='-'&&i==0) neg = true;
    else if(isNum(s[i])) tmp+=s[i];
    else {
      op.push_back(s[i]);
      ll n = stoll(tmp);   // string to ll
      if(neg) { n*=-1; neg=false; }
      tmp="";
      num.push_back(n);
    }
  }
  if(tmp!="") {   // 마지막에 남은 숫자 처리
    ll n = stoll(tmp);
    if(neg) { n*=-1; neg=false; }
    num.push_back(n);
  }
  while(num.size()>1) {
    opFront = false; opBack = false;
    op1 = op.front(); op2 = op.back();
    left1 = num.front(); num.pop_front();
    left2 = num.front();
    right2 = num.back(); num.pop_back();
    right1 = num.back();
    cal1 = operate(left1,left2,op1);
    cal2 = operate(right1,right2,op2);

    // 연산자 우선순위
    if(opOrder(op1)>opOrder(op2)) opFront = true;
    else if(opOrder(op1)<opOrder(op2)) opBack = true;

    // 같을경우, 결괏값 큰 거부터 (결괏값 같으면 앞에거)
    else if(cal1>=cal2) opFront = true;
    else opBack = true;
    if(opFront) {
      num.pop_front();
      op.pop_front();
      num.push_back(right2);
      num.push_front(cal1);
    }
    else {
      num.pop_back();
      op.pop_back();
      num.push_front(left1);
      num.push_back(cal2);
    }
  }
  cout << num.front();
}
// 맨앞 or 맨뒤 -> 곱&나부터 -> 결과큰거부터 -> 앞에거

// 처음에 내 마음대로 구현했는데, 어디서 틀렸는지 진짜 도저히 모르겠어서
// 다른 사람의 코드를 참조했다 ...
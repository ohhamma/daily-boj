#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N;
int alpha[30];    // char -> int로 변환 가능
ll res;

bool down(int a, int b) { return a>b; }

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) {
    string s; cin >> s;
    int mul = 1;
    for(int j=s.length()-1; j>=0; j--) {
      alpha[s[j]-'A'] += mul;
      mul *= 10;
    }
  }
  sort(alpha,alpha+30,down);
  for(int i=0; i<10; i++) {
    if (alpha[i]==0) break;
    res += alpha[i]*(9-i);
  }
  cout << res;
}
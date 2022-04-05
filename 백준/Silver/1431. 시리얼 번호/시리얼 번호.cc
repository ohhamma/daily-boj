#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int N;
string arr[51];
ll tmpA,tmpB;

bool cmp(string a, string b) {
  if(a.length()==b.length()) {
    tmpA=0,tmpB=0;
    for(auto i:a) if(isalpha(i)==0) tmpA+=i-'0';
    for(auto i:b) if(isalpha(i)==0) tmpB+=i-'0';

    if(tmpA==tmpB) return a<b;
    else return tmpA<tmpB;
  }
  else return a.length()<b.length();
}

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++) cin >> arr[i];
  sort(arr,arr+N,cmp);
  for(int i=0; i<N; i++) cout << arr[i] << '\n';
}
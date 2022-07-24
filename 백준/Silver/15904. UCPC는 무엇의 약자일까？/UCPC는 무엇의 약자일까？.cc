#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <cstdlib>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

string s;
bool U,C1,P,C2;

int main() {
  FASTIO;
  getline(cin,s);
  for(char c:s){
    if(c=='U') U=true;
    if(U&&c=='C') C1=true;
    if(C1&&c=='P') P=true;
    if(P&&c=='C') {
      C2=true;
      break;
    }
  }
  if(U&&C1&&P&&C2) cout << "I love UCPC";
  else cout << "I hate UCPC";
}
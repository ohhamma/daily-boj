#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int n,m;
char a,b;
string is;
bool TorF[27][27];

int main() {
  FASTIO;
  cin >> n;
  for(int i=0; i<n; i++) {
    cin >> a >> is >> b;
    TorF[a-'a'][b-'a']=true;
  }

  for(int k=0; k<26; k++)
    for(int i=0; i<26; i++)
      for(int j=0; j<26; j++)
        if(TorF[i][k]&&TorF[k][j]) TorF[i][j]=true;
  
  cin >> m;
  while(m--) {
    cin >> a >> is >> b;
    cout << (TorF[a-'a'][b-'a'] ? 'T':'F') << '\n';
  }
}
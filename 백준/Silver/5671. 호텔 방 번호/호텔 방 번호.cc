#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,M;
string num;
int arr[10];

int main() {
  //FASTIO;
  while(cin >> N >> M){
    int cnt = 0;
    for(int i=N; i<=M; i++){
      bool ok = true;
      num = to_string(i);
      for(int j=0; j<10; j++) arr[j]=0;
      for(char c:num) arr[c-'0']++;
      for(int j=0; j<10; j++)
        if(arr[j]>1) { ok = false; break; }
      if(ok) cnt++;
    }
    cout << cnt << '\n';
  }
}
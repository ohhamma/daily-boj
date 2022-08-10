#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int res;
bool check[100005];

int main() {
  FASTIO;
  for(int i=1; i<=10000; i++){
    if(!check[i]) cout << i << '\n';
    if(i<10) res=i+i;
    else if(i<100) res=i+i/10+i%10;
    else if(i<1000) res=i+i/100+(i/10)%10+i%10;
    else if(i<10000) res=i+i/1000+(i/100)%10+(i/10)%10+i%10;
    else res=10000+1;
    check[res]=true;
  }
}
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <queue>
#include <set>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

double hakjeom,hsum,res,ans;
string name,score;

double getScore(string score) {
  if(score[0]=='A') res = 4.0;
  else if(score[0]=='B') res = 3.0;
  else if(score[0]=='C') res = 2.0;
  else if(score[0]=='D') res = 1.0;
  else return 0.0;

  if(score[1]=='+') res += 0.5;
  return res;
}

int main() {
  FASTIO;
  for(int i=0; i<20; i++) {
    cin >> name >> hakjeom >> score;
    if(score=="P") continue;
    ans += hakjeom*getScore(score);
    hsum += hakjeom;
  }
  cout << fixed;
  cout.precision(6);
  
  cout << ans/hsum;
}
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<double,string> pds;

int N;
string a,b;
vector<pds> v;

bool cmp(pds a, pds b) { return a.first<b.first; }

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> a >> b;
    if(a[0]>='a'&&a[0]<='z') v.push_back({stoi(b),a});
    else v.push_back({stoi(a)/2,b});
  }
  sort(v.begin(),v.end(),cmp);
  for(int i=0; i<N; i++) cout << v[i].second << '\n';
}
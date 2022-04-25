#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int L,C;
char arr[16];
char res[16];

void sol(int lv, int start, int cntV, int cntC) {
  if(lv==L) {
    if (cntV<1 || cntC<2) return;
    for(int i=0; i<L; i++) cout << res[i];
    cout << '\n';
    return;
  }
  for(int i=start; i<C; i++) {
    res[lv] = arr[i];
    if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
      sol(lv+1,i+1,cntV+1,cntC);
    else sol(lv+1,i+1,cntV,cntC+1);
  }
}

int main() {
  FASTIO;
  cin >> L >> C;
  for(int i=0; i<C; i++) cin >> arr[i];
  sort(arr,arr+C);    // 미리 정렬
  sol(0,0,0,0);
}
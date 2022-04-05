#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,string> pis;

int N;
pis arr[100001];

bool cmp(pis a, pis b) {
  return a.first<b.first;
}

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++)
    cin >> arr[i].first >> arr[i].second;
  stable_sort(arr,arr+N,cmp);
  for(int i=0; i<N; i++)
    cout << arr[i].first << ' ' << arr[i].second << '\n';
}

// stable_sort: 하나의 요소로만 정렬,
// 조건이 같다면(a.first==b.first) 정렬 순서 유지
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int arr[3];

int main() {
  FASTIO;
  for(int i=0; i<3; i++) cin >> arr[i];
  sort(arr,arr+3);
  for(int i=0; i<3; i++) cout << arr[i] << ' ';
}
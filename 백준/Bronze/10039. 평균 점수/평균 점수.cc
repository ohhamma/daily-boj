#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int arr[5];
int sum;

int main() {
  FASTIO;
  for(int i=0; i<5; i++) {
    cin >> arr[i];
    if(arr[i]<40) arr[i]=40;
    sum += arr[i];
  }
  cout << sum/5;
}
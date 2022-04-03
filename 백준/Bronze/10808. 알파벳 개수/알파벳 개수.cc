#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

string S;
string alpha = "abcdefghijklmnopqrstuvwxyz";
int arr[26];

int main() {
  FASTIO;
  cin >> S;
  for(auto i:S)
    for(int j=0; j<26; j++)
      if(i==alpha[j]) {
        arr[j]++;
        break;
      }
  for(auto i:arr)
    cout << i << ' ';
}
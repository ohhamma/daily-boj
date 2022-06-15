#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,a,b,c;
int arr[3];
int m[2][3];
int M[2][3];

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<3; i++) {
    cin >> arr[i];
    m[1][i] = arr[i];
    M[1][i] = arr[i];
  }
  for(int j=1; j<N; j++) {
    for(int i=0; i<3; i++) {
      cin >> arr[i];
      m[0][i] = m[1][i];
      M[0][i] = M[1][i];
    }
    m[1][0] = min(m[0][0],m[0][1])+arr[0];
    M[1][0] = max(M[0][0],M[0][1])+arr[0];

    m[1][1] = min(min(m[0][0],m[0][1]),m[0][2])+arr[1];
    M[1][1] = max(max(M[0][0],M[0][1]),M[0][2])+arr[1];

    m[1][2] = min(m[0][1],m[0][2])+arr[2];
    M[1][2] = max(M[0][1],M[0][2])+arr[2];
  }

  cout << max(max(M[1][0],M[1][1]),M[1][2]) << ' ';
  cout << min(min(m[1][0],m[1][1]),m[1][2]);
}
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

ll N,K;

int main() {
  FASTIO;
  cin >> N >> K;
  cout << N*N*K;
}

// 기하 문제
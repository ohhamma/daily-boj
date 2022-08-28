#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;

int N,H;
stack<pii> s;


int main() {
  FASTIO;
  cin >> N;
  for(int i=1; i<=N; i++) {
    cin >> H;
    while(!s.empty()) {
      if(H < s.top().first) {   // 서로 다른 탑의 높이
        cout << s.top().second << ' ';
        break;
      }
      s.pop();
    }
    if(s.empty()) cout << "0 ";
    s.push({H,i});
  }
}
// 문제를 보자마자 스택을 사용해야겠다고 생각하기 어려웠음
// 탑에서 보내는 신호의 방향이 스택의 top이 움직이는 방향이라고 생각해봄

// 이전에 입력받은 값 중 탑이 보내는 신호를 받지 못하는 탑들의 정보를
// 몽땅 스택에서 pop해도 되는지 의문을 계속 품었는데 (다시 push하지 않으므로)
// 현재 H(높이)보다 큰값이 왼쪽에 있으면 그 값을 즉시 출력했을 것이고,
// 현재 H보다 더 작은 값들을 갖는 탑들은 이후에 입력받을 탑에서 신호를 보냈을때
// 그 높이가 H보다 작을 경우, 높이 H의 탑에서 전부 신호가 막힐거라서 괜찮음
// 이 로직을 한단어로 표현하자면.. "탑 높이의 상향평준화(?)"

// 내가 이미 가능성을 열어뒀으나 수신에 실패할 것이라는 결론을 얻은
// 이전의 탑들의 경우의 수를 이후에 전혀 고려하지 않게끔 해서
// 시간복잡도를 줄이기 (or 경우의 수 줄이기)
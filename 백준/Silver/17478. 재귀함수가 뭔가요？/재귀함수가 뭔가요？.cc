#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

#define print_ for(int i=0; i<4*n; i++) cout << '_'

int N;

string start = "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
string line1 = "\"재귀함수가 뭔가요?\"\n";
string line2 = "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
string line3 = "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
string line4 = "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
string fin1 = "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
string fin2 = "라고 답변하였지.\n";

void print_line(string s, int n) {
  print_;
  cout << s;
}

void sol(int lv) {
  if(lv==N) {
    print_line(line1,lv);
    print_line(fin1,lv);
    print_line(fin2,lv);
    return;
  }
  print_line(line1,lv);
  print_line(line2,lv);
  print_line(line3,lv);
  print_line(line4,lv);
  sol(lv+1);
  print_line(fin2,lv);
}

int main() {
  FASTIO;
  cin >> N;
  cout << start;
  sol(0);
}
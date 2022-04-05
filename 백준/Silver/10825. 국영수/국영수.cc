#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

struct student {
  string name;
  int korean;
  int english;
  int math;
};

int N;
student arr[100001];

bool cmp(student a, student b) {
  if(a.korean==b.korean) {
    if(a.english==b.english) {
      if(a.math==b.math) return a.name<b.name;
      else return a.math>b.math;
    }
    else return a.english<b.english;
  }
  else return a.korean>b.korean;
}

int main() {
  FASTIO;
  cin >> N;
  for(int i=0; i<N; i++)
    cin >> arr[i].name >> arr[i].korean >> arr[i].english >> arr[i].math;
  sort(arr,arr+N,cmp);
  for(int i=0; i<N; i++) cout << arr[i].name << '\n';
}
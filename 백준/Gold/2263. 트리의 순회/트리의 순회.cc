#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

#define MAX 100001

int n,num;
int Index[MAX];   // inorder 원소의 인덱스값 저장
int in[MAX];
int post[MAX];

void getPreorder(int inStart, int inEnd, int postStart, int postEnd) {
  if(inStart>inEnd || postStart>postEnd) return;
  int rootIndex = Index[post[postEnd]];   // root는 postorder의 제일 마지막 원소
  int leftSize = rootIndex-inStart;
  int rightSize = inEnd-rootIndex;
  cout << in[rootIndex] << ' ';   // root 출력

  getPreorder(inStart,rootIndex-1,postStart,postStart+leftSize-1);
  getPreorder(rootIndex+1,inEnd,postStart+leftSize,postEnd-1);
}

int main() {
  FASTIO;
  cin >> n;
  for(int i=1; i<=n; i++) {
    cin >> in[i];
    Index[in[i]] = i;
  }
  for(int i=1; i<=n; i++)
    cin >> post[i];

  getPreorder(1,n,1,n);
}

// inorder: LVR
// postorder: LRV
// preorder: VLR

/*
   1
 2   3
4 5 6 7

in: 425(1)637
post: 452/673(1)
*/
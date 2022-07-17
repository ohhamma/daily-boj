#include <iostream>
#include <stack>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

stack<int> st;
int sum;

int main() {
	FASTIO;
	int K; cin >> K;
	for (int i=0; i<K; i++){
		int a; cin >> a;
		if(a==0){
			sum-=st.top();
			st.pop();
		}
		else{
			st.push(a);
			sum+=a;
		}
	}
	cout << sum;
}
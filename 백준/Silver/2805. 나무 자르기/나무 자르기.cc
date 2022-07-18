#include <iostream>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

const int MAX = 1000005;

int N;
ll M;
ll tree[MAX];

bool possible(ll H){
	ll len = 0;
	// 나무를 잘라본다
	for(int i=0; i<N; i++)
		if (tree[i]-H>0)
			len += tree[i]-H;

	// 조건 충족
	if (len>=M) return true;
	return false;
}

int main() {
	FASTIO;
	cin >> N >> M;
	ll low = 1, high = 0;
	for(int i=0; i<N; i++){
		cin >> tree[i];
		high = max(high,tree[i]);
	}
	ll res = 0;
	while(low<=high){
		ll mid = (low+high)/2;
		if(possible(mid)){
			res = max(res,mid);
			low = mid+1;
		}
		else high = mid-1;
	}
	cout << res;
}
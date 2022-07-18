#include <iostream>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;

#define MAX_NUM 500005

int N, M;
int arr[MAX_NUM], tmp;

int main() {
	FASTIO;
	cin >> N;
	for (int i=0; i<N; i++) cin >> arr[i];
	sort(arr,arr+N);
	cin >> M;
	for (int i=0; i<M; i++) {
		cin >> tmp;
		cout << upper_bound(arr,arr+N,tmp)-lower_bound(arr,arr+N,tmp) << ' ';
	}
}
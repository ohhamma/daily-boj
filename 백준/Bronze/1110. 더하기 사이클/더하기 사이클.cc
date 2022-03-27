#include <iostream>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
using namespace std;

int main() {
    FASTIO
    int N; cin >> N;
    int ten = N / 10;
    int one = N % 10;

    int num = 100;
    int cnt = 0;
    while (N != num) {
        num = one * 10 + ((ten + one) % 10);
        cnt++;
        ten = num / 10;
        one = num % 10;
    }
    cout << cnt;
}
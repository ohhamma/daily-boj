#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#define FASTIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
using namespace std;
typedef long long ll;

int price;
int burger = 2000;
int drink = 2000;

int main() {
  FASTIO;
  for(int i=0; i<3; i++) {
    cin >> price;
    burger = min(burger,price);
  }
  for(int i=0; i<2; i++) {
    cin >> price;
    drink = min(drink, price);
  }
  cout << burger+drink-50;
}
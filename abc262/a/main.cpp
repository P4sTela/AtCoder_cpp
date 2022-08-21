#include <bits/stdc++.h>

using namespace std;

int main(){
  int y;
  cin >> y;
  int x = y % 4;
  if (x <= 1) {cout << (int)y+2-x << endl;}
  else if (x == 2) {cout << (int)y << endl;}
  else {cout << (int)y+3 << endl;}
}

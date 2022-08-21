#include <bits/stdc++.h>

using namespace std;

int main(){
  int h, w;
  cin >> h >> w;

  vector<vector<char>> g(h, vector<char>(w));

  for (int i = 0; i < h; ++i) {
    for (int j = 0; j < w; ++j) {
      cin >> g.at(i).at(j);
    }
  }

  int ct = 0;
  int i = 0;
  int j = 0;
  while (++ct<250500) {
    if (g.at(i).at(j) == 'U') {
      if (i == 0) {cout << i+1 << " " << j+1 << endl; return 0;}
      i -= 1;
    } else if (g.at(i).at(j) == 'D') {
      if (i == h-1) {cout << i+1 << " " << j+1 << endl; return 0;}
      i += 1;
    } else if (g.at(i).at(j) == 'L') {
      if (j == 0) {cout << i+1 << " " << j+1 << endl; return 0;}
      j -= 1;
    } else if (g.at(i).at(j) == 'R') {
      if (j == w-1) {cout << i+1 << " " << j+1 << endl; return 0;}
      j += 1;
    }
  }
  cout << -1 << endl;
}

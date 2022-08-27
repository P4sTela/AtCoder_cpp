#include <bits/stdc++.h>

using namespace std;

int main(){
  int ax, ay, bx, by, cx, cy, dx, dy;
  cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;
  int v1x = bx - ax;
  int v1y = by - ay;
  int v2x = cx - bx;
  int v2y = cy - by;
  int v3x = dx - cx;
  int v3y = dy - cy;
  int v4x = ax - dx;
  int v4y = ay - dy;
  if (( v1x * v2y - v1y * v2x ) < 0) { cout << "No" << endl; return 0;}
  if (( v2x * v3y - v2y * v3x ) < 0) { cout << "No" << endl; return 0;}
  if (( v3x * v4y - v3y * v4x ) < 0) { cout << "No" << endl; return 0;}
  if (( v4x * v1y - v4y * v1x ) < 0) { cout << "No" << endl; return 0;}
  cout << "Yes" << endl;
  return 0;
}

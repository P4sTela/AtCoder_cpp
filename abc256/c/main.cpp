#include <iomanip>
#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <numeric>
#include <set>

using namespace std;

int main(){
  int hw[6];
  for (int i = 0; i < 6; ++i) {
    cin >> hw[i];
  }

  int ans = 0;

  for (int i = 1; i <= hw[0]-2; ++i) {
    for (int j = 1; j <= hw[0]-1-i; ++j) {
      for (int k = 1; k <= hw[1]-2; ++k) {
        for (int l = 1; l <= hw[1]-1-k; ++l) {
          for (int m = 1; m <= hw[2]-2; ++m) {
            for (int n = 1; n <= hw[2]-1-m; ++n) {
              if (i+k+m==hw[3]){
                if (j+l+n==hw[4]){
                  if (hw[0]-i-j+hw[1]-k-l+hw[2]-m-n==hw[5]) ans+=1;
                }
              }
            }
          }
        }
      }
    }
  }

  cout << ans << endl;
}

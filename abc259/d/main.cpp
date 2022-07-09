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
  int N;
  long long sx, sy, tx, ty;
  cin >> N >> sx >> sy >> tx >> ty;

  vector<vector<long long>> data(N, vector<long long>(3));

  for (int i = 0; i < N; ++i) {
    cin >> data.at(i).at(0) >> data.at(i).at(1) >> data.at(i).at(2);
  }
//  data.at(i).at(2) = pow(data.at(i).at(0), 2) + pow(data.at(i).at(1), 2);
  int now;
  for (int i = 0; i < N; ++i) {
    long long dist = (int)pow(sx - data.at(i).at(0), 2) + (int)pow(sy - data.at(i).at(1), 2);
    if (dist == (int)pow(data.at(i).at(2), 2)) {
      now = i;
      break;
    }
  }

  cout << now << endl;
}

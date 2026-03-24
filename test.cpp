#include <iostream>
#include <vector>
using namespace std;

int main(void) {
  int N;
  vector<vector<int>> cost(1000000017, vector<int>(1000000017));
  bool answer = false;

  cin >> N;
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      cin >> cost.at(i).at(j);
    }
    cout << endl;
  }

  for (int a = 0; a < N - 2; a++) {
    for (int b = a + 1; b < N - 1; b++) {
      for (int c = b + 1; c < N; c++) {
        int direct = cost.at(a).at(c);
        int indirect = cost.at(a).at(b) + cost.at(b).at(c);

        if (direct > indirect) {
          answer = true;
          break;
        }
      }
    }
  }

  if (answer) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}

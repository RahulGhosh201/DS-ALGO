#include<bits/stdc++.h>
using namespace std;

int main() {
  int w, n;

  x: cin >> w >> n;

  if (w == 0 and n == 0)
    goto r;

  else {

    int ct[n], val[n];

    for (int i = 0; i < n; i++) { cin >> ct[i] >> val[i];
    }

    int t[n + 1][w + 1];

    for (int i = 0; i <= n; i++) {

      for (int j = 0; j <= w; j++)
        t[i][j] = 0;
    }

    for (int i = 1; i <= n; i++) {

      for (int j = 1; j <= w; j++) {

        if (ct[i - 1] <= j)
          t[i][j] = max(val[i - 1] + t[i - 1][j - ct[i - 1]], t[i - 1][j]);

        else
          t[i][j] = t[i - 1][j];
      }
    }

    int cost = 0;

    for (int i = 0; i <= w; i++) {

      if (t[n][i] == t[n][w]) {
        cost = i;
        break;
      }
    }

    cout << cost << " " << t[n][w] << endl;

    goto x;
  }

  r: return 0;

}
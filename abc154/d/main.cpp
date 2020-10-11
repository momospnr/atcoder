#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<double> p(n);
  for (int i = 0; i < n; i++)
  {
    cin >> p[i];
    p[i] = (p[i] + 1) / 2;
  }

  vector<double> sum(n + 1, 0);
  for (int i = 0; i < n; i++)
  {
    sum[i + 1] = sum[i] + p[i];
  }

  double ans = 0;
  for (int i = 0; i + k <= n; i++)
  {
    ans = max(ans, sum[i + k] - sum[i]);
  }

  cout << fixed << setprecision(12) << ans << endl;
}

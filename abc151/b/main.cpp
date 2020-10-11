#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n, k, m;
  cin >> n >> k >> m;
  int sum = 0;
  for (int i = 0; i < n - 1; i++)
  {
    int a;
    cin >> a;
    sum += a;
  }
  int ans = n * m - sum;
  if (ans > k)
  {
    cout << -1 << endl;
  }
  else if (ans <= 0)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << ans << endl;
  }
}

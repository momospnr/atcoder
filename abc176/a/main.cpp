#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  int n, x, t;
  cin >> n >> x >> t;

  int ans = 0;
  while (n > 0)
  {
    n -= x;
    ans += t;
  }
  cout << ans << endl;
}

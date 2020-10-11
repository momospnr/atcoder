#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll n;
  cin >> n;
  vector<ll> x(n, 0);
  vector<ll> y(n, 0);

  ll c = n / 2;

  for (ll i = 0; i < n; i++)
  {
    cin >> x[i];
    y[i] = x[i];
  }
  sort(y.begin(), y.end());

  for (ll i = 0; i < n; i++)
  {
    if (x[i] <= y[(n / 2) - 1])
    {
      cout << y[n / 2] << endl;
    }
    else
    {
      cout << y[(n / 2) - 1] << endl;
    }
  }
}

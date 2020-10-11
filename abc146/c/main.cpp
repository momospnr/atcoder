#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll a, b, x;
  cin >> a >> b >> x;

  ll l = 0, r = 1000000001;

  auto digit = [&](ll c) {
    string s = to_string(c);
    return s.length();
  };

  auto f = [&](ll c) {
    return a * c + b * digit(c);
  };
  while (r - l > 1)
  {
    ll c = (l + r) / 2;
    if (f(c) <= x)
    {
      l = c;
    }
    else
    {
      r = c;
    }
  }

  cout << l << endl;
}

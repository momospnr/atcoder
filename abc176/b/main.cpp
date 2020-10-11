#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  string n;
  cin >> n;
  ll sum = 0;

  for (ll i = 0; i < n.length(); i++)
  {
    sum += n[i] - '0';
  }

  if (sum % 9)
  {
    cout << "No" << endl;
  }
  else
  {
    cout << "Yes" << endl;
  }
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  ll N;
  cin >> N;
  string s = to_string(N);
  ll S = 0;
  for (ll i = 0; i < s.length(); i++)
  {
    S += s[i] - '0';
  }
  if (N % S == 0)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  string s;
  ll Ans = 0;
  cin >> s;
  int n = s.size();
  for (int bit = 0; bit < (1 << n - 1); bit++)
  {
    string ss = "";
    for (int i = 0; i < n; i++)
    {
      ss += s[i];
      if (bit >> i & 1)
      {
        Ans += stoll(ss);
        ss = "";
      }
    }
    Ans += stoll(ss);
  }
  cout << Ans << endl;
}

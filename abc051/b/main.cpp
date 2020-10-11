#include <bits/stdc++.h>
using namespace std;

int main()
{
  int k, s, sum = 0;
  cin >> k >> s;
  for (int x = 0; x <= k; x++)
  {
    for (int y = 0; y <= k; y++)
    {
      if (k >= s - x - y && s - x - y >= 0)
      {
        sum++;
      }
    }
  }
  cout << sum << endl;
}

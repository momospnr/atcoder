#include <bits/stdc++.h>
using namespace std;

int main()
{
  int x, count = 0, pos = 0;
  cin >> x;

  for (int i = 0;; i++)
  {
    if (pos >= x)
    {
      cout << i << endl;
      return 0;
    }
    pos += i + 1;
  }
}

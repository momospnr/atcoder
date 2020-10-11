#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  string a, b;
  cin >> a >> b;
  istringstream s = istringstream(a + b);
  int num;
  s >> num;
  int sq = sqrt(num);
  if (pow(sq, 2) == num)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
}

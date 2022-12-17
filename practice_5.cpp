#include <iostream>
using namespace std;
int main()
{
  // pattern 1:
   int n;
    char a = 'A';

    cin >> n;
    a=a+n-1;
    for (int i = 1; i<=n; i++)
    {
        for (int j = 1; j<=i; j++)
        {
            cout << a;
        }
        cout << endl;
        a--;
    }
    }
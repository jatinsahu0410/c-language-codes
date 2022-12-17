#include <iostream>
using namespace std;
int bitwisecompliment(int n)
{
    int m = n;
    int mask = 0;
    // edge case
    if (m == 0)
    {
        return 1;
    }
    while (m != 0)
    {
        mask = (mask << 1) | 1;
        m = m >> 1;
    }
    int ans = (~n) & mask;
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << bitwisecompliment(n);
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int x;
        int sum = 0;
        int Max = -1;
        int Min = 999;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
            if (Max < x)
                Max = x;
            if (Min > x)
                Min = x;
        }
        cout << sum << " " << Min << " " << Max << endl;
    }
    return 0;
}
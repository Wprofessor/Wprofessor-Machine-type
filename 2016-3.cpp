#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        int x;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            sum += x;
        }
        cout << "Total of array element values is " << sum << endl;
    }
    return 0;
}
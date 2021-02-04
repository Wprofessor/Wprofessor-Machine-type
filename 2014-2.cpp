#include <bits/stdc++.h>
using namespace std;
int getyinzi(int x)
{
    for (int i = x / 2; i > 0; i--)
    {
        if (x % i == 0)
        {
            cout << i << endl;
            return i;
        }
    }
}
int main()
{
    int n;
    while (cin >> n)
    {
        while (n--)
        {
            string str;
            cin >> str;

            int m = 0;
            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] >= '0' && str[i] <= '9')
                {
                    m = m * 10 + (str[i] - '0');
                }
            }
            if (m == 0)
            {
                cout << 0 << endl;
            }
            else
                cout << getyinzi(m) << endl;
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
string str(int n)
{
    n = 2*n-1;
    string s = "";
    while (n)
    {
        s += "*";
        n--;
    }
    return s;
}
int main()
{
    int n;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1 - i; j++)
            {
                cout << " ";
            }
            cout << str(i + 1) << endl;
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                cout << " ";
            }
            cout << str(n - 1 - i) << endl;
        }
    }
    return 0;
}
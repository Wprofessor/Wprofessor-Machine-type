#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }
        vector<int> v;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int ok = v[1] - v[0];
        int tag = 1;
        for (int i = 1; i < v.size() - 1; i++)
        {
            if ((v[i + 1] - v[i]) != ok)
            {
                tag = 0;
                break;
            }
        }
        if (tag)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}
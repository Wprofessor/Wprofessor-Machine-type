#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> v;
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int mid = n / 2;
        int left, right;
        left = right = 0;
        for (int i = 0; i < n; i++)
        {
            if (v[i] < v[mid])
                left++;
            if (v[i] > v[mid])
                right++;
        }
        if (left == right)
            cout << v[mid] << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}
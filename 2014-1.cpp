#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int> v;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        int left = 0, right;
        int tag = v[0], ok = 0;
        for (int i = 0; i < n - 1; i++)
        {

            if (v[i] == v[i + 1])
                left++;
            else
            {

                if (left > ok)
                {
                    ok = left;
                    tag = v[i];
                }

                left = 0;
            }
        }
        cout << tag << endl;
    }

    return 0;
}
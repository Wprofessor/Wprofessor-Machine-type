#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (cin >> n)
    {
        vector<vector<int>> MAP;
        vector<int> m;
        vector<int> result;
        int x;
        for (int i = 0; i < n; i++)
        {
            m.clear();
            int ok = 0;
            for (int j = 0; j < n; j++)
            {
                cin >> x;
                ok += x;
                m.push_back(x);
            }
            result.push_back(ok);
            MAP.push_back(m);
        }
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            int ok = 0;
            for (int j = 0; j < n; j++)
            {
                ok += MAP[j][i];
                if (i == j)
                {
                    temp += MAP[i][j];
                }
            }
            result.push_back(ok);
        }
        result.push_back(temp);
        sort(result.rbegin(), result.rend());
        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i];
            if (i < n * n - 1)
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
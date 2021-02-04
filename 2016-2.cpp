#include <bits/stdc++.h>
using namespace std;
bool judge(int i, int j, int k, int Map[25][25])
{
    if (Map[i + 1][j] == k || Map[i - 1][j] == k || Map[i][j + 1] == k || Map[i][j - 1] == k)
        return true;
    else
    {
        return false;
    }
}
int main()
{
    int n, m, t, k;
    int Map[25][25];
    int v[55];
    while (cin >> n >> m >> t >> k)
    {
        memset(v, 0, sizeof(v));
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                cin >> Map[i][j];
                v[Map[i][j]] = 1;
            }
        }
        int sum = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (Map[i][j] != k)
                {
                    if (judge(i, j, k, Map))
                    {

                        sum += v[Map[i][j]];
                        v[Map[i][j]] = 0;
                    }
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int sit[20][5];
int sum[20];
int judge(int x)
{
    for (int i = 0; i < 20; i++)
    {
        if (sum[i] >= x)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    while (cin >> n)
    {
        vector<int> v;
        memset(sit, 0, sizeof(sit));
        // memset(sum, 5, sizeof(sum));
        for (int  i = 0; i < 20; i++)
        {
            sum[i] = 5;
        }
        
        int x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < v.size(); i++)
        {
            int ok = judge(v[i]);
            int count = 0;
            if (ok!=-1)
            {
                sum[ok] -= v[i];
                for (int j = 0; j < 5; j++)
                {
                    if (!sit[ok][j] && count != v[i])
                    {
                        sit[ok][j] = 1;
                        count++;
                        cout << ok * 5 + j+1;
                        if (count < v[i])
                            cout << " ";
                    }
                }
                cout << endl;
            }
            else
            {
                for (int x = 0; x < 20; x++)
                {
                    for (int y = 0; y < 5; y++)
                    {
                        if (!sit[x][y] && count != v[i])
                        {
                            sit[x][y] = 1;
                            sum[x] -= 1;
                            cout << x * 5 + y+1;
                            count++;
                            if (count < v[i])
                                cout << " ";
                        }
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int save[105][105];
    while (cin >> n)
    {
        int x1_right, x1_left, y1_right, y1_left;
        int x2_right, x2_left, y2_right, y2_left;
        cin >> x1_left >> y1_left >> x1_right >> y1_right;
        cin >> x2_left >> y2_left >> x2_right >> y2_right;
        memset(save, 0, sizeof(save));
        for (int i = y1_left; i < y1_right; i++)
        {
            for (int j = x1_left; j < x1_right; j++)
            {
                save[i][j] = 1;
            }
        }
        for (int i = y2_left; i < y2_right; i++)
        {
            for (int j = x2_left; j < x2_right; j++)
            {
                save[i][j] = 1;
            }
        }
        int sum = 0;
        for (int i = 0; i < 103; i++)
        {
            for (int j = 0; j < 103; j++)
            {
                if (save[i][j])
                {
                    sum++;
                }
            }
        }
        cout << sum << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int get_reward[3] = {0, 1, 2};
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
        int count = 0;
        int sum = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            if (v[i] == 1)
                sum += 1;
            if (v[i] == 2)
            {
                if (v[i] != v[i - 1])
                    count = 0;
                count++;
                sum += 2 * count;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
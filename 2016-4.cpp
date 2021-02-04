#include <bits/stdc++.h>
using namespace std;
int cal(int x)
{
    int sum = 0;
    while (x)
    {
        sum += x % 10;
        x /= 10;
    }
    return sum;
}
int main()
{
    int n;
    vector<int> v;
    while (cin >> n)
    {
        if (!n)
        {
            break;
        }
        v.push_back(n);
    }
    for (int i = 0; i <= v.size(); i++)
    {
        v[i] = cal(v[i]);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
        if (i < v.size() - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}
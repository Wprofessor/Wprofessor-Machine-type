#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    string s;
    int reward;
} Grade;
bool cmp(Grade x1, Grade x2)
{
    if (x1.reward != x2.reward)
    {
        return x1.reward > x2.reward;
    }
    return x1.s < x2.s;
}
int main()
{
    int n;
    while (cin >> n)
    {   
        string str;
        int r;
        Grade ex;
        vector<Grade> g;
        for (int i = 0; i < n; i++)
        {
            cin >> str >> r;
            ex.s = str;
            ex.reward = r;
            g.push_back(ex);
        }
        sort(g.begin(),g.end(),cmp);
        for (int i = 0; i < n; i++)
        {
            cout << g[i].s << " "<< g[i].reward << endl;
        }
        
    }
}
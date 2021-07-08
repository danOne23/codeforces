#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<int> f;
    for (int i = 0; i < m; i++)
    {
        f.push_back(0);
        cin >> f[i];
    }
    sort(f.begin(), f.end());

    int lowestDiff = 100000000;

    for (int i = 0; i < m - n; i++)
    {
        int diff = abs(f[i] - f[i + n - 1]);
        if (diff < lowestDiff)
            lowestDiff = diff;
    }

    cout << lowestDiff << endl;
}
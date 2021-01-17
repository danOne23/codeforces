#include <bits/stdc++.h>

using namespace std;

long long solve(int a, int b, int c, int d) {
    if (a <= b) return b;
    if (c <= d) return -1;
    int firstAlarm = (a-b);
    int sleepPerSnooze = (c-d);
    int snoozes = firstAlarm/sleepPerSnooze;
    if (snoozes * sleepPerSnooze < firstAlarm) ++snoozes;
    return (long long)c*snoozes + b;
}

int main(int argc, char const *argv[])
{
    int t = 0;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int a, b, c, d = 0;
        cin >> a >> b >> c >> d;
        cout << solve(a, b, c, d) << endl;
        solve(a, b, c, d);
    }
    return 0;
}

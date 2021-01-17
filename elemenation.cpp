#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    for (int i = 0; i < t; i++) {
        int a, b, c, d = 0;
        cin >> a >> b >> c >> d;

        int sum1 = a + b;
        int sum2 = c + d;

        if (sum1 > sum2) cout<<sum1<<endl;
        else cout<<sum2<<endl;
    }
}
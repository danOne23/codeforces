#include <bits/stdc++.h>
using namespace std;

int main() {
    /*
    long n, k, mid;
    cin>>n>>k;
    mid=n/2;
    if((n%2)==1) mid++;
    if(k <= mid) cout<<(2*k-1)<<endl;
    else cout<<((k-mid)*2);
    */
    long long n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << k * 2 - 1 << endl;
    }
    else
    {
        cout << (k - (n + 1) / 2) * 2 << endl;
    }
    return 0;
}
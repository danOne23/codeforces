#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, o=0, t=0, c=0;
    cin>>n;
    int a [n];
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        t+=a[i];
    }

    sort(a, a+n);
    reverse(a,a+n);

    for (int i=0; i < n; i++) {
        if(c>(t/2)) break;
        c+=a[i];
        o++;
    }
    cout<<o<<endl;
}
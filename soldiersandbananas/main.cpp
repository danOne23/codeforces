#include <bits/stdc++.h>
using namespace std;

int main() {

    int k, n, w, want, p = 0;
    cin>>k>>n>>w;

    for (int i = 1; i <= w; i++)
    {
        p+=i*k;
    }

    want = p-n;
    if (want<=0) want = 0;

    cout<<want;
}
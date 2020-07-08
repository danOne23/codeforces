#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, min = 0, tram = 0, in, out;
    cin>>n;
    
    for (int i = 0; i < n; i++)
    {
        if (i>0&&tram>min) min = tram;

        cin>>out>>in;
        tram-=out;
        tram+=in;
    }
    cout<<min;
}
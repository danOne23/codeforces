#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    string results [t];

    for (int i = 0; i < t; i++)
    {
        int n, a, b, c, d;
        cin>>n>>a>>b>>c>>d;

        if (n * (a - b) > c + d || n * (a + b) < c - d) {
            results[i] = "No";
        } else results[i] = "Yes";
    }

    for (int i = 0; i < t; i++)
    {
        cout<<results[i]<<endl;
    }
    
    

}
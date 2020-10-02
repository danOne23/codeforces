#include <bits/stdc++.h>
using namespace std;

int main() {

    float n;
    cin>>n;

    float result = 0;

    for (int i = 0; i < n; i++)
    {
        int p;
        cin>>p;
        result += p;
    }

    float resultP = result / n;

    cout<<resultP<<endl;

}
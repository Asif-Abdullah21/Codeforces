#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;     //ZEHAD007
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int c=n-2;
        c=c/k;
        cout<<(2+c)<<endl;
    }
    return 0;
}

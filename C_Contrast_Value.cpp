#include<bits/stdc++.h>
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
fio;
int t;
cin >>t;

while (t--)
{
    int n;
    cin >> n;
    int c=0;

    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 1; i < n; i++)
    {
        c = c + abs(a[i-1]-a[i]);
    }

    sort(a,a+n);
    int cnt=1;
    int sum=0;

    for (int i = n-1; i>0; i++)
    {
        sum += abs(a[i]-a[0]);
        cnt++;
        if(c==sum) break;
    }

    cout << cnt << endl;
    
    
    
}

return 0;
}
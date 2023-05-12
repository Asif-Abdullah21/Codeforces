#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t; 

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n + 1];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        sort(a, a + n);
        int i,j;

        for (i = 0,j=n-1; i < k; i++)
        {
            sum -= a[j];
            j--;
        }
     
        j++;
        ll mx = sum;
    
        for (i = 0; i < n; i++)
        {
            k--;
            sum -= a[i];
            sum -=a[i+1];
            i++;
            sum += a[j];
            j++;
           
            mx = max(mx,sum);
            if(k==0) break;
        }

       cout << mx << endl; 
        
    }

    return 0;
}


/*
Sahinul islam vai:

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define printv(x) for(ll i=0;i<x.size();i++){if(i+1==x.size())cout<<x[i]<<endl;else cout<<x[i]<<" ";}
#define printa(x,n) for(ll i=0;i<n;i++){if(i+1==n)cout<<x[i]<<endl;else cout<<x[i]<<" ";}
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define INF        9223372036854775806
#define MINF       -9223372036854775806
#define eps          1e-8
#define gcd __gcd
#define yes "YES"
#define no "NO"
#define pb push_back
#define si size()
#define in " "
#define mone "-1"
#define zero "0"
#define one "1"
#define PI acos(-1)
#define nl "\n"
#define siz(pir) (ll)pir.size()
const ll mod=1e9+7;
const double pi=2*acos(0.0);
ll lcm(ll a,ll b)
{
    return (a/(__gcd(a, b)))*b;
}
const ll mx=1e6+10;


int main()
{
    fast
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+10];
        ll sum=0;
        for(ll i=0; i<n; i++)
        {

            cin>>a[i];
            sum+=a[i];
        }
        sort(a,a+n);
        ll x=k;
        ll i;
        for(i=n-1; i>=0; i--)
        {

            if(x==0)break;
            sum-=a[i];
            x--;
        }
        ll mx=sum;
        for(ll j=0;j<n;j+=2)
        {
            k--;
            sum-=a[j];
            sum-=a[j+1];
            i++;
            sum+=a[i];
            mx=max(mx,sum);
            if(k==0)break;

        }
        cout<<mx<<nl;

    }
    return 0;
}


*/
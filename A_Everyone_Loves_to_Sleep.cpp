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
        int n,h,m,final_h,final_m;
        cin >> n >> h >> m;
        pii a[n+1];

        for (int i = 0; i < n; i++)
        {
           cin >> a[i].first >> a[i].second;
        }
        
        sort(a,a+n);
        int f=0;

        for (int i = 0; i < n; i++)
        {
            if(a[i].first>=h && a[i].second>=m)
            {
                final_h = a[i].first;
                final_m = a[i].second;
                f=1;
                break;
            }
        }

        if(f==0)
        {
            final_h = a[0].first;
            final_m = a[0].second;
        }

        int ans_h, ans_m;

        if(final_m>=m && final_h>=h)
        {
            ans_m = final_m-m;
            ans_h = final_h-h;
        }
        else if(final_m<m && final_h>h)
        {
            ans_h = final_h-h-1;
            ans_m = (60-m)+final_m;
        }
        else if(final_m<m && final_h==h)
        {
            ans_h = final_h-h;
            ans_m = (60-m)+final_m;
        }
        else if(final_h<h && final_m>=m)
        {
            ans_h = (24-h)+final_h;
            ans_m = final_m-m;
        }
        else if(final_h<h && final_m<m)
        {
            ans_h = (24-h-1)+final_h;
            ans_m = (60-m)+final_m;
        }

        cout << ans_h << " "<< ans_m << endl;
        
    }
    

    return 0;
}
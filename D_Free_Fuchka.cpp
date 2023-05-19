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
    int n;
    cin >> n;
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int cnt=0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if(a[i] != a[j] && a[i] != a[k] && a[j] !=a[k])
                {
                    if(i<j && j<k)
                    {
                        if(a[i]+a[j]>a[k] && a[i]+a[k]>a[j] && a[j]+a[k]>a[i]) cnt++;
                    }
                }
            }
            
        }
        
    }
    
    cout << cnt << endl;
    

    return 0;
}
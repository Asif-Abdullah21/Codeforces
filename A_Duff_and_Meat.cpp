#include <bits/stdc++.h>
#define endl "\n"
#define nn (cout << "NO\n")
#define yy (cout << "YES\n")
#define ll long long
#define ull unsigned long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define pii pair<int, int>
#define pll pair<long long, long long>
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;

int main()
{
    FIO;
    int n;
    cin >> n;

    pii a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }

    int mn = INT_MAX;
    ll ans =0;

    for (int i = 0; i < n; i++)
    {
        mn = min(mn,a[i].second);
        ans += (a[i].first*mn);
    }

    cout << ans << endl;

    return 0;
}






//-------------------------------------



// #include <bits/stdc++.h>
// #define endl "\n"
// #define nn (cout << "NO\n")
// #define yy (cout << "YES\n")
// #define ll long long
// #define ull unsigned long long
// #define gcd(a, b) __gcd(a, b)
// #define lcm(a, b) ((a / gcd(a, b)) * b)
// #define pii pair<int, int>
// #define pll pair<long long, long long>
// #define mm(a, x) memset(a, x, sizeof(a))
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace std;

// int main()
// {
//     FIO;
//     int n;
//     cin >> n;

//     pii a[n+5];
    

//     for (int i = 1; i <= n; i++)
//     {
//         cin >> a[i].first >> a[i].second;
//     }

//     int mn = INT_MAX;
//     ll ans =0;

//     for (int i = 1; i <= n; i++)
//     {
//         mn = min(mn,a[i].second);

//         ans += (a[i].first*mn);

//         // if(mn<a[i].second) 
//         // {
//         //     ans += (a[i].first*mn);
//         // }
//         // else ans += (a[i].first*a[i].second);
//     }

//     cout << ans << endl;

//     return 0;
// }

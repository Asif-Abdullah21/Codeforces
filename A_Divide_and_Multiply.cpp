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
#define sz(v) v.size()
#define mm(a, x) memset(a, x, sizeof(a))
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
using namespace std;
int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        FIO;
        int n;
        cin >> n;
        vector<ll> v(n);
        int cnt=0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            while (v[i]%2==0)
            {
                v[i] /= 2;
                cnt++;
            }
        }

        sort(v.begin(),v.end());
        
        for (int i = 0; i < cnt; i++)
        {
            v[n-1] = v[n-1]*2;
        }

        ll sum =0;

        for (int i = 0; i < n; i++)
        {
            sum += v[i];
        }
        cout << sum << endl;
        
         
    }
     
    return 0;
}








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
// #define sz(v) v.size()
// #define mm(a, x) memset(a, x, sizeof(a))
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// using namespace std;
// int main()
// {
//     FIO;
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         FIO;
//         int n;
//         cin >> n;
//         vector<ll> v(n); //logic from wrong submission channel
//         int cnt=0;
//         ll sum =0;
//         ll mx = 0;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> v[i];
//             while (v[i]%2==0)
//             {
//                 v[i] /= 2;
//                 cnt++;
//             }
//             mx = max(mx,v[i]);
//             sum = sum+v[i];
//         }

//         ll temp = mx;

//         for (int i = 0; i < cnt; i++)
//         {
//             temp = temp*2;
//         }

//         sum = sum+temp;
//         sum = sum-mx;
//         cout << sum << endl;
        
         
//     }
     
//     return 0;
// }

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
        ll n;
        cin >> n;
        ll a[n];

        ll sum =0;

        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a,a+n);

        for (size_t i = 0; i < n-1; i++)
        {
            if(a[i]<=0 && a[i+1]<=0) 
            {
                a[i] = abs(a[i]);
                a[i+1] = abs(a[i+1]);
                i++;
            }
            else if((a[i]<0 && a[i+1]>0) && abs(a[i])>a[i+1]) 
            {
                a[i] = abs(a[i]);
                a[i+1] = -a[i+1];
                i++;
            }
        }

        for (int i = 0; i < n; i++)
        {
            sum += a[i];
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
//         ll n;
//         cin >> n;
//         ll a[n];

//         ll sum =0;

//         for (size_t i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             sum += a[i]; 
//         }

//         sort(a,a+n);

//         for (size_t i = 0; i < n-1; i++)
//         {
//             if(a[i]<=0 && a[i+1]<=0) 
//             {
//                 sum += ((abs(a[i])*2) + (abs(a[i+1]))*2);
//                 i++;
//             }
//             else if((a[i]<0 && a[i+1]>0) && abs(a[i])>a[i+1]) 
//             {
//                 sum += ((abs(a[i])*2) - (a[i+1]*2));
//                 i++;
//             }
//         }

//         cout << sum << endl;

        
//     }
     
//     return 0;
// }

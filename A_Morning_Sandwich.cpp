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
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int a,b,c;
//         cin >> a >> b >> c;
//         int d = b+c;
        
//         if(a>d)
//         {
//             cout << d+d+1 << endl;
//         }
//         else if(a==d)
//         {
//             cout << a+1 << endl;
//         }
//         else{
//             cout << a+((a+1)/2) << endl;
//         }
         
//     }
     
//     return 0;
// }


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
    int t;
    cin >> t;

    while (t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int d = b+c;

       if(a<=d)
       {
           int ans = a+(a-1);
           cout <<ans << endl;
       }
       else{
           int ans = d+(d+1);
           cout << ans << endl;
       }
         
    }
     
    return 0;
}
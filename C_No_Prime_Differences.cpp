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
        int n, m;
        cin >> n >> m;
        int a[n+2][m+2];

        int tm = 1;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                a[i][j] = tm;
                tm++;
            }
        }

        for (int i = 2; i <= n; i+=2)
        {
            for (int j = 1; j <= m; j++)
            {
                    cout << a[i][j] << " ";
            }
            cout << endl;
        }

        for (int i = 1; i <= n; i+=2)
        {
            for (int j = 1; j <= m; j++)
            {
                    cout << a[i][j] << " ";
            }
            cout << endl;
        }

        cout << endl;
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
//         int n, m;
//         cin >> n >> m;

//         if (n % 2 == 0 && m % 2 == 0)
//         {
//             int a[n][m];

//             int tm1 = n * m;
//             int tm2 = tm1 - 1;

//             int tm3 = 2;
//             int tm4 = 1;

//             for (int i = 0; i < n / 2; i++)
//             {
//                 for (int j = 0; j < n; j++)
//                 {
//                     if (j % 2 == 0)
//                     {
//                         a[i][j] = tm1;
//                         tm1 -= 2;
//                     }
//                     else
//                     {
//                         a[i][j] = tm3;
//                         tm3 += 2;
//                     }
//                 }
//             }

//             swap(a[0][0], a[(n / 2) - 1][n - 1]);

//             for (int i = n / 2; i < n; i++)
//             {
//                 for (int j = 0; j < n; j++)
//                 {
//                     if (j % 2 == 0)
//                     {
//                         a[i][j] = tm2;
//                         tm2 -= 2;
//                     }
//                     else
//                     {
//                         a[i][j] = tm4;
//                         tm4 += 2;
//                     }
//                 }
//             }

//             swap(a[n / 2][0], a[n - 1][n - 1]);

//             for (int i = 0; i < n; i++)
//             {
//                 for (int j = 0; j < n; j++)
//                 {
//                     cout << a[i][j] << " ";
//                 }
//                 cout << endl;
//             }
//             cout << endl;
//         }
//     }

//     return 0;
// }

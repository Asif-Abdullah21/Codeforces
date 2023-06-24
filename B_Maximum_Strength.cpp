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
using namespace std;
#define FIO                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

int main()
{
    FIO;
    int t;
    cin >> t;

    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        while (s1.size() < s2.size())
            s1 = "0" + s1;
        while (s2.size() < s1.size())
            s2 = "0" + s2;

        ll sum = 0;
        int f = 0;
        int cnt=0;

        for (int i = 0; i < s1.size(); i++)
        {
            cnt++;
            if (s1[i] != s2[i])
            {
                sum = abs((s1[i] - '0') - (s2[i] - '0'));
                break;
            }
        }

        sum = sum + ((s1.size()-cnt)*9);

        cout << sum << endl;
    }

    return 0;
}



//-----------------------------------------------






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
// using namespace std;
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);

// int main()
// {
//     FIO;
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s1, s2;
//         cin >> s1 >> s2;

//         while (s1.size() < s2.size())
//             s1 = "0" + s1;
//         while (s2.size() < s1.size())
//             s2 = "0" + s2;

//         ll sum = 0;
//         int f = 0;

//         for (int i = 0; i < s1.size(); i++)
//         {
//             if (f == 0)
//             {
//                 if (s1[i] != s2[i])
//                 {
//                     sum = abs((s1[i] - '0') - (s2[i] - '0'));
//                     f = 1;
//                 }
//             }
//             else sum += 9;
//         }

//         cout << sum << endl;
//     }

//     return 0;
// }



//-------------------------------------------------------------------------------





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
// using namespace std;
// #define FIO                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);

// int main()
// {
//     FIO;
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         string s1, s2;
//         cin >> s1 >> s2;

//         if (s1.size() < s2.size())
//         {
//             string temp;
//             for (int i = 0; i < s2.size() - s1.size(); i++)
//             {
//                 temp += '0';
//             }
//             s1 = temp + s1;
//         }
//         else if (s2.size() < s1.size())
//         {
//             string temp;
//             for (int i = 0; i < s1.size() - s2.size(); i++)
//             {
//                 temp += '0';
//             }
//             s2 = temp + s2;
//         }

//         ll sum = 0;
//         ll cnt = 0;
//         for (int i = 0; i < s1.size(); i++)
//         {
//             cnt++;
//             if (s1[i] != s2[i])
//             {
//                 sum = abs((s1[i]-'0')-(s2[i]-'0'));
//                 break;
//             }
//         }

//         sum = sum + ((s1.size() - cnt) * 9);
//         cout << sum << endl;
//     }

// return 0;
// }

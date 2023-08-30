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
        int n,a,q;
        cin >> n>> a >> q;
        string s;
        cin >> s;

        if(a>=n) yy;
        else{
            int minusCnt=0;
            int f = 0;
            int ans =0;

            for (int i = 0; i < s.size(); i++)
            {
                if(s[i]=='+') a++;
                else minusCnt++;
                if(a>=n) f=2;
                if(a>=n && (a-minusCnt)>=n) f=1; 
                if(f==1) ans =1;
            }

          if(ans) yy;
          else if(f==2) cout << "MAYBE\n";
          else nn;
            
        } 
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
//         int n,a,q;
//         cin >> n>> a >> q;
//         string s;
//         cin >> s;

//         if(a>=n) yy;
//         else{
//             int plusCnt =0,minusCnt=0;

//             for (int i = 0; i < s.size(); i++)
//             {
//                 if(s[i]=='+') plusCnt++;
//                 else minusCnt++;
//             }

//             if(a+plusCnt<n) nn;
//             else if(a+plusCnt>=n && (a+plusCnt-minusCnt)<n) cout << "MAYBE\n";
//             else yy; 
            
//         } 
//     }
     
//     return 0;
// }

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
        int h,m;
        cin >> h >>m;

        int minute = 60-m;
        int hour = 24-(h+1);
        minute += (hour*60);

        cout << minute << endl;
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
//         int h,m;
//         cin >> h >>m;  //idea from zehad_kazi
//         int ans =0;
//         int hour = 24-h;
//         hour = hour*60;
//         ans = hour - m;

//         cout << ans << endl;
//     }
     
//     return 0;
// }


//-----------------------------------------------------


// #include<bits/stdc++.h>
// #define      endl            '\n'
// #define      yes             "YES"
// #define      no              "NO"
// #define      ll              long long
// #define      pb              push_back
// #define      pii             pair <int,int>
// #define      pll             pair <long long,long long>
// #define      rev(a)          reverse(a, a+n);   
// #define      sort(a)         sort(a, a+n);   
// #define      Srev(s)         reverse(s.begin(), s.end());      
// #define      sz(s)           s.size()
// #define      gcd(a,b)        __gcd(a,b)
// #define      lcm(a,b)        (a*b)/gcd(a,b)
// #define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;
// int main()
// {
//     fastIO;                  // GUSSURI (Iftekhar vai) //
 
//     int test;
//     cin >> test;

//     while(test--){
//         int h, m;
//         cin >> h >> m;

//         int totalTime = 24*60;
//         int timeGone = (h*60)+m;

//         int ans = totalTime - timeGone;

//         cout << ans << endl;
//     }

//     return 0;
// }



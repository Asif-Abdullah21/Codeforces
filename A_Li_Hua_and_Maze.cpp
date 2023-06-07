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
        int n,m; cin >> n >> m;

        int x1,y1,x2,y2;

        cin >> x1 >> y1 >> x2 >> y2;
        int move1=0,move2=0;

        if(x1+1<=n) move1++;
        if(x1-1>=1) move1++;
        if(y1+1<=m) move1++;
        if(y1-1>=1) move1++;

        if(x2+1<=n) move2++;
        if(x2-1>=1) move2++;
        if(y2+1<=m) move2++;
        if(y2-1>=1) move2++;

        cout << min(move1,move2) << endl;

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
//         int n,m; cin >> n >> m;

//         int x1,y1,x2,y2;

//         cin >> x1 >> y1 >> x2 >> y2;
//         int cnt1=4,cnt2=4,cnt3=4;

//         if(x1==1 && y1 ==1) cnt1=2;
//         if(x1==n && y1 ==m) cnt1=2;
//         if(x1==n && y1==1) cnt1=2;
//         if(x1==1 && y1==m) cnt1=2;
//         if(y1==1 || y1==m) cnt2=3;
//         if(x1==1 || x1==n) cnt2=3;


//         if(x2==1 && y2 ==1) cnt1=2;
//         if(x2==n && y2 ==m) cnt1=2;
//         if(x2==n && y2==1) cnt1=2;
//         if(x2==1 && y2==m) cnt1=2;
//         if(y2==1 || y2==m) cnt2=3;
//         if(x2==1 || x2==n) cnt2=3;

//         // else cnt3=4;

//         cout << min({cnt1,cnt2,cnt3}) << endl;

//     }
    
  
//     return 0;
// }











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
//         int n,m; cin >> n >> m;

//         int x1,y1,x2,y2;

//         cin >> x1 >> y1 >> x2 >> y2;
//         int mn = 10;

//         if(x1==1 && y1 ==1) mn = min(mn,2);
//         if(x1==n && y1 ==m) mn = min(mn,2);
//         if(x1==n && y1==1) mn = min(mn,2);
//         if(x1==1 && y1==m) mn = min(mn,2);
//         if(y1==1 || y1==m) mn = min(mn,3);
//         if(x1==1 || x1==n) mn = min(mn,3);


//         if(x2==1 && y2 ==1) mn = min(mn,2);
//         if(x2==n && y2 ==m) mn = min(mn,2);
//         if(x2==n && y2==1) mn = min(mn,2);
//         if(x2==1 && y2==m) mn = min(mn,2);
//         if(y2==1 || y2==m) mn = min(mn,3);
//         if(x2==1 || x2==n) mn = min(mn,3);

//         else mn = min(mn,4);

//         cout << mn << endl;

//     }
    
  
//     return 0;
// }

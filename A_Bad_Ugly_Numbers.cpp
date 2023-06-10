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
        int n;
        cin >> n;
        int sum = 0;

        if(n==1) cout << -1 << endl;
        else{
            cout << 2; //4
            for(int i=0;i<n-1;i++)
            {
                cout << 3;
                sum += 3;
            }

            cout << endl;
        }
    }
    
     
    return 0;
}








// #include<bits/stdc++.h>
// #define      endl            '\n'
// #define      yes             "YES"
// #define      no              "NO"
// #define      ll              long long
// #define      pb              push_back
// #define      pii             pair <int,int>
// #define      pll             pair <long long,long long>
// #define      rev(a)          reverse(a, a+n);
// #define      Srev(s)         reverse(s.begin(), s.end());
// #define      sz(s)           s.size()
// #define      gcd(a,b)        __gcd(a,b)
// #define      lcm(a,b)        (a*b)/gcd(a,b)
// #define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
// using namespace std;
// int main()
// {
//     fastIO;             // Polash_Islam vai's logic //
    
//     int test;
//     cin >> test;

//     while(test--){
//         int n, i;
//         cin >> n;

//         if(n==1) cout << -1 << endl;

//         else{
//             for(i=1; i<=n-1; i++){
//                 cout << 7; 
//             }
//             cout << 4 << endl;
        
//         }
//     }


//     return 0;
// }
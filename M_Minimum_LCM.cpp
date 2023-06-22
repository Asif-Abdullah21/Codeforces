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
        cin >>n;
        
        if(n%2==0)
        {
            cout << n/2 << " " << n/2 << endl;
        }
        else{
            int ans=1;
            for (int i = 2; i <= sqrt(n); i++)
            {
                if(n%i==0)
                {
                    ans = n/i; // n re 1 bade sob cheye choto divisor diya vag kre boro devisor bair krtesi
                    break;
                }
            }

            cout << ans << " " << n-ans << endl;
            
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
//     fastIO;             // Code Idea from Hridhon vai //

//     int test;
//     cin >> test;

//     while(test--){
//         int n, i, val = 1;
//         cin >> n;

//         for(i=2; i<=sqrt(n); i++){
//             if(n%i == 0){
//                 val = n/i;
//                 break;
//             }
//         }

//         cout << val << " " << n-val << endl;
//     }

//     return 0;
// }
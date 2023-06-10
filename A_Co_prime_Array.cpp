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
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int cnt=0;

    for (int i = 0; i < v.size()-1; i++)
    {
        if(gcd(v[i],v[i+1])!=1)
        {
            cnt++;
            v.insert(v.begin()+i+1,1);
        }
    }

    cout << cnt << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << ' ';
    }
    
    return 0;
}




//#include <bits/stdc++.h>
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
//     int n;
//     cin >> n;

//     vector<int> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         cin >> v[i];
//     }
//     int cnt=0;

//     for (int i = 0; i < n-1; i++)
//     {
//         if(gcd(v[i],v[i+1])!=1)
//         {
//             cnt++;
//         }
//     }

    
//     cout << cnt << endl;   //accepted alhamdulillah

//     for (int i = 0; i < n-1; i++)
//     {
//         if(gcd(v[i],v[i+1])!=1)
//         {
//             cout << v[i] << ' ' << 1 << ' ';
//         }
//         else cout << v[i] << ' ';
//     }

//     cout << v[n-1] << endl; 

//     // for (int i = 0; i < v.size(); i++)
//     // {
//     //     cout << v[i] << ' ';
//     // }
    
//     return 0;
// }








//---------------------------------------------------------------------


//#include<bits/stdc++.h>
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
//     fastIO;

//     int n, i, cnt = 0; //muhammad_sayem (with 2 vector)
//     cin >> n;

//     vector<int> v(n);
//     vector<int> v2;

//     for(i=0; i<n; i++){
//         cin >> v[i];
//     }

//     for(i=0; i<n-1; i++){
//         if( (gcd(v[i], v[i+1]) == 1) ){
//             v2.pb(v[i]);
//         }

//         else if( (gcd(v[i], v[i+1]) != 1) ){
//             v2.pb(v[i]);
//             v2.pb(1);
//             cnt++;
//         }
//     }

//     v2.push_back(v[n-1]);

//     cout << cnt << endl;

//     for(i=0; i<v2.size(); i++){
//         cout << v2[i] << " ";
//     }

//     return 0;
// }


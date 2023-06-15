






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
        cin >> n;
        int a[n];
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if(a[i]%2==0) v.push_back(a[i]);
        }

        for (int i = 0; i < n; i++)
        {
            if(a[i]%2!=0) v.push_back(a[i]);
        }

        // for (int i = 0; i < v.size(); i++)
        // {
        //     cout << v[i] <<" ";
        // }
        // cout << endl;
        int cnt=0;

        for (int i = 0; i < n-1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(gcd(v[i],2*v[j])>1) cnt++;
            }
            
        }

        cout << cnt << endl;
        
         
    }
     
    return 0;
}






//-----------------------------------------------------------






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
//         FIO;
//         int n;
//         cin >> n;
//         int a[n];
//         vector<int> v1,v2;

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//             if(a[i]%2==0) v1.push_back(a[i]);
//             else v2.push_back(a[i]);
//         }

//         v1.insert(v1.begin()+v1.size(),v2.begin(),v2.end());

//         // for (int i = 0; i < v1.size(); i++)
//         // {
//         //     cout << v1[i] <<" ";
//         // }
//         // cout << endl;
//         int cnt=0;

//         for (int i = 0; i < n-1; i++)
//         {
//             for (int j = i+1; j < n; j++)
//             {
//                 if(gcd(v1[i],2*v1[j])>1) cnt++;
//             }
            
//         }

//         cout << cnt << endl;
        
        
         
//     }
     
//     return 0;
// }












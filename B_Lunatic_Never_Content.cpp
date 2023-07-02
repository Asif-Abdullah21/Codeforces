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
        int n;
        cin >> n;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if(n==1) 
        {
            cout << 0 <<endl;
            continue;
        }

        vector<int> v;

        for (int i = 0,j=n-1; i < j; i++,j--) //for (int i = 0,j=n-1; i <= j; i++,j--)
        {
            v.push_back(abs(a[i]-a[j]));
        }

        int GCD = v[0];

        for (int i = 1; i < v.size(); i++)
        {
            GCD = gcd(v[i],GCD);
        }

        cout << GCD << endl; 
         
    }
     
    return 0;
}



//---------------------------------------------------------------------------





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
//         int n;
//         cin >> n;
//         int a[n];

//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i];
//         }

//         // if(n==1) 
//         // {
//         //     cout << 0 <<endl;
//         //     continue;
//         // }

//         int GCD=0;

//         for (int i = 0,j=n-1; i < j; i++,j--)
//         {
//             GCD = gcd(abs(a[i]-a[j]),GCD);
//         }

//         cout << GCD << endl;
        
        
         
//     }
     
//     return 0;
// }












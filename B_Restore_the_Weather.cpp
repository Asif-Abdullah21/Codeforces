#include<bits/stdc++.h>
#define   ll         long long
#define   pii        pair<int,int>
#define   sz(v)      v.size()
#define   mem(a,x)   memset(a,x,sizeof(a))
#define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
fio;
int t;
cin >> t;

while (t--)
{
    int n,k;
    cin >> n >> k;
    pii a[n+1];
    pii b[n+1];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }

    for (int i = 0; i < n; i++)
    {
        cin >> b[i].first;
        b[i].second = i;
    }

    sort(a,a+n);
    sort(b,b+n);

    int c[n+1];

    for (int i = 0; i < n; i++)
    {
        c[a[i].second] = b[i].first;
    }

    for (int i = 0; i < n; i++)
    {
        cout << c[i] << " ";
    }

    cout << endl;

}

return 0;
}

//-------------------------

// #include<bits/stdc++.h>
// #define   ll         long long
// #define   pii        pair<int,int>
// #define   sz(v)      v.size()
// #define   mem(a,x)   memset(a,x,sizeof(a))
// #define   fio        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// using namespace std;
// int main()
// {
// fio;
// int t;
// cin >> t;

// while (t--)
// {
//     int n,k;
//     cin >> n >> k;
//     vector <pii> a(n);
//     vector <pii> b(n);

//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i].first;
//         a[i].second = i;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cin >> b[i].first;
//         b[i].second = i;
//     }

//     sort(a.begin(),a.end());
//     sort(b.begin(),b.end());

//     int c[n+1];

//     for (int i = 0; i < n; i++)
//     {
//         c[a[i].second] = b[i].first;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         cout << c[i] << " ";
//     }

//     cout << endl;

// }

// return 0;
// }

//---------------------------------------------------

// #include <bits/stdc++.h>
// #define ll long long
// #define pii pair<int, int>
// #define sz(v) v.size()
// #define mem(a, x) memset(a, x, sizeof(a))
// #define fio                       \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0)
// using namespace std;

// bool cmp(pii a, pii b)
// {
//     return a.first < b.first;
// }

// int main()
// {
//     fio;
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, k;
//         cin >> n >> k;
//         pii a[n + 1];
//         pii b[n + 1];
//         for (int i = 0; i < n; i++)
//         {
//             cin >> a[i].first;
//             a[i].second = i;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cin >> b[i].first;
//             b[i].second = i;
//         }

//         sort(a, a + n, cmp);
//         sort(b, b + n, cmp);

//         int c[n + 1];

//         for (int i = 0; i < n; i++)
//         {
//             c[a[i].second] = b[i].first;
//         }

//         for (int i = 0; i < n; i++)
//         {
//             cout << c[i] << " ";
//         }

//         cout << endl;
//     }

//     return 0;
// }

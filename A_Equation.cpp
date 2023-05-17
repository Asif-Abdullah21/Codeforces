#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define sz(v) v.size()
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()
{
    fio;
    int n;
    cin >> n;

    if(n==2) cout << 6 << " " << 4 << endl;
    else if(n%2==0) cout << n*2 << " "<< n << endl;
    else cout << n+9 << " " << 9 << endl;

    return 0;
}

/*muhammad_sayem

#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      sz(s)           s.size()
#define      pii             pair <int,int>
#define      pb              push_back
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO; 

    int n;
    cin >> n;

    if(n%2 == 0) cout << n+4 << " " << 4 << endl;
    else cout << n+9 << " " << 9 << endl;
                 
    return 0;
}




*/
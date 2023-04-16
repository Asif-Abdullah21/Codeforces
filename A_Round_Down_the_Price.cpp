// logic from jahid_hridoy vai

#include <bits/stdc++.h>

using namespace std;

#define ll long long


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

	int t;
	cin >> t; //logic from jahid_hridoy brother

	while(t--){

    int m;
    cin >> m;

    ll n = 1;

    while(n*10<=m)
    {
         n*=10;
    }

    cout << m-n << '\n';

	}

    return 0;
}


// my 1st code is in below:

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
// int main()
// {
//     fio;

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         ll m;
//         cin >> m;

//         if (m < 10)
//         {
//             cout << m - 1 << endl;
//         }
//         else if(m<100)
//         {
//             cout << m - 10 << endl;
//         }
//         else if(m<1000)
//         {
//             cout << m - 100 << endl;
//         }

//         else if(m<10000)
//         {
//             cout << m - 1000 << endl;
//         }

//         else if(m<100000)
//         {
//             cout << m - 10000 << endl;
//         }

//         else if(m<1000000)
//         {
//             cout << m - 100000 << endl;
//         }

//         else if(m<10000000)
//         {
//             cout << m - 1000000 << endl;
//         }

//         else if(m<100000000)
//         {
//             cout << m - 10000000 << endl;
//         }
        
//         else if(m<1000000000)
//         {
//             cout << m - 100000000 << endl;
//         }
//         else cout << 0 << endl;
//     }

//     return 0;
// }





/* jahid_hriody brother's main code

#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){

    int n;
    cin >> n;

    ll x = 1;

    while((x*10LL)<=n)x*=10LL;

    cout << n-x << '\n';

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);

	int t;
	cin >> t;

	while(t--){

            solve();

	}

    return 0;
}



*/


/* muhammad_sayem

#include<bits/stdc++.h>
#define    endl      '\n'
#define    yes       "YES"
#define    no        "NO"
#define    ll        long long
#define    fastIO    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    int test; // muhammad_sayem
    cin >> test;

    while(test--){
        int n, i, len = 0, rem;
        cin >> n;

        int num = n;

        while(num){
            rem = num%10;
            len++;
            num/=10;
        }

        if(len == 1) cout << n-1 << endl;
        else if(len == 2) cout << n-10 << endl;
        else if(len == 3) cout << n-100 << endl;
        else if(len == 4) cout << n-1000 << endl;
        else if(len == 5) cout << n-10000 << endl;
        else if(len == 6) cout << n-100000 << endl;
        else if(len == 7) cout << n-1000000 << endl;
        else if(len == 8) cout << n-10000000 << endl;
        else if(len == 9) cout << n-100000000 << endl;
        else if(len == 10) cout << n-1000000000 << endl;

    }

    return 0;
}




*/
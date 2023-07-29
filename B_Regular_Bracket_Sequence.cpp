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
    string s;
    cin >> s;
    stack<char> st;
    int cnt = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else
        {
            if (!st.empty())
            {
                if (st.top() == '(')
                {
                    st.pop();
                    cnt += 2;
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}


/*
#include<bits/stdc++.h>
#define      endl            '\n'
#define      yes             "YES"
#define      no              "NO"
#define      ll              long long
#define      pb              push_back
#define      pii             pair <int,int>
#define      pll             pair <long long,long long>
#define      rev(a)          reverse(a, a+n);
#define      Srev(s)         reverse(s.begin(), s.end());
#define      sz(s)           s.size()
#define      gcd(a,b)        __gcd(a,b)
#define      lcm(a,b)        (a*b)/gcd(a,b)
#define      fastIO          ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
int main()
{
    fastIO;

    string str;
    cin >> str;

    stack<char> st;
    int i, cnt = 0;

    for(i=0; i<str.size(); i++){
        if(str[i] == '('){
            st.push(str[i]);
        }
        else{
            if(!st.empty()){ //empty na thaka mane ( ase
                st.pop();   
                cnt += 2;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}


*/
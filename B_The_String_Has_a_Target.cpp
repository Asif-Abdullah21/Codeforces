#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
#define mem(a, x) memset(a, x, sizeof(a))
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        char temp;
        int temp_i = -1;

        if (n == 1) cout << s;
            
        else
        {
            for (char ch = 'a'; ch <= 'z'; ch++)
            {
                for (int i = n - 1; i >= 0; i--)
                {
                    if (s[i] == ch)
                    {
                        cout <<ch;
                        temp_i = i;
                        break;
                    }
                }

                if(temp_i != -1) break;
            }

            for (int i = 0; i < n; i++)
            {
                if(i==temp_i) continue;
                else cout << s[i];
            }
            
        }
        
        cout << endl;
    }

        return 0;
    }

/*muhammad_sayem

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

    int test;
    cin >> test;

    while(test--){
        int n, i, temp;
        cin >> n;
        string s1;
        cin >> s1;
        string s2;

        s2 = s1;          /// Copying s1 to s2 ///

        sort(s2.begin(), s2.end());       /// sorting s2 ///

        cout << s2[0];        /// printing s2 because s2[0] has the smallest character ///
        
        for(i=0; i<s1.size(); i++){       /// finding the index of the smallest character in s1 and holding it's index ///
            if(s1[i] == s2[0]){
                temp = i;
            }
        }

        for(i=0; i<s1.size(); i++){       /// printing s1 after s2[0] (ignoring smallest character) ///
            if(i != temp){
                cout << s1[i];
            }
        }

        cout << endl;
    }

    return 0;
}



*/
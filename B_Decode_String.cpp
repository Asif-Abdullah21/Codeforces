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
    int t;
    cin >> t;

    string s;
    char ch;

    for (ch='a'; ch <='z'; ch++)
    {
        s+= ch; // abcdefghijklmnopqrstuvwxyz
    }

    while (t--)
    {
        int n;
        cin >> n;

        string str, final_str;
        cin >> str;

        for (int i = n-1; i >= 0; i--)
        {
            if(str[i]=='0')
            {
                final_str += s[(((str[i-2]-'0')*10)+(str[i-1]-'0'))-1]; // final_str += s[(((str[i-2]-'0')*10)+(str[i-1]-'0')*1)-1];
                i -= 2;
            }
            else final_str += s[(str[i]-'0')-1];
        }

        reverse(final_str.begin(),final_str.end());

        cout << final_str<< endl;
        
    }
    

    

    return 0;
}




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

//     string s;
//     char ch;

//     for (ch='a'; ch <='z'; ch++)
//     {
//         s+= ch; // abcdefghijklmnopqrstuvwxyz
//     }

//     while (t--)
//     {
//         int n;
//         cin >> n;

//         string str, final_str;
//         cin >> str;

//         for (int i = n-1; i >= 0; i--)
//         {
//             if(str[i] != '0')
//             {
//                 final_str += s[(str[i]-'0')-1];
//             }
//             else if(str[i]=='0')
//             {
//                 final_str += s[(((str[i-2]-'0')*10)+(str[i-1]-'0'))-1]; // final_str += s[(((str[i-2]-'0')*10)+(str[i-1]-'0')*1)-1];
//                 i -= 2;
//             }
//         }

//         reverse(final_str.begin(),final_str.end());

//         cout << final_str<< endl;
        
//     }
    

    

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
bool check(string s, int m)
{
    int l = s.length();

    int c1 = 0;
    int c2 = 0;

    for (int i = 0; i < l; i++) {

        if (s[i] == '0') {
            c2 = 0;
            c1++; 
        }
        else {
            c1 = 0;
            c2++; 
        }
        if (c1 == m || c2 == m)
            return true;
    }
    return false;
}
int main()
{
    string s ;
    int m=7 ;
    cin>>s;
    if (check(s, m))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}

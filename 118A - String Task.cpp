#include<bits/stdc++.h>
using namespace std ;
int main()
{
  string s1;
    cin >> s1 ;
    char a[]={'a','e','i','o','u','A','E','I','O','U','y','Y'};
    for(int i=0;i<=s1.size();i++)
{
    if(find(a,a+12,s1[i])!=a+12)
    {
        s1.erase(i,1);   // will erase one character in position i 
        i--;  // as all the letters are shifted to the left so the value of i is deceremented to stay at the same position
    }
    
}
   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
   for(int x=0;x<s1.length();x++){ 
    cout << "."<<s1[x] ;
   }
   cout<<endl;

}

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
        s1.erase(i,1);
        i--;
    }
    
}
   transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
   for(int x=0;x<s1.length();x++){ 
    cout << "."<<s1[x] ;
   }
   cout<<endl;

}

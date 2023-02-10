#include<bits/stdc++.h>
#include <iostream>
using namespace std;
void solve ()
{
   int n;cin>>n;
   string s;
   cin>>s;
   int flag=0;
   int k = s.length();
   sort(s.begin(),s.end());
   for(int x=0;x<k;x++)
   {
       if(s[x]==s[x+1])
       {
            flag++;
           break;
       }
   }
  // cout<<s<<endl;
  // cout<<flag<<endl;
   if(flag!=0)
   cout<<k-2;
   else
   cout<<-1;
   cout<<endl;
}
 

int main() {
    int t;cin>>t;
    while (t--)
    solve();
	// your code goes here
	return 0;
}

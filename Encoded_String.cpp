//https://www.codechef.com/JAN21C/problems/DECODEIT
#include<bits/stdc++.h>
using namespace std;


void solve() {
    int n;string str;char i;
    cin>>n;string ans;
   string bit;int k=4;int j;
cin>>bit;

    for(i='a';i<='p';i++)
    {str.push_back(i);}
    j=0;
    while(k<=n+1)
    { int m=16;
    int s=0,e=15;
    while(s!=e||j<k)
  {m/=2;
    if(bit[j]=='0')
   e=e-m;   
    else
    s=s+m;
      j++; 
    
  }
    k+=4;
    ans.push_back(str[s]);}
    
  cout<<ans;
    
}
int main()
{
int t ;
cin >> t;
while(t--) {
solve();
cout<<endl;
}
return 0;
}
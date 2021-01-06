//https://www.codechef.com/JAN21C/problems/FAIRELCT
#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x <<'	'<< x << endl
void solve() {
    int n,m,i,j,w=0,l=0,c=0;
    cin>>n>>m;
    int win[1000],los[1000];
for(i=0;i<n;i++)
{cin>>win[i];w+=win[i];}
for(i=0;i<m;i++)
{cin>>los[i];l+=los[i];}
sort(win,win+n);
sort(los,los+m);
i=0;j=m-1;
  while(w<=l)
 {c++;
 w=w+los[j]-win[i];
 l=l+win[i]-los[j];
 if(j==0||i==n-1&&w<=l)
 {c=-1;break;}
  i++;j--;
}
cout<<c;
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
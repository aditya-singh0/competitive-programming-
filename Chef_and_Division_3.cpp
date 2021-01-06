//https://www.codechef.com/JAN21C/problems/DIVTHREE
#include<bits/stdc++.h>
using namespace std;
#define deb(x) cout << #x <<'	'<< x << endl

void solve() {
    int i,n,d,k,sum=0;
    vector<int>v;
    cin>>n>>k>>d;

int x;
  for(i=0;i<n;i++)
  {
      cin>>x;v.push_back(x);
  sum=sum+v[i];}
   
    sum=sum/k;
  cout<<min(sum,d)<<endl;
}
int main()
{ int t ;
cin >> t;
while(t--) {
solve();
}
return 0;
}
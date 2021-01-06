//https://www.codechef.com/JAN21C/problems/BILLRD
#include<bits/stdc++.h>
using namespace std;
void impact(int &x,int &y,int k,int n)
{int i=n-x;//1
x=n;y+=i;
vector< pair <int, int> > a;
a.push_back(make_pair(x,y));
swap(x,y);//2
a.push_back(make_pair(x,y));
y=y-x;//3
x=0;
a.push_back(make_pair(x,y));
swap(x,y);//4
a.push_back(make_pair(x,y));

k=k%4;
if(k!=0)
{x=a[k-1].first; y=a[k-1].second;}
else
{x=a[3].first; y=a[3].second;}

}
void solve() {
    int n,k,x,y;
    cin>>n>>k>>x>>y;
 
if(x==y)
{cout<<n<<" "<<n;
return;}
if(x>y)
{impact(x,y,k,n);
cout<<x<<" "<<y;}
else
{impact(y,x,k,n);
cout<<x<<" "<<y;}
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
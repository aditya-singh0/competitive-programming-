#include <bits/stdc++.h>
using namespace std;


void solve()
{
    int a,b;
    cin>>a>>b;

    vector<int> v;
    if((a+b)%2==0)
    {
        int k=(a+b)/2;

        int mn=INT_MAX,mx=INT_MIN;

        if(a>=k)
            mn= (a-k);
        else
            mn= (b-k);
        mx=min(a,k)+min(b,k);

        for(int i=mn;i<=mx;i+=2)
            v.push_back(i);

        cout<<v.size()<<endl;
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
    }
    else
    {
        int mn=INT_MAX,mx=INT_MIN;
        int k=(a+b+1)/2;
        if(a>=k)
            mn= (a-k);
        else
            mn= (b-k);

        mx=min(a,k)+min(b,k);
        for(int i=mn;i<=mx;i++)
            v.push_back(i);

        cout<<v.size()<<endl;
        for(auto x:v)
            cout<<x<<" ";
        cout<<endl;
    }
    

}

int main()
{
// #ifndef ONLINE_JUDGE
//     freopen("input.txt","r",stdin);
//     //freopen("output.txt","w",stdout);
//     #endif

    int t=1;
    cin>>t;
    
    while(t--)
    {
      solve();
    }
    return 0;
}
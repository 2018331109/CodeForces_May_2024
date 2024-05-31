#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;

void solve()
{
    int n;
    cin>>n;
    int a[n], b[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n+1; i++)
    {
        cin>>b[i];
    }
    int f=0, ans=0, d=INT_MAX;
    for(int i=0; i<n; i++)
    {
        int mn=min(a[i], b[i]);
        int mx=max(a[i], b[i]);
        if(b[n]>=mn and b[n]<=mx)
        {
            f=1;
        }
        ans+=mx-mn;
        if(mn>b[n])
        {
            d=min(d, mn-b[n]);
        }
        if(mx<b[n])
        {
            d=min(d, b[n]-mx);
        }
    }
    ans+=1;
    if(f==0)
    {
        ans+=d;
    }
    cout<<ans<<endl;
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int test = 1;
    cin >> test;
    for (int tc = 1; tc <= test; tc++)
    {
        solve();
    }

    return 0;
}


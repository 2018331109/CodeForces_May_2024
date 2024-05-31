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
    int n, m, ans=0;
    cin>>n>>m;
    int nm=n+m+1;
    int a[nm], b[nm];
    for(int i=0; i<nm; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<nm; i++)
    {
        cin>>b[i];
    }
    vector<int>p, t;
    string s;
    for(int i=0; i<nm; i++)
    {
        if(a[i]>b[i])
        {
            if(p.size()<=n)
            {
                p.pb(i);
                ans+=a[i];
                s+='p';
            }
            else
            {
                t.pb(i);
                ans+=b[i];
                s+='t';
            }
        }
        else
        {
            if(t.size()<=m)
            {
                t.pb(i);
                ans+=b[i];
                s+='t';
            }
            else
            {
                p.pb(i);
                ans+=a[i];
                s+='p';
            }
        }
    }
    for(int i=0; i<nm; i++)
    {
        if(s[i]=='p')
        {
            if(p.size()==n+1)
            {
                cout<<ans-a[i]<<" ";
            }
            else
            {
                int res=ans-a[i];
                res-=b[t[m]];
                res+=a[t[m]];
                cout<<res<<" ";
            }
        }
        else
        {
            if(t.size()==m+1)
            {
                cout<<ans-b[i]<<" ";
            }
            else
            {
                int res=ans-b[i];
                res-=a[p[n]];
                res+=b[p[n]];
                cout<<res<<" ";
            }
        }
    }
    cout<<endl;
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


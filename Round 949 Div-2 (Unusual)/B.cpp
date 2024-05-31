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
const int INF=1e18;

void solve()
{
    int n, m;
    cin>>n>>m;
    int cnt=0;
    int i=0;
    int x=n;
    vector<int>v(60, 0);
    int now=1;
    int ans=0, current=0;
    while(x>0)
    {
        if(x%2==1)
        {
            v[i]=1;
        }
        else
        {
            v[i]=0;
        }
        i++;
        x/=2;
    }
    for(int i=0; i<60; i++)
    {
        if(v[i]==1)
        {
            ans+=now;
            current+=now;
        }
        else
        {
            int mx=now;
            int samne=mx-current;
            int mn=(mx*2ll)-1ll;
            int picone=INF;

            if(mn<n)
            {
               picone=abs((current+(now*2ll))-mn);
            }
            //cout<<samne<<" "<<picone<<endl;
            if(min(samne, picone)<=m)
            {
                ans+=now;
            }

        }
        now*=2ll;
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


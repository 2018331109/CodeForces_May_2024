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
    vector<int>v(32, 0), ans(32, 0);
    int n;
    cin>>n;
    int k=0;
    int i=0;
    int x=n;
    while(x>0)
    {
        if(x%2==1)
        {
            v[k]=1;
        }
        else
        {
            v[k]=0;
        }
        k++;
        x/=2;
    }
    int l=0, r=0;
    while(v[l]==0)
    {
        l++;
    }
    r=l;
    while(r<32)
    {
        if(v[r]==1)
        {
            while(r<32 and v[r]==1)
            {
                r++;
            }
            if(r-l>=2)
            {
                ans[l]=-1;
                l++;
                while(l<r)
                {
                    ans[l]=0;
                    l++;
                }
                v[r]=1;
                ans[r]=1;
            }
            else
            {
                ans[l]=1;
                ans[r]=0;
                r++;
            }
        }
        else
        {
            ans[r]=0;
            r++;
        }
        l=r;

    }
    cout<<ans.size()<<endl;
    for(auto it:ans)
    {
        cout<<it<<" ";
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


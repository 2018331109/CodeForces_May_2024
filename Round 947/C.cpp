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
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    /*
    sort(a, a+n);
    if(n==2)
    {
        cout<<a[0]<<endl;
        return;
    }
    if(a[n-1]==a[n-2])
    {
        cout<<a[n-1]<<endl;
        return;
    }
    cout<<a[n-2]<<endl;
    */
    int ans=INT_MIN;
    for(int i=0; i<n-1; i++)
    {
        int cur=min(a[i], a[i+1]);
        ans=max(ans, cur);
        if((i+2)<n)
        {
            cur=min(a[i], a[i+2]);
            ans=max(ans, cur);
        }
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


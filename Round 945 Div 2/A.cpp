#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 2e5+5;

void solve()
{
    int a, b, c;
    cin>>a>>b>>c;
    int abc=(a+b+c);
    if(abc%2)
    {
        neg;
        return;
    }
    int ans=abc/2;
    ans=min(ans, a+b);
    ans=min(ans, b+c);
    ans=min(ans, a+c);
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


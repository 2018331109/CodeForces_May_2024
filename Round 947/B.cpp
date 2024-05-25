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
    int gc=0;
    sort(a, a+n);
    int cnt=0;
    for(int i=1; i<n; i++)
    {
        if(a[i]%a[0]!=0)
        {
            gc=__gcd(gc, a[i]);
            cnt++;
        }
    }
    if(cnt==0)
    {
        yes;
        return;
    }
    for(int i=1; i<n; i++)
    {
        if(a[i]==gc)
        {
            yes;
            return;
        }
    }
    no;

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


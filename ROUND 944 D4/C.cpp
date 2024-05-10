#include <bits/stdc++.h>
using namespace std;
#define int long long
#define yes cout << "Yes" << endl;
#define no cout << "No" << endl;
#define neg cout << -1 << endl;
#define pb push_back
#define ss second
#define ff first

const int md=998244353;
const int N = 107;

void solve()
{
    int a, b, c, d;
    cin>>a>>b>>c>>d;
    int aa=min(a, b), bb=max(a, b);
    int cnt=0;
    aa+=1;
    while(aa<bb)
    {
        if(aa==c or aa==d)
        {
            cnt++;
        }
        aa++;
    }
    if(cnt==1)
    {
        yes;
        return;
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


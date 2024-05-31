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
     int a, b;
     cin>>a>>b;
     int cnt=0;
     while(b>1)
     {
         b/=2;
         cnt++;
     }
     cout<<cnt<<endl;
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


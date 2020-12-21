#include <bits/stdc++.h>

#define fi first
#define se second
#define m_p make_pair
#define endl '\n'
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

typedef long long ll;
 
const int MAXINT = 2147483098;
const ll MAXLL = 9223372036854775258LL;

using namespace std;

void solve()
{
    int n;
    cin>>n;
    string b;
    cin>>b;

    int absent=0;
    int present =0;

    for(int i=0;i<n;i++)
    {
        if(b[i]=='0')
        {
            absent++;
        }
        else
        {
            present++;
        }
    }
    int daysleft = 120-n;
    int dayspresent = daysleft + present;
    double pass = (dayspresent*100/120);

    if(pass>=75)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
 
int main()
{
    fast_io;
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;     
}

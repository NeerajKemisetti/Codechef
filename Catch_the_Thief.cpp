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
    int police,thief,k,n;
    cin>>police>>thief>>k>>n;
    int flag=0;
    if(police<thief)
    {
        for(int i=police;i<=thief;i+=k)
        {
            police+=k;
            thief-=k;

            if(police == thief)
            {
                cout<<"Yes"<<endl;
                flag=1;
                break;
            }
        }
        if(flag ==0)
        {
            cout<<"No"<<endl;
        }
    }
    else if(thief<police)
    {
        for(int i=thief;i<=police;i+=k)
        {
            thief+=k;
            police-=k;

            if(police == thief)
            {
                cout<<"Yes"<<endl;
                flag=1;
                break;
            }
        }
        if(flag ==0)
        {
            cout<<"No"<<endl;
        }
    }
    else 
    {
        cout<<"Yes"<<endl;
    }
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

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

int arrange(deque<int> &C)
{
    int count=0;

    for(int i=0;i<C.size();i++)
    {
        if(C[i]<C[i+1])
        {
            int temp = C[i+1];
            C[i+1] = C[i];
            C[i] = temp;
            count++;
        }
        else{
            break;
        }
    }
    return count;

}

void solve()
{
    int n,m;
    cin>>n>>m;
    deque<int> A(n);
    deque<int> B(m);

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>B[i];
    }
    deque<int> C(m+n);
    C=A;
    sort(C.begin(),C.end());
    sort(B.begin(),B.end());
    
    int ans =0;

    for(int i=0; i<m;i++)
    {
        int x=B[i];
        C.push_front(x);
        ans += arrange(C);
    }
    cout<<ans<<endl;
}
 


int main()
{
    fast_io;
    
    solve();

    return 0;     
}

#define    ll                long long
#define    dn                double
#define    mp                make_pair
#define    pb                push_back
#define    se                second
#define    fi                first
#define    mod               1000000007
#define    sob(v)            v.begin(),v.end()
#define    sobr(v)           v.rbegin(),v.rend()
#define    same(v)           v.erase(unique(v.begin(),v.end()),v.end())
#define    fr(i,a,b)         for(int i=a;i<=b;++i)
#define    frr(i,a,b)        for(int i=a;i>=b;--i)
#define    pi                acos(-1.00)
#define    inf               1e9
#define    EPS               1e-9
#define    sf(n)             scanf("%d",&n)
#define    sfl(n)            scanf("%lld",&n)
#define    check(n)          cout<<n<<"**CHECK"<<endl
#define    ffix(x)           cout<<fixed<<setprecision(x)
#define    fast              ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define    ones(mask)        __builtin_popcount(mask)   // count set bit
#define    onesLL(mask)      __builtin_popcountll(mask) // for long long
#define    lzeros(mask)      __builtin_clz(mask)        // no of leading zeros
#define    tzeros(mask)      __builtin_ctz(mask)        // no of trailing zeros


#include<bits/stdc++.h>
#include<string.h>
using namespace std;

typedef vector<int> vi;
typedef map<int,int> mii;
typedef pair<int,int> pii;
typedef pair<int,vi> pp;
typedef vector<pii> vpii;
typedef pair<pair<int,int>,int> pain;

int dr[8]= {-1,0,+1,0,-1,-1,+1,+1};
int dc[8]= {0,+1,0,-1,-1,+1,-1,+1};

int kx[8]= {-1,+1,+1,-1,+2,+2,-2,-2};
int ky[8]= {+2,+2,-2,-2,-1,+1,+1,-1};

const int N=100005;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int z[n+1];
    memset(z,0,sizeof z);
    int l=0,r=0;
    for(int i=1;i<n;++i)
    {
        if(i<=r)z[i]=min(z[i-l],r-i+1);
        while(i+z[i]<n && s[i+z[i]]==s[z[i]])++z[i];
        if(i+z[i]-1>r)l=i,r=z[i]+i-1;
        cout<<i<<' '<<l<<' '<<r<<endl;
    }
    fr(i,0,n-1)cout<<z[i]<<' ';cout<<endl;
}

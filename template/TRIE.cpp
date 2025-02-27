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
#define    fr(i,a,b)         for(ll i=a;i<=b;++i)
#define    frr(i,a,b)        for(ll i=a;i>=b;--i)
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

const int N=2;

struct bit_node
{
    bit_node *child[N];
    int end_bit;
};

bit_node *getnode()
{
    bit_node *pnode=new bit_node;
    pnode->end_bit=0;
    fr(i,0,N-1)pnode->child[i]=NULL;
    return pnode;
}

void insert_bit(bit_node *root,ll num)
{
    bit_node *pnode=root;
    frr(i,31,0)
    {
        ll idx=(num>>i)&1;
        if(!pnode->child[idx])pnode->child[idx]=getnode();
        pnode=pnode->child[idx];
    }
    pnode->end_bit=1;
}

ll find_max(bit_node *root,ll num)
{
    ll ans=0;
    bit_node *pnode=root;
    frr(i,31,0)
    {
        ll idx=(num>>i)&1;
        ///if(idx>1)cout<<idx<<endl;
        if(pnode->child[!idx])
        {
            ans|=(1<<i);
            pnode=pnode->child[!idx];
        }
        else pnode=pnode->child[idx];
    }
    return ans;
}

ll find_min(bit_node *root,ll num)
{
    ll ans=0;
    bit_node *pnode=root;
    frr(i,31,0)
    {
        ll idx=(num>>i)&1;
        if(pnode->child[idx])pnode=pnode->child[idx];
        else
        {
            ans|=(1<<i);
            pnode=pnode->child[!idx];
        }
    }
    return ans;
}

void del_root(bit_node *root)
{
    fr(i,0,N-1)
    {
        if(root->child[i])del_root(root->child[i]);
        delete root->child[i];
    }
}
void solve(int test)
{
    int n;
    sf(n);
    ll mn=1e18,mx=0,pre=0;
    bit_node *root=getnode();
    insert_bit(root,0);
    for(int i=1;i<=n;++i)
    {
        ll x;
        sfl(x);
        pre^=x;
        mn=min(mn,find_min(root,pre));
        mx=max(mx,find_max(root,pre));
        insert_bit(root,pre);
    }
    printf("Case %d: %lld %lld\n",test,mx,mn);
    del_root(root);
}

int main()
{
    int t;
    sf(t);
    for(int i=1;i<=t;++i)
    {
        solve(i);
    }
    return 0;
}
///*********************

const int N=4;

int ans=0;

struct trienode
{
    trienode *child[N];
    int end_word;
};

trienode *getnode()
{
    trienode *pnode=new trienode;
    pnode->end_word=0;
    fr(i,0,N-1)
    {
        pnode->child[i]=NULL;
    }
    return pnode;
}

void insert_word(trienode *root,string word)
{
    trienode *pnode=root;
    int n=word.size();
    fr(i,0,n-1)
    {
        int idx;
        if(word[i]=='A')idx=0;
        else if(word[i]=='C')idx=1;
        else if(word[i]=='G')idx=2;
        else idx=3;
        if(!pnode->child[idx])pnode->child[idx]=getnode();
        pnode=pnode->child[idx];
        pnode->end_word++;
        ans=max(ans,(pnode->end_word)*(i+1));
    }
}

void del_node(trienode *root)
{
    fr(i,0,N-1)
    {
        if(root->child[i])del_node(root->child[i]);
        delete root->child[i];
    }
}

void solve(int test)
{
    int n;
    cin>>n;
    string s;
    ans=0;
    trienode *root=getnode();
    fr(i,1,n)
    {
        cin>>s;
        insert_word(root,s);
    }
    cout<<"Case "<<test<<": "<<ans<<endl;
    del_node(root);
}

int main()
{
    int t;
    cin>>t;
    fr(i,1,t)
    {
        solve(i);
    }
}

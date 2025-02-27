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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/trie_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

typedef vector<int> vi;
typedef map<int,int> mii;
typedef pair<int,int> pii;
typedef pair<int,vi> pp;
typedef vector<pii> vpii;
typedef pair<pair<int,int>,int> pain;
typedef tree<string,null_type,less<string>,rb_tree_tag,tree_order_statistics_node_update> ordered_set;
///X.order_of_key(x)=the number of items in a set that are strictly smaller than x
///*X.find_by_order(k)=returns an iterator to the k-th largest element (counting from zero)

int dr[8]= {-1,0,+1,0,-1,-1,+1,+1};
int dc[8]= {0,+1,0,-1,-1,+1,-1,+1};

int kx[8]= {-1,+1,+1,-1,+2,+2,-2,-2};
int ky[8]= {+2,+2,-2,-2,-1,+1,+1,-1};

const int N=100005;
const ll MAX=9223372036854775807;

constexpr uint64_t mod = (1ULL << 61) - 1;

const uint64_t seed = chrono::system_clock::now().time_since_epoch().count();
const uint64_t base = mt19937_64(seed)() % (mod / 3) + (mod / 3);

template <typename T> string toString(T num) { stringstream ss; ss << num; return ss.str(); }
int toInt(string s)                          { int num; istringstream iss(s); iss >> num; return num;  }
ll toLLong(string s)                         { ll num; istringstream iss(s); iss >> num; return num; }


inline int setbit(int mask, int pos)        { return mask |= (1 << pos); }
inline int resetbit(int mask, int pos)      { return mask &= ~(1 << pos); }
inline int togglebit(int mask, int pos)     { return mask ^= (1 << pos); }
inline bool checkbit(int mask, int pos)     { return (bool)(mask & (1 << pos)); }

///freopen("mootube.in","r", stdin);
///freopen("mootube.out","w", stdout);
template <typename T> using orderset = tree <T, null_type, less <T>, rb_tree_tag, tree_order_statistics_node_update>;




inline void normal(ll &a) {
    ///a %= mod; (a < 0) && (a += mod);
    if(a>=mod)a%=mod;
    else if(a<0)a+=mod;
}
inline ll modMul(ll a, ll b) { normal(a), normal(b); return (a*b)%mod; }
inline ll modAdd(ll a, ll b) { normal(a), normal(b); return (a+b)%mod; }
inline ll modSub(ll a, ll b) { normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, mod-2); }///could use binpow
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }
///********************* CALCULATE== (a^b)%m in O(log n)  ***********************
ll binpow(ll a,ll b)
{
    a%=mod;
    ll res=1;
    while(b>0)
    {
        if(b&1)
            res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}
ll binpow(ll a,ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1)
            res=(res*a);
        a=(a*a);
        b>>=1;
    }
    return res;
}
int rpow(int n,int k)
{
    if(!k)return 1;
    int t=rpow(n,k/2);
    t=mul(t,t);
    if(k&1)
        t=mul(n,t);
    return t;
}
///**************** nCr ********************************
ll fact[N+10];
void factorial()
{
    fact[0]=1;
    fr(i,1,N-1)
    {
        fact[i]=(fact[i-1]*i*1LL)%mod;
    }
}
ll nCr(int n,int r)
{
    ll res=fact[n];
    res=(res*modPow(fact[r],mod-2))%mod;
    res=(res*modPow(fact[n-r],mod-2))%mod;
    return res;
}
///**************** linear sieve *****************************
int lp[N+10];
vector<int> pr;

void sieve()
{
    for (int i=2; i<=N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back (i);
        }
        for (int j=0; j<(int)pr.size() && pr[j]<=lp[i] && i*pr[j]<=N; ++j)
            lp[i * pr[j]] = pr[j];
    }
}

/*
__builtin_popcount = int
__builtin_popcountl = long int
__builtin_popcountll = long long
*/

///***************Prime Factorization *********************************
int spf[N+7];
void sieve()
{
    fr(i,1,N)spf[i]=i;
    for(int i=4;i<=N;i=i+2)
    {
        spf[i]=2;
    }
    for(int i=3;i*i<=N;i=i+2)
    {
        if(spf[i]==i)
        {
           for(int j=i*i;j<=N;j=j+i)
           {
               if(spf[j]==j)
               {
                   spf[j]=i;
               }
           }
        }
    }
}
void prime_factorization(int val,vector<int>&prime,vector<int>&power)
{
    while(val!=1)
    {
        int p=spf[val],cnt=0;
        prime.pb(p);
        while(val%p==0)val=val/p,cnt++;
        power.pb(cnt);
    }
}

///****************just for normal **********
void solve(int test)
{

}
int main()
{
    int t;
    sf(t);
    fr(i,1,t)
    {
        solve(i);
    }
    return 0;
}
///************** Efficiently count number of distinct primes of range(1-2e7)
int N=2e7;
int distinct_primes[N];
for(int i=2;i<=N;++i)
{
    if(distinct_primes[i])continue;
    for(int j=i;j<=N;j+=i)
    {
        distinct_primes[j]++;
    }
}

///*****************PRINT LEXICOGRAPHICALLY SAMLLEST LCS******************

///this is good idea  but for bigger constraint i might be face memory limit
string s,t,dp[N][N];///here N=must be small

void smallest_LCS()
{
    int ns=s.size();
    int nt=t.size();
    for(int i=0;i<=ns;++i)
    {
        for(int j=0;j<=nt;++j)
        {
            if(i==0 || j==0)dp[i][j]="";
            else if(s[i-1]==t[j-1])dp[i][j]=dp[i-1][j-1]+s[i-1];
            else if(dp[i-1][j].size()>dp[i][j-1].size())dp[i][j]=dp[i-1][j];
            else if(dp[i-1][j].size()<dp[i][j-1].size())dp[i][j]=dp[i][j-1];
            else if(dp[i-1][j]<dp[i][j-1])dp[i][j]=dp[i-1][j];
            else dp[i][j]=dp[i][j-1];
        }
    }
    if(dp[ns][nt].size()==0)cout<<"NO solution"<<endl;
    else cout<<dp[ns][nt]<<endl;
}

///**********************************************************************
bool palindrome_chk(string a,string b)
{
    string s;
    s+=a;
    s+=b;
    int n=s.size();
    int x=n/2;
    for(int i=0;i<x;++i)
    {
        if(s[i]!=s[n-i-1])return 0;
    }
    return 1;
}

///********************************* TOKENIZING STRING **********************
void tokenizing(string line)
{
    vector <string> tokens;///whatever i want to store
    stringstream check1(line);

    string intermediate;
    while(getline(check1, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }
    for(int i = 0; i < tokens.size(); i++)
        cout << tokens[i] << '\n';
}

///********************************************************

void removeDupWord(string str)
{
    // Used to split string around spaces.
    istringstream ss(str);

    string word; // for storing each word

    // Traverse through all words
    // while loop till we get
    // strings to store in string word
    while (ss >> word)
    {
        // print the read word
        cout << word << "\n";
    }
}


///********************* check the number *****************
long long f(long long p,long long q){
  double est=1;
  est=(q*q*q);
  est*=p;
  if(est>4e18){return 4e18;}
  return p*q*q*q;
}

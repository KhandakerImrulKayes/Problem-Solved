#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define tst int t;cin>>t;while(t--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define rj ios::sync_with_stdio(false);cin.tie(0);
#define rvs(v) reverse(v.begin(),v.end());
#define F first
#define S second
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ld long double
#define nl '\n'
const int N = 1e5;
using namespace std;


int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n, x, y;
        cin >> n >> x >> y;
        ll ans1 = 0, ans2 = 0;
        ll a = n/x;
        ll b = n/y;
        //cout << a << " " << b << " ";
        ll gcd = __gcd(x, y);
        ll lcm = (x*y)/ gcd;
        ll l = n/lcm;
        ans1 = (n*(n+1))/2 - ((n-(a-l))*(n-(a-l)+1))/2 - ((b-l)*(b-l+1))/2;
        //cout << gcd << " " << ans1 << " " << ans2 << " ";
        cout << ans1 << endl;
    }
}
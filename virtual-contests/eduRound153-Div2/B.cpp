#include <algorithm>
#include <bits/stdc++.h>
#include <cstring>
#include <ios>
#include <unordered_map>
using namespace std;
 
typedef long long int ll;
typedef long double ld;
typedef vector<ll> vl;
typedef pair<ll, ll> pl;
typedef vector<pair<ll, ll> > vll;
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define f(i,l,r) for (ll i = l; i < r; ++i)
#define fd(i,r,l) for (ll i = r; i >= l; --i)
#define r(x) ll x; cin >> x;
#define rd(x) ld x; cin >> x;
#define rs(s) string s; cin >> s;
#define rc(c) char c; cin >> c;
#define rv(a,n) vl a(n); f(i, 0, n) cin >> a[i];
#define rnv(a) r(n); rv(a,n);
#define pv(a) f(i, 0, a.size()) {cout << a[i] << " ";} cout << endl;
#define TC ll ntests;cin>>ntests;ll tc=0;goto _restart;_restart:;while(++tc<=ntests)
#define o(x) {cout<<x<<'\n'; goto _restart;}
#define ov(a) {pv(a) goto _restart;}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  TC {
    ll target, k, coin_one, coin_multiple;
    cin >> target >> k >> coin_one >> coin_multiple;
    
    ll desired_k = target / k;
    ll desired_one = target % k;
    ll converted_k_coins = coin_one / k;
    coin_one -= converted_k_coins * k;

    cout << "desired k " << desired_k << endl;
    cout << "desired one " << desired_one << endl;
    cout << "ones " << coin_one << endl;
    cout << "ks " << coin_multiple + converted_k_coins << endl;

    ll zero = 0;

    ll res = max(zero, desired_k - (coin_multiple + converted_k_coins));
    res += max(zero, desired_one - coin_one);
    o(res);
  }
}

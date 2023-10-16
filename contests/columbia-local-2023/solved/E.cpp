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

ll MOD = 1000000007;

long long calc(int i){
  ll ret = 1;
  ll a = 2;
  while (i > 0){
    if (i & 1) ret = (ret * a) % MOD;
    a = (a * a) % MOD;
    i >>= 1;
  }
  return ret;
}

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  string cards;
  cin >> cards;
  reverse(cards.begin(), cards.end());
  ll res = 0;
  for (int i = 0; i < cards.length(); i++){
    if (cards[i] == 'O'){
      res = (res + calc(i)) % MOD;
    }
  }
  cout << res;
}

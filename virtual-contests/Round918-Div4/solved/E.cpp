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
    ll glasses;
    cin >> glasses;

    set<ll> seen = {0};
    ll cur, total = 0;
    bool found = false;
    f(i, 0, glasses){
      cin >> cur;
      if (i % 2 == 0){
	total += cur; 
      }
      else {
	total -= cur;
      }
      if (seen.find(total) != seen.end()){
	found = true;
      }

      /* cout << "total: " << total << endl; */
      seen.insert(total);
    }

    if (found){
      cout << "YES" << endl;
    }
    else {
      cout << "NO" << endl;
    }
  }
}

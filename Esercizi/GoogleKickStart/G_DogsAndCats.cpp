#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <algorithm>
#include <limits>

using namespace std;

typedef long long ll;
typedef unsigned int uint;

#define REP(x,l,u) for(ll x = l; x < u; x++)
#define RREP(x,l,u) for(ll x = l; x >= u; x--)
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define mst(x,v) memset(x, v, sizeof(x))
#define sz(x) (ll)x.size()

void in() {}
template <typename A> void in(A & x) { cin >> x; }
template <typename A, typename B> void in(pair<A,B> & x) { in(x.first); in(x.second); }
template <typename A> void in(vector<A> & x) { REP(i,0,(ll)x.size()) in(x[i]); }
template <typename Head, typename... Tail> void in(Head & H, Tail & ... T) {in(H); in(T...); }

// https://codingcompetitions.withgoogle.com/kickstart/round/00000000004362d6/00000000008b3771

void solve(){
	ll n, d, c, m;
	string s;
	cin >> n >> d >> c >> m >> s;
	bool possible = true;
	for(int i = 0; i < s.size() && possible; i++){
		if(s[i] == 'C'){
			c--;
		} else {
			if(c < 0) possible = false;
			d--;
			if(d < 0) possible = false;
			c += m;
		}
	}
	cout << (possible ? "YES" : "NO");
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int t;
	cin >> t;
	for(int i = 1; i <= t; i++){
		cout << "Case #" << i << ": ";
		solve();
		cout << '\n';
	}

	return 0;
}

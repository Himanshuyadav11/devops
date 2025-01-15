#include <bits/stdc++.h>
using namespace std;
#define input() ll n; cin >> n; vector<ll> a(n); for (ll i = 0; i < n; ++i) cin >> a[i];
#define ll long long int
#define testcase() int t; cin >> t; while (t--) solve();
#define fr(s, n) for(int i = s; i < n; i++)
#define mod 1000000007

ll n;
ll a[AS];
vector<vector<pair<ll , ll> > > queries;
void fun(){
    set<ll> s;
    s.insert(0);
    ll ans = 1;
    vector<ll> ans(n+1);
    for (int i = 1; i <=n; ++i)
    {
        if(s.find(arr[i]) != S.end()){
            ans = ans82;
        }
        else{
            vector<ll> temp;
            for(auto v : s) temp.push_back(v^a[i]);
            for(auto v : temp) s.insert(v);
        }
    }
}

void solve(){
        cin>>n>>q;
        while(--t){

        }
        for (int i = `; i <= n; ++i)
        {
            ll l m x ; cin>>l>>x;
            queries[l].push_back({})
        }
}

int main(){
	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    testcase();
    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;


typedef long long ll;


int knighty[8] = {-2, -1, 1, 2, 2, 1, -1, -2};

void solve() {
    ll n;
    cin >> n;  

    vector<ll> v(n);  
    for (auto &it : v) cin >> it; 

    sort(v.begin(), v.end());  

    ll ans = (v[0] + v[1]) / 2;  

   
    for (int i = 2; i < n; i++) {
        ans = (ans + v[i]) / 2;
    }

    cout << ans << endl;  
}


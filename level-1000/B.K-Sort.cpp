#include <iostream>
#include <vector>
#include <map>
#include <climits>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<ll> data(n);
        for (ll i = 0; i < n; i++){
            cin >> data[i];
        }
        if (n == 1){
            cout << 0 << endl;
            continue;
        }
        ll num = data[0];
        map<int, int> diff;
        int k = 0;
        for (int i = 0; i < n; i++){
            if (num > data[i]) {
                diff[num - data[i]]++;
                k++;
            } else {
                num = data[i];
            }
        }
        if (k == 0){
            cout << 0 << endl;
            continue;
        }
        ll val = 0;
        ll ans = 0;
        for (auto it : diff){
            ans += (it.first - val) * (k + 1);
            k -= it.second;
            int p=it.first-val;
            val += p;
        }
        cout << ans << endl;
    }
}

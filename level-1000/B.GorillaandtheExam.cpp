#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef long long ll;
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        map<int, ll> freq; 
        for (int i = 0; i < n; i++){
            int temp;
            cin >> temp;
            freq[temp]++;
        }
        int diff=freq.size();  
        if (n == 1 || k == n){
            cout << 1 << endl;
            continue;
        }
        if (k == 0){
            cout << freq.size() << endl;
            continue;
        }
        multiset<int> final;
        for (auto it : freq){
            final.insert(it.second);
        }
        while(k > 0 && !final.empty()){
            auto it = final.begin();
            int current_freq = *it;
            if (current_freq <=k){
                final.erase(it);
                k -= current_freq;
            }
            else{
                break;
            }
        }
        cout << final.size() << endl;
    }
}

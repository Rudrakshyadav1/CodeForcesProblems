#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<set>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> skipped(m);
        for (int i = 0; i < m; i++){
            cin >> skipped[i];
        }
        set<int> known;
        for (int i = 0; i < k; i++){
            int p;
            cin >> p;
            known.insert(p);
        }
        if (n == k){
            for (int i = 0; i < m; i++){
                cout << "1";
            }
            cout << endl;
            continue;
        }
        if (k < n - 1){
            for (int i = 0; i < m; i++){
                cout << "0";
            }
            cout << endl;
            continue;
        }
        string ans;
        for (int i = 0; i < m; i++){
            if (known.find(skipped[i]) == known.end()){
                ans += '1';
            }
            else{
                ans += '0';
            }
        }
        cout << ans << endl;
    }
}


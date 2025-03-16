#include <iostream>
#include <vector>
#include <set>
#include <utility>
#include <algorithm>
using namespace std;
int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector<pair<int, set<int>>> info(n); 
        for(int i = 0; i < n; ++i){
            set<int> cards;
            for (int j = 0; j < m; j++){
                int card;
                cin >> card;
                cards.insert(card);
            }
            info[i] = {i, cards};
        }
        if(n == 1){
            cout << 1 << endl;
            continue;
        }
        sort(info.begin(), info.end(),[](const pair<int, set<int>>& a, const pair<int, set<int>>& b){
            return a.second<b.second ;
        });
        bool valid = true;
        for (int i = 0; i < n - 1; i++){
            if (!valid) break;
            auto it1 = info[i].second.begin(); 
            auto it2 = info[i + 1].second.begin(); 
            for(int j = 0; j < m;j++){
                if (*it1 > *it2){
                    valid = false;
                    break;
                }
                it1++;
                it2++;
            }
        }
        if(valid){
            for (int i = 0; i < n;i++){
                cout << info[i].first + 1 << " "; 
            }
            cout<<endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}


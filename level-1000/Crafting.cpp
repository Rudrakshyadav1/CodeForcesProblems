#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<pair<int, int>> data(n);
        for (int i = 0; i < n; i++) cin >> data[i].first;
        for (int i = 0; i < n; i++) cin >> data[i].second;
        int countnegative = 0;
        int mini = 0, p = -1;
        bool possible = true;
        for (int i = 0; i < n; i++){
            int diff = data[i].first - data[i].second;
            if(diff < 0){
                countnegative++;
                if(countnegative == 1){
                    mini = diff; 
                    p = i;     
                }
                else{
                    possible = false;  
                    break;
                }
            }
        }
        if(!possible){
            cout << "NO" << endl;
            continue;
        }
        if(countnegative == 0){
            cout << "YES" << endl;
            continue;
        }
        for (int i = 0; i < n; i++){
            if (i == p) continue;
            if (data[i].first - data[i].second < (-1*mini)){
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << endl;
    }
}


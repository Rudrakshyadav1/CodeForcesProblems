#include<iostream>
#include<vector>
#include<set>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        ll ans = 0;
        if(a[0] == 0) ans++;  
        multiset<int> temp;
        ll sum = 0;
        for(int i = 0; i < n; i++){
            if(temp.size() == 0) {
                temp.insert(a[i]);
                sum+=a[i];
            }
            else if(*temp.rbegin() > a[i]){
                temp.insert(a[i]);
                sum+=a[i];
                if(sum - (*temp.rbegin()) == (*temp.rbegin())){
                    ans++;
                }
            }
            else{
                if(sum == a[i]){
                    ans++;
                }
                temp.insert(a[i]);
                sum+=a[i];
            }
        }
        cout << ans << "\n";
    }
}

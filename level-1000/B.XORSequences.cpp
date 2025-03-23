#include<iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        bool flag = true;
        int ans = 0;
        while(flag){
            if((x & 1) == (y & 1)){
                ans++;
                x >>= 1;
                y >>= 1;
            }
            else{
                flag = false;
            }
        }
        cout << (1 << ans) << endl;  
    }
}

#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        int same = 0;
        int reverse = 0;
        for (int i = 0; i < n; i++){
            if (a[i] == b[i]) {
                same++;
            }
            if (a[i] == b[n - 1 - i]){
                reverse++;
            }
        }
        if (reverse == n || same == n){
            cout << "Bob" << endl;
        }
        else {
            cout << "Alice" << endl;
        }
    }
}

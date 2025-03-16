#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (n == 1){
            cout << 1 << endl;
            continue;
        }
        if (n == 2){
            cout << 2 << endl;
            continue;
        }
        if (n == 3){
            cout << 2 << endl;
            continue;
        }
        int steps = 1;
        int l = 1;
        int r = 1;
        int sum = 2;
        while(r<n ){
            r = 2 * sum - 1 + l;
            if(r >= n ){
                r = n ; 
            }
            sum = r +1; 
            steps++;
        }
        cout << steps << endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        int l, r, L, R;
        cin >> l >> r >> L >> R;
        if ((l > R && r > R) || (l < L && r < L)){
            cout << 1 << endl;
            continue;
        }
        if (l == L && r == R){
            cout << R - L << endl;
            continue;
        }
        if (r == R && l != L){
            int p = max(l, L);
            cout << R - p + 1 << endl;
            continue;
        }
        if (l == L && r != R){
            int p = min(r, R);
            cout << p - L + 1 << endl;
            continue;
        }
        if (L > l && R < r) {
            cout << R - L + 2 << endl;
            continue;
        }
        if (L < l && r < R) {
            cout << r - l + 2 << endl;
            continue;
        }
        else{
            int a=max(l,L);
            int b=min(r,R);
            cout<< b-a+2<<endl;
            continue;
        }
    }
}

#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        string str;
        cin >> str;
        int n = str.length();
        if (n == 1){
            cout << -1 << endl;
            continue;
        }
        string ans = "";
        for (int i = 0; i < n - 1; i++){
            if (str[i] == str[i + 1]){ 
                ans += string(1, str[i]) + string(1, str[i + 1]);
                break;
            }
        }
        if (ans != ""){
            cout << ans << endl;
            continue;
        }
        for (int i = 0; i < n - 2; i++){
            if (str[i] != str[i + 1] && str[i + 1] != str[i + 2] && str[i + 2] != str[i]){
                ans += string(1, str[i]) + string(1, str[i + 1]) + string(1, str[i + 2]);
                break;
            }
        }
        if (ans != ""){
            cout << ans << endl;
        }
        else {
            cout << -1 << endl;
        }
    }
}

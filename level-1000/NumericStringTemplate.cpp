#include<iostream>
#include<vector>
#include<string>
#include<map>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;  
    while(t--) {
        int n, m;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];  
        }
        cin >> m;
        vector<string> b(m);
        for (int i = 0; i < m; i++){
            cin >> b[i];  
        }
        for (int i = 0; i < m; i++){
            string str = b[i];
            vector<int> check1(26,INT_MIN);  
            map<int, char> check2;  
            if (str.length() != n){
                cout << "NO" << endl;  
                continue;
            }
            bool isValid = true;
            for (int j = 0; j < n; j++){
                char currentChar = str[j];
                int mappedValue = a[j];
                if (check1[currentChar - 'a'] == INT_MIN){
                    check1[currentChar - 'a'] = mappedValue;
                    if (check2.find(mappedValue) == check2.end()){
                        check2[mappedValue] = currentChar;
                    }
                    else{
                        if(check2[mappedValue] != currentChar){
                            cout << "NO" << endl;
                            isValid = false;
                            break;
                        }
                    }
                }
                else{
                    if(check1[currentChar - 'a'] != mappedValue || check2[mappedValue]!= currentChar){
                        cout << "NO" << endl;
                        isValid = false;
                        break;
                    }
                }
            }
            if (isValid){
                cout << "YES"<< endl;
            }
        }
    }
}

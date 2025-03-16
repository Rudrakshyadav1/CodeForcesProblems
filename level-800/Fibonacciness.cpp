#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--){
        vector<int> num(5, 0);
        for (int i = 0; i < 2; i++){
            cin >> num[i];
        }
        for (int i = 3; i < 5; i++){
            cin >> num[i];
        }
        num[2] = num[0] + num[1];
        int low = 0;
        int high = 1;
        int count1 = 0;
        while(high < 4){  
            if(num[low] + num[high] == num[high + 1]){
                count1++;
            }
            high++;
            low++;
        }
        num[2]=num[4]-num[3];
        int low2=0;
        int high2 = 1;
        int count2 = 0;
        while(high2< 4){  
            if(num[low2] + num[high2] == num[high2 + 1]){
                count2++;
            }
            high2++;
            low2++;
        }
        if(count1>=count2){
            cout<<count1<<endl;
        }
        else{
            cout<<count2<<endl;
        }
    }
}

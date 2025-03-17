#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        int n,m,k,steps,tempk,zerocount;
        cin>>n>>m>>k;
        cin>>str;
        m--;
        for(int i=0;i<n;i++){
            if(str[i]==0) zerocount++;
            if(str[i]==1){
                zerocount=0;
            }
            if(zerocount==m && str[i+1]!=1){
                tempk++;
            }
        }
        steps= tempk/k;
        cout<<steps;
    }
}
#include<iostream>
#include<string>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        string str;
        int n,m,k;
        cin>>n>>m>>k;
        cin>>str;
        int zerocount=0;
        int ans=0;
        for(int i=0;i<n;i++){
            if(str[i]=='0'){
                zerocount++;
                if(zerocount==m){
                    zerocount=0;
                    ans++;
                    i+=(k-1) ;
                }

            }
            else zerocount=0;
        }
        cout<<ans<<endl;
    }
}
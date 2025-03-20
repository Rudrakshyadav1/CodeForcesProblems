#include<iostream>
#include<vector>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>p(n);
        for(int i=0;i<n;i++) cin>>p[i];
        vector<int>q(n,0);
        for(int i=1;i<n;i++) q[i-1]=p[i];
        q[n-1]=p[0];
        for(int i=0;i<n;i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }
}
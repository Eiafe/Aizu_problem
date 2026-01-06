#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int mini=1000000;
    cin>>t;
    for(int i=1;i<=t;i++){
        int x;
        cin>>x;
        if(x<mini){
            mini=x;
        }
    }
     cout<<mini<<endl;
}
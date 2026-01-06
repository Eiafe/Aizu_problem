#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int max=-2000000;
    cin>>t;
    for(int i=1;i<=t;i++){
        int x;
        cin>>x;
        if(x>max){
            max=x;
        }
        cout<<max;
    }
}
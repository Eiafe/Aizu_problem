#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
   int cnt=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            cnt++;
        }
    }
    if(cnt==0){
        cout<<"prime";
    
    }
    else{
        cout<<"composite"<<endl;
    }
    
    
}
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   int sum=0;
   while(t>0){
       int last=t%10;
       sum+=last;
      t/=10; 
       
   }
   cout<<sum<<endl;
   
}
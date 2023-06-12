#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;
    int s=0;
    cin>>a;
    for(int i=2;i<a;i++){   //一個一個下去取餘數
        if(a%i==0){
            s=1;
            break;
        }
    }
    if(s==0){
        cout<<"YES\n";
        
    }else{
        cout<<"NO\n";
        
    }
}
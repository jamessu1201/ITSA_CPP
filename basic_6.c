#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>2&&n<6){
        cout<<"Spring\n";
        
    }else if(n>5&&n<9){
        cout<<"Summer\n";
        
    }else if(n>8&&n<12){
        cout<<"Autumn\n";
        
    }else{
        cout<<"Winter\n";
        
    }
}
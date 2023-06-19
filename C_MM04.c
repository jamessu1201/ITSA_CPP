#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<"+"<<b<<"="<<a+b<<endl;
    cout<<a<<"*"<<b<<"="<<a*b<<endl;
    cout<<a<<"-"<<b<<"="<<a-b<<endl;
    if(a%b>=0){                             //如果遇到負數的話要處理
        cout<<a<<"/"<<b<<"="<<a/b<<"..."<<a%b<<endl;
    }else{
        if(a/b<0){
            cout<<a<<"/"<<b<<"="<<a/b-1<<"..."<<a-b*(a/b-1)<<endl;
        }else{
            cout<<a<<"/"<<b<<"="<<a/b+1<<"..."<<a-b*(a/b+1)<<endl;
        } 
    }
}
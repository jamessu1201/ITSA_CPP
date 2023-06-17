#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int f(int n){               //費氏數列
    if(n==1){
        return 1;
    }else if(n==0){
        return 0;
    }
    return f(n-1)+f(n-2);
}

int main(){
    int n;
    cin>>n;
    cout<<f(n)<<endl;
}
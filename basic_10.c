#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int gcd(int a,int b){       //輾轉相除法
    int tmp;
    if(b>a){
        tmp=a;
        a=b;
        b=tmp;
    }
    while(b>0){
        a=a%b;
        tmp=a;
        a=b;
        b=tmp;
    }
    return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;
}
#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(){
    double a;
    cin>>a;
    a=(a*9)/5+32;
    // a*=100;     //四捨五入
    // a+=(a>0?5:-5);
    // a/=100;
    cout<<fixed<<setprecision(1)<<a<<endl;
}
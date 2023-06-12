#include<bits/stdc++.h>

using namespace std;

int main(){
    double a;
    cin>>a;
    a*=a;
    a*=100;     //四捨五入
    a+=5;
    a/=100;
    cout<<fixed<<setprecision(1)<<a<<endl;
}
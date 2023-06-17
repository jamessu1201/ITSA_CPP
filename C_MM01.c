#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(){
    int u,d,h; //up down height
    cin>>u>>d>>h;
    cout<<"Trapezoid area:"<<fixed<<setprecision(1)<<(u+d)*h/2.0<<endl;
}
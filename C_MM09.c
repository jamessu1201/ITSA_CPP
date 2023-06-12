#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;
    int output;
    cin>>a;
    if(a>31){
        cout<<"Value of more than 31\n";
    }else{
        a-=1;
        output=2<<a;    //left shift
        cout<<output<<endl;
    }
}
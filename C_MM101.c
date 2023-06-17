#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int func(int full,int empty){
    if(full<3){
        return full+empty;
    }
    return func(full-3+1,empty+3);
}

int main(){
    int n,ans;
    cin>>n;
    ans=func(n,0);
    cout<<ans<<endl;
}
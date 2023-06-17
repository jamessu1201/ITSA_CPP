#include<iostream>
#include<cstring>

using namespace std;

int main(){
    int i=7,n;
    int a[8];
    memset(a,0,sizeof(a));
    cin>>n;
    if(n<0){        //如果是負數直接變補數
        n+=256;
    }
    while(n>0){
        a[i]=n%2;
        n/=2;
        i--;
    }
    for(i=0;i<7;i++){
        cout<<a[i];
    }
    cout<<a[7]<<endl;
}
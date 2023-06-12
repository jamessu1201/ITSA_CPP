#include<bits/stdc++.h>

using namespace std;

int main(){
    char a[5];  //put the char number
    int d[4];   //put the int number
    int i;
    cin>>a;
    for(i=0;i<4;i++){   //change the type of number and encode
        d[i]=a[i]-'0';
        d[i]=(d[i]+7)%10;
    }
    int tmp;        //swap
    tmp=d[1];
    d[1]=d[3];
    d[3]=tmp;
    tmp=d[0];
    d[0]=d[2];
    d[2]=tmp;

    for(i=0;i<4;i++){
        cout<<d[i];
    }
    cout<<endl;
}
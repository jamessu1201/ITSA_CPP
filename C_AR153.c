#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[200];
    int i,j=1,space=0;
    while(cin>>a[j++]);
    a[0]=0;
    a[j-1]=0;
    for(i=1;i<j-1;i++){
        if(a[i]>a[i-1]&&a[i]>a[i+1]){
            if(space==0){
                cout<<i-1;
                space=1;
            }else{
                cout<<" "<<i-1;
            }
        }
    }
    cout<<endl;
}
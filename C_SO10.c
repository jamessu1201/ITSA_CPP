#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,j,n;
    int tmp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n-1;i++){             //sorting
        for(j=i+1;j<n;j++){
            if(a[j]<a[i]){
                tmp=a[i];
                a[i]=a[j];
                a[j]=tmp;
            }
        }
    }
    for(i=0;i<n-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[n-1]<<endl;
}
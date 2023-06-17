#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

void reverse(int *s,int length){        //reverse the array
    int i,j=length-1;
    for(i=0;i<length/2;i++){
        swap(s[i],s[j]);
        j--;
    }
}

int main(){
    int a[100];
    int i,j=0;
    while(cin>>a[j]){
        j++;
    }
    reverse(a,j);
    for(i=0;i<j-1;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[j-1]<<endl;
}
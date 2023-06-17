#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(){
    int alpha[26]={0};      //alphabet's count
    int i,n;
    char a;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        alpha[a-'a']++;
    }
    for(i=0;i<26;i++){
        if(alpha[i]>0){
            cout<<i+'a'<<" "<<alpha[i]<<endl;
        }
    }
}
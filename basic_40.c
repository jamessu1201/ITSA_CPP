#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(){
    int i,j;
    char input;
    int a[10];
    for(i=0;i<10;i++){
        cin>>input;
        
        if(input!='X'){  //X
            a[i]=input-'0';
        }else{
            a[i]=10;
        }
    }
    for(i=0;i<2;i++){       
        for(j=1;j<10;j++){  //每一個都會加前面的那一個
            a[j]+=a[j-1];
        }
    }
    
    if(a[9]%11==0){
        cout<<"YES\n";
        
    }else{
        cout<<"NO\n";
        
    }
}
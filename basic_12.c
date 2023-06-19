#include<iostream> 

using namespace std;

int f(int a){  
    if(a==0 || a==1){  
        return a+1;  
    }else if(a>1){  
        return f(a-1)+f(a/2);  
    }
    return 0;  
}  
int main(){  
    int k;  
    while(cin>>k){  
        cout<<f(k)<<endl;  
    }  
    return 0;  
}   

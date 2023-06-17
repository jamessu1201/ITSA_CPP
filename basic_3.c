#include<iostream>
#include<cstring>

using namespace std;

int main(){  
    int a,b;  
    cin>>a>>b;
    if(a*a+b*b<=200*200){
        cout<<"inside\n";
    }else{  
        cout<<"outside\n";  
    }  
}  
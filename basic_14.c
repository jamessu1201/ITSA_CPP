#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

void swap(char *a,char *b){     //swap
    char tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}

void reverse(char *s){      //reverse
    int i,j=strlen(s)-1;
    for(i=0;i<strlen(s)/2;i++){
        swap(&s[i],&s[j]);
        j--;
    }
}

int main(){
    char a[1000];
    char b[1000];
    int i,s=0;
    cin>>a;
    strcpy(b,a);
    reverse(b);
    for(i=0;i<strlen(a)/2;i++){
        if(a[i]!=b[i]){
            s=1;
            break;
        }
    }
    if(s==0){
        cout<<"YES\n";
        
    }else{
        cout<<"NO\n";
        
    }
}
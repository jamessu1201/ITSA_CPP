#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(){
    char a[101];
    int alpha[26]={0};
    cin.getline(a,100);
    int leng=strlen(a);
    int space=1;
    for(int i=0;i<leng;i++){
        if(a[i]==' '){
            space++;
        }else{
            alpha[tolower(a[i])-'a']++;  //全部變小寫
        }
    }
    cout<<space<<endl;
    for(int i=0;i<26;i++){
        if(alpha[i]!=0){
            cout<<i+'a'<<" : "<<alpha[i]<<endl;
        }
    }
}
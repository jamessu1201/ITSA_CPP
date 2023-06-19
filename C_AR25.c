#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(){
    int i;
    char input[1000];  //input
    int ascii[128]={0};  //symbol count
    cin>>input;
    int leng=strlen(input);
    for(i=0;i<leng;i++){        //every ascii code ++
        ascii[input[i]]++;
    }
    for(i=127;i>=0;i--){        //print the answer
        if(ascii[i]!=0){
            cout<<i<<" "<<ascii[i]<<endl;
        }
    }
}
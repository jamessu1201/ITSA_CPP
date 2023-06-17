#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(){
    char input[101];
    int num,number;
    int i;

    cin.getline(input,100);
    cin>>num;
    num%=26;        //alphabet
    number=num%10;  //number
    int leng=strlen(input);
    for(i=0;i<leng;i++){
        if(isalpha(input[i])){
            input[i]+=num;
            if((!isalpha(input[i]))){
                input[i]-=26;
            }
        }else if(isdigit(input[i])){
            input[i]+=number;
            if((!isdigit(input[i]))){
                input[i]-=10;
            }
        }
    }
    puts(input);
}
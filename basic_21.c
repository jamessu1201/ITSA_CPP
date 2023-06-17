#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(){
    float a,max=-99999,min=99999;
    for(int i=0;i<10;i++){
        cin>>a;
        if(a>max){
            max=a;
        }
        if(a<min){
            min=a;
        }
    }
    cout<<"maximum:"<<max<<endl;
    cout<<"minimum:"<<min<<endl;
}
#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(){
    int month,day;
    int i,n;
    int num;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>num;
        month=num/100;
        day=num%100;
        cout<<month;
        if(day<10){
            cout<<"0";
        }
        cout<<day<<" ";
        if(month==1){                   //use day and month to decide
        if(day<21){
            cout<<"Capricorn\n";
            
        }else{
            cout<<"Aquarius\n";
            
        }
    }else if(month==2){
        if(day<19){
            cout<<"Aquarius\n";
            
        }else{
            cout<<"Pisces\n";
            
        }
    }else if(month==3){
        if(day<21){
            cout<<"Pisces\n";
            
        }else{
            cout<<"Aries\n";
            
        }
    }else if(month==4){
        if(day<21){
            cout<<"Aries\n";
            
        }else{
            cout<<"Tautus\n";
            
        }
    }else if(month==5){
        if(day<22){
            cout<<"Tautus\n";
            
        }else{
            cout<<"Gemini\n";
            
        }
    }else if(month==6){
        if(day<22){
            cout<<"Gemini\n";
            
        }else{
            cout<<"Cancer\n";
            
        }
    }else if(month==7){
        if(day<23){
            cout<<"Cancer\n";
            
        }else{
            cout<<"Leo\n";
            
        }
    }else if(month==8){
        if(day<24){
            cout<<"Leo\n";
            
        }else{
            cout<<"Virgo\n";
            
        }
    }else if(month==9){
        if(day<24){
            cout<<"Virgo\n";
            
        }else{
            cout<<"Libra\n";
            
        }
    }else if(month==10){
        if(day<24){
            cout<<"Libra\n";
            
        }else{
            cout<<"Scorpio\n";
            
        }
    }else if(month==11){
        if(day<23){
            cout<<"Scorpio\n";
            
        }else{
            cout<<"Sagittarius\n";
            
        }
    }else if(month==12){
        if(day<22){
            cout<<"Sagittarius\n";
            
        }else{
            cout<<"Capricorn\n";
            
        }
    }
    }
}
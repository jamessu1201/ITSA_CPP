#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(){
    int i,j,n,sum;
    char a[33];
    cin>>n;
    getchar();
    for(i=0;i<n;i++){
        sum=0;                      //initializing
        memset(a,0,sizeof(a));
        cin.getline(a,33);
        int leng=strlen(a);
        for(j=0;j<leng;j++){        //sum
            sum+=a[j];
        }
        cout<<sum<<endl;
    }
}
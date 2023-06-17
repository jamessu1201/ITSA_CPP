#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

int main(){
    int i,j,n,sum;
    char a[33];
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        sum=0;                      //initializing
        memset(a,0,sizeof(a));
        gets(a);
        int leng=strlen(a);
        for(j=0;j<leng;j++){        //sum
            sum+=a[j];
        }
        printf("%d\n",sum);
    }
}
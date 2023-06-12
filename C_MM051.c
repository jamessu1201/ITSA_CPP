#include<bits/stdc++.h>

using namespace std;

int main(){
    int i,k;
    int num=0;
    int p=2;
    int sum=0;
    cin>>k;
    while(num!=k){              //num會一直加到k
        int s=0;
        for(i=2;i<p;i++){       //calculate prime
            if(p%i==0){
                s=1;
                break;
            }
        }
        if(s==0){
            cout<<p<<",";
            sum+=p;
            num++;
        }
        p++;
    }
    cout<<endl<<sum<<endl;
}
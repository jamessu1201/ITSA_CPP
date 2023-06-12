#include<bits/stdc++.h>
#define int long long

using namespace std;


signed main(){
    int i,a,sum=0;
    for(i=0;i<6;i++){       //add the sum
        cin>>a;
        sum+=a*a*a;
    }
    cout<<sum<<endl;
}
#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;


void reverse(char *s,int length){        //reverse the array
    int i,j=length-1;
    for(i=0;i<length/2;i++){
        swap(s[i],s[j]);
        j--;
    }
}

void reverseint(int *s,int length){        //reverse the array
    int i,j=length-1;
    for(i=0;i<length/2;i++){
        swap(s[i],s[j]);
        j--;
    }
}

int max(int a,int b){
    return (a>b)?a:b;
}

int main(){
    char a[31],b[31];       //two number
    int al,bl;      //number's length
    int ll;
    int i,j,n;
    int ans[32];
    cin>>n;
    for(i=0;i<n;i++){
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        memset(ans,0,sizeof(ans));
        cin>>a>>b;
        al=strlen(a);
        bl=strlen(b);
        reverse(a,al);
        reverse(b,bl);
        ll=max(al,bl);          //max of a and bl
        for(j=0;j<ll;j++){
            if(j>=al){
                a[j]='0';
            }else if(j>=bl){
                b[j]='0';
            }
            ans[j]+=(a[j]-'0')+(b[j]-'0');
            if(ans[j]>=10){          //if ans[j]>10 進位
                ans[j+1]++;
                ans[j]-=10;
            }
        }
        if(ans[j]>0){           //如果合起來的位數超過原本的話+1
            ll++;
        }
        reverseint(ans,ll);
        for(j=0;j<ll;j++){
            cout<<ans[j];
        }
        cout<<endl;
    }
}
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int arr[100001]={0,};

void era(int a, int b){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k=a;
    
    if(k==1)
        return;
    else{
        for(int i=2;i*i<=k;i++){
            while(a%i==0){
                a/=i;
                arr[i]+=b;
            }
        }
        //k가 6인 경우 2는 소인수로 세지만 3이 남음 이런경우를 위한 조건문 처리
        if(a>1)
            arr[a]+=b;
      
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;

    int a;
    cin>>a;
    if(a==0){
        cout<<"mint chocolate\n";
        return 0;
        }
    era(abs(a),1);
    for(int i=1;i<n;i++){
        char op;
        cin>>op;
        if(op=='*'){
            cin>>a;
            if(a==0){
                cout<<"mint chocolate\n";
                return 0;
            }
            era(abs(a),1);
        }
        else if(op=='/'){
            cin>>a;
            if(a==0){
                cout<<"mint chocolate\n";
                return 0;
            }
            era(abs(a),-1);
        }
    }
    for(int i=0;i<100001;i++){
        if(arr[i]<0){
            cout<<"toothpaste\n";
            return 0;
        }
    }
    cout<<"mint chocolate\n";
}
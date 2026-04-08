#include <iostream>
#include <algorithm>
using namespace std;

void result(int num){
    if(num==4)
        cout<<'E'<<'\n';
    else if(num==3)
        cout<<'A'<<'\n';
    else if(num==2)
        cout<<'B'<<'\n';
    else if(num==1)
        cout<<'C'<<'\n';
    else if(num==0) 
        cout<<'D'<<'\n';
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int yoot[4];
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++)
            cin>>yoot[j];
        int num=count(yoot,yoot+4,1);
        result(num);
    }

   
}
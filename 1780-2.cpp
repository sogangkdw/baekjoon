#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

vector<vector<int>> arr;
int num1=0;
int num2=0;
int num3=0;

void Count(int y,int x, int size){
    int init=arr[y][x];
    for(int i=y;i<y+size;i++){
        for(int j=x;j<x+size;j++){
            if(init!=arr[i][j]){
                int newsize=size/3;
                Count(y,x,newsize);
                Count(y,x+newsize,newsize);
                Count(y,x+2*newsize,newsize);
                Count(y+newsize,x,newsize);
                Count(y+newsize,x+newsize,newsize);
                Count(y+newsize,x+2*newsize,newsize);
                Count(y+2*newsize,x,newsize);
                Count(y+2*newsize,x+newsize,newsize);
                Count(y+2*newsize,x+2*newsize,newsize);
                return;
            }
        }
    }
    if(init==-1)
        num1+=1;
    else if(init==0)
        num2+=1;
    else if(init==1)
        num3+=1;
    }
    


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    arr.resize(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
   Count(0,0,n);
   cout<<num1<<'\n';
   cout<<num2<<'\n';
   cout<<num3<<'\n';
}
#include <iostream>
using namespace std;

int main(void){
    int n,score;
    cin>>n>>score;
    int*list;
    list=new int[n];
    for(int i=0;i<n;i++){
        cin>>list[i];
    }
    int tmp=0;
    int sum;
    for(int x=0;x<n-2;x++){
        for(int y=x+1;y<n-1;y++){
            for(int z=y+1;z<n;z++){
                sum=list[x]+list[y]+list[z];
                if(score>=sum&&sum>=tmp)
                    tmp=sum;
            }
        }
    }
    cout<<tmp<<endl;
}
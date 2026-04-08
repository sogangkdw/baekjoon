#include <iostream>
#include <deque>
#include <algorithm>
#include <cstdio>

using namespace std;

void OBN(deque<int> dqe,int x){
    for(int i=0;i<x;i++){
        dqe.pop_front();
    }
   
    for(int i=0;i<dqe.size()-1;i++){
        if(dqe[i+1]>dqe.front()){
            cout<<dqe[i+1]<<' ';
            return;
        }
    }
    cout<<-1<<' ';
    return;
}

int main(void){
    deque<int> dqe;
    int n,a;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        dqe.push_back(a);
    }
    for(int i=0;i<n;i++){
        OBN(dqe,i);
    }
    printf("\n");
}

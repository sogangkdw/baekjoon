#include <iostream>

using namespace std;

void sort(int *a){
    for(int x=1;x<3;x++){
        for(int y=0;y<3-x;y++){
            if(a[y+1]<a[y])
                swap(a[y],a[y+1]);
        }
    }
}


int main(void){
    int a[3],b[3];
    for(int x=0;x<3;x++){
        cin>>a[x];
    }

    for(int x=0;x<3;x++){
        cin>>b[x];
    }

    sort(a);
    sort(b);


    int p1=1;
    int p2=1;

    for(int x=0;x<3;x++){
        if(a[x]!=b[x]){
            p1=0;
            break;
        }
    }

    if(a[2]*a[2]!=a[0]*a[0]+a[1]*a[1])
        p2=0;
    if(p1&&p2)
        cout<<"YES";
    else    
        cout<<"NO";
}
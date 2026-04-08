#include <bits/stdc++.h>
using namespace std;
int score[5];
int n;
int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    long long ID=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>score[i];
    }

    if(score[0]>score[2])
        ID+=(score[0]-score[2])*508;
    else
        ID+=(score[2]-score[0])*108;
    if(score[1]>score[3])
        ID+=(score[1]-score[3])*212;
    else 
        ID+=(score[3]-score[1])*305;
    if(score[4])
        ID+=score[4]*707;
    ID*=4763;
    cout<<ID;
    return 0;
    
}
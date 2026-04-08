#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

const int INF = 987654321;
const int MAX = 10 + 1;
int N, M;

int maxBit, result;

long long cache[MAX];
//maxBit=1의 개수 최대, result=기타개수 최소
int countBit(long long bit){
    int result=0;
    while(bit){
        result+=bit&1;
        bit>>=1;
    }
    return result;
}

void minguitar(int idx, int cnt, long long bit){
    int Y=countBit(bit);

    if(maxBit<Y){
        maxBit=Y;
        result=cnt;
    }

    else if(maxBit==Y)
        result=min(result,cnt);

    if(idx==N)
        return;
    minguitar(idx+1,cnt+1,bit | cache[idx]);//기타 포함
    minguitar(idx+1,cnt,bit);
}


int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N>>M;
    string name, playlist;

    for(int i=0;i<N;i++){
        cin>>name>>playlist;
        for(int j=0;j<M;j++){
            if(playlist[j]=='Y'){
                cache[i] |=(1LL<<M-1-j);
            }

        }
    }
    minguitar(0,0,0);

    if(!maxBit){
        cout<<-1<<'\n';
    }
    else{
        cout<<result<<'\n';
    }

}
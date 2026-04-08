#include <iostream>
#include <string>
#include<algorithm>
#include <cstring>

using namespace std;

int N,M;
const int MAX=11;
long long cache[MAX];
int maxBit,guitar_sum;

int check(long long bit){
    int sum=0;
    while(bit){
        sum+=bit&1;
        bit>>=1;
    }

    return sum;

}
void solve(int num,int cnt, long long bit){
    int new_bit=check(bit);

    //1 최대 갱신했을 때
    if(new_bit>maxBit){
        maxBit=new_bit;
        guitar_sum=cnt;
    }
    //1 개수 같으면
    else if(new_bit==maxBit){
        guitar_sum=min(guitar_sum,cnt);
    }

    if(num==N)//그전 단계로(solve(num+1,cnt,bit) 하러 ㄱㄱ)
        return;

    solve(num+1,cnt+1,bit|cache[num]);//guitar 추가
    solve(num+1,cnt,bit);//guitar 제외
    

}
//이런 문제는 모든 경우의 수를 다 탐색해야 함. N이 5이면 2^5가지
int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin>>N>>M;
    for(int i=0;i<N;i++){
        string name,playlist;
        cin>>name>>playlist;
        for(int j=0;j<M;j++){
            if(playlist[j]=='Y'){
                cache[i] |=(1LL<<M-1-j);//'Y'를 1로, 'N'을 0으로 바꿈
            }
        }
    }

    solve(0,0,0);   

    if(!maxBit){
        cout<<-1<<'\n';
    } 
    else{
        cout<<guitar_sum<<'\n';
    }
}

//재귀함수 이용해서 모든 경우의 수 탐색, 그 중에 Y는 가장 많고, 기타 수는 가장 적은 경우 구함
//재귀함수를 기타 포함, 불포함 두가지로 나눔
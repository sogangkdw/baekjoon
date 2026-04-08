#include <iostream>
#include <queue>

using namespace std;

int main(void){
    queue<int> que;
    int n,k;
    scanf("%d %d",&n,&k);

    for(int i=1;i<=n;i++){
        que.push(i);
    }
    while(que.size()>1){
        if(que.size()>k){
            for(int c=1;c<=k;c++){
                if(c==1){
                    que.push(que.front());
                }
                que.pop();
            }            
        }
        else{
            printf("%d\n",que.front());
            break;
        }
    }
    
}
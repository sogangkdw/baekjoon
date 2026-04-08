#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int fruit[200001];

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> c(10);
    vector<int> pre_sum(200001);
    //과일 1~9의 개수

    int n;
    //탕후루에 꽂을 과일 개수
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>fruit[i];
        pre_sum[i]=pre_sum[i-1]+fruit[i];
        //n번째 과일 종류 입력
                    
    }
    int a=1;//index
    int b=1;//index
    int cnt=0;

    while(a<=b&&cnt<n-a+1){
        int k=pre_sum[b]-pre_sum[b-1];
        c[k]++;
        if(count(c.begin(),c.end(),0)>=8){
          cnt=max(cnt,b-a+1);
        }
        else{
            a++;
            b=a;
            fill(c.begin(), c.end(), 0);
            continue;
        }
        if(b<n){
            b++;
        }
        else if(b==n){
            a++;
            b=a;
            fill(c.begin(), c.end(), 0);
        }
    }

    cout<<cnt<<'\n';
}
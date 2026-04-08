#include <iostream>

using namespace std;


long long arr1[1010][1010]={0};
long long arr2[1010][1010]={0};
int n,m;

void add(int x1,int y1, int x2, int y2,int k){
    arr2[x1][y1]+=k;
    arr2[x2+1][y1]-=k;
    arr2[x1][y2+1]-=k;
    arr2[x2+1][y2+1]+=k;

}

void sum(int x1, int y1, int x2, int y2){
    long long ans=0;
    for(int i=x1;i<=x2;i++){
        for(int j=y1;j<=y2;j++){
            ans+=arr1[i][j];
            ans+=arr2[i][j];
        }
    }
    cout<<ans<<'\n';
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr1[i][j];
        }
    }

    int a,x1,y1,x2,y2,k;
    while(m--){
        cin>>a;
        if(a==1){
            cin>>x1>>y1>>x2>>y2>>k;
            add(x1,y1,x2,y2,k);  
        }

        else if(a==2){
              for (int i=0;i<n;i++){
                    for (int j=0;j<n;j++){
                        arr2[i][j+1] += arr2[i][j];
                    }
                }

                for (int j=0;j<n;j++){
                    for (int i=0;i<n;i++){
                        arr2[i+1][j] += arr2[i][j];
                        }
                    }
            cin>>x1>>y1>>x2>>y2;
            sum(x1,y1,x2,y2);

        }
    }
    return 0;
}
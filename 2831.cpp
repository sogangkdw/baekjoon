#include <bits/stdc++.h>
using namespace std;
int n,cnt;
//4개로 분할
int man_mi[100000];
int man_ps[100000];
int woman_mi[100000];
int woman_ps[100000];

bool sort(int a, int b){
    if(a<0) a*=(-1);
    if(b<0) b*=(-1);
    if(a<b) return true;
    return false;
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    //idx1은 양수, idx2는 음수
    int mn_idx1=0,mn_idx2=0,wm_idx1=0,wm_idx2=0;
    for(int i=0;i<n;i++){
        int n;
        cin>>n;
        if(n>0){
            man_ps[mn_idx1++]=n;
        }
        else man_mi[mn_idx2++]=n;
    }
        
    for(int i=0;i<n;i++){
        int n;
        cin>>n;
        if(n>0){
            woman_ps[wm_idx1++]=n;
        }
        else woman_mi[wm_idx2++]=n;
    }
    sort(man_ps,man_ps+mn_idx1);
    sort(man_mi,man_mi+mn_idx2,greater<int>());
    sort(woman_ps,woman_ps+wm_idx1);
    sort(woman_mi,woman_mi+wm_idx2,greater<int>());
    int i=0,j=0;
    while(1){
        if(i==mn_idx1||j==wm_idx2) break;
        while(i<mn_idx1&&j<wm_idx2&&man_ps[i]>=abs(woman_mi[j])){
            j++;
        }
        if(j<wm_idx2&&man_ps[i]<abs(woman_mi[j])){
            cnt++;
            j++;
        }
        i++;    
    }
  

    i=0;j=0;
    while(1){
        if(i==mn_idx2||j==wm_idx1) break;
        while(i<mn_idx2&&j<wm_idx1&&abs(man_mi[i])<=woman_ps[j]){
            i++;
        }
        if(i<mn_idx2&&abs(man_mi[i])>woman_ps[j]){
            cnt++;
            i++;
        }
        j++;
    }
    cout<<cnt;
}
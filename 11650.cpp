#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
    vector <pair<int,int>> coor;//map은 value key 불가
    int N;
    cin>>N;
    int num1,num2;
    for(int i=0;i<N;i++){
        cin>>num1>>num2;
        coor.push_back(make_pair(num1,num2));//make_pair 사용
    }
    sort(coor.begin(),coor.end());
    for(int i=0;i<N;i++){
        cout<<coor[i].first<<' '<<coor[i].second<<endl;
}

    // for(auto iter=coor.begin();iter!=coor.end();iter++){
    //     cout<<iter->first<<' '<<iter->second<<endl;
    // }
        
}

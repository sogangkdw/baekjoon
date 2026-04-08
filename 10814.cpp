#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

bool compare(const pair<int,string> &a,const pair<int,string> &b){

    return a.first<b.first;
}
int main(void){
    ios::sync_with_stdio(false);//시간 줄이기
	cin.tie(NULL);//시간 줄이기
	cout.tie(NULL);//시간 줄이기
    vector<pair<int,string>> arr;
    int N,age;
    cin>>N;
    string name;
    for(int i=0;i<N;i++){
        cin>>age>>name;
        //cin.ignore();
        //getline(cin,name);
        arr.push_back({age,name});
    }
    stable_sort(arr.begin(),arr.end(),compare);
   
//     for(int i=0;i<N;i++){
//         cout<<arr[i].first<<' '<<arr[i].second<<endl;
//    }
   for(auto iter=arr.begin();iter!=arr.end();iter++){
        cout<<iter->first<<' '<<iter->second<<"\n";
    }
        


}
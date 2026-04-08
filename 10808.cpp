#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//int arr[26]; 전역은 자동으로 0 초기화
int main(void){
    int arr[26]={0};
    string str;
    cin>>str;
    int len=str.length();
    for(int i=0;i<len;i++){
        arr[str[i]-'a']++;
    }
    for(auto it:arr){
        cout<<it<<' ';
    }

}
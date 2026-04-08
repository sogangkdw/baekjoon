#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cctype>
#include <typeinfo>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<string> arr;
    int num1,num2,a;
    cin>>num1>>num2;
    cin.ignore();
    string name;
    for(int x=0;x<num1;x++){
        getline(cin,name);
        arr.push_back(name);
    }

    for(int i=0;i<num2;i++){
        getline(cin,name);
        if(atoi(name.c_str()) != 0 || name.compare("0") == 0)//name이 숫자인지 확인
        {
            a=atoi(name.c_str());
            cout<<*(arr.begin()+a-1)<<"\n";

        }
        else{
            a=find(arr.begin(),arr.end(),name)-arr.begin();
            cout<<a+1<<"\n";        
        }
        
       
    }
}
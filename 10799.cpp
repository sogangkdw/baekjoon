#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string sen;
    getline(cin,sen);
    stack<char> a;
    int sum=0;
    for(int i=0;i<sen.length();i++){
        if(sen[i]=='('){
            a.push('(');
        }
        else if(sen[i-1]=='('&&sen[i]==')'){
            a.pop();
            sum+=a.size();
        }
        else if(sen[i-1]==')'&&sen[i]==')'){
            a.pop();
            sum+=1;
        }
    }
    cout<<sum<<'\n';
}
#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        stack<char> sen;
        string a;
        cin>>a;
        for(int x=0;x<a.length();x++){
            if(sen.empty()){
                sen.push(a[x]);
            }
            else{
                if(sen.top()=='('&& a[x]==')'){
                    sen.pop();
                }
                else{
                    sen.push(a[x]);
                }
            }
        }
        if(sen.empty()){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}
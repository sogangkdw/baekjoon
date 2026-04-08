#include <iostream>
#include <list>

using namespace std;

int main(void){
    list<int> l;
    list<int>::iterator cursor=l.begin();
    int num1,num2;
    cin>>num1>>num2;
    for(int i=1;i<=num1;i++){
        l.push_back(i);
    }
   
    cout<<'<';
    for(int i=0;i<num1;i++){
            for(int j=0;j<num2;j++){
                if(cursor==l.end())
                   cursor=l.begin();
                cursor++;
            }
            cursor--;
            if(i==num1-1)
                cout<<*cursor;
            else
                cout<<*cursor<<", ";
            cursor=l.erase(cursor);

    }
    cout<<'>';
}
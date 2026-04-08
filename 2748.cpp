#include <iostream>
#include <map>
using namespace std;

map<long long,long long> fi;

long long fibonacii(int n){
    long long sum=0;
    if(n==0){
        fi.insert(pair<long long,long long>(0,0));
    }
    else if(n==1){
        fi.insert(pair<long long, long long>(1,1));
    }
    else{
        for(map<long long,long long>::iterator it=fi.begin();it!=fi.end();it++){
            if(it->first==n-2){
                sum+=it->second;
            }
            if(it->first==n-1){
                sum+=it->second;
                fi.insert(pair<long long,long long>(n,sum));
                break;
            }
        }
        
    }
    typename map<long long,long long>::iterator itx=fi.find(n);
    if(itx!= fi.end()){
        return fi[n];
    }
    else
        return fi[n]=fibonacii(n-1)+fibonacii(n-2);
}

int main(void){
    int n;
    cin>>n;
    cout<<fibonacii(n)<<endl                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
}
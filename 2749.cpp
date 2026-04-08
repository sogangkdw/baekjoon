#include <iostream>
using namespace std;
long long fi[1500000]={0,};

long long fibonacii(long long num){
    fi[0]=0;
    fi[1]=1;
    fi[2]=1;
    if(num==0)
        return fi[0];
    else if(num==1||num==2)
        return fi[1];
    
    if(fi[num]!=0)
        return fi[num];
    else    
        fi[num]=(fibonacii(num-1)+fibonacii(num-2))%1000000;
    
    return fi[num];

}


int main(void){
    long long num;
    cin>>num;
    cout<<fibonacii(num%1500000)<<endl;
}

// #include <iostream>
// #include <map>
// using namespace std;

// map<long long,long long> fi;

// long long fibonacii(long long n){
//     long long sum=0;
//     if(n==0){
//         fi.insert(pair<long long,long long>(0,0));
//     }
//     else if(n==1){
//         fi.insert(pair<long long, long long>(1,1));
//     }
//     else{
//         for(map<long long,long long>::iterator it=fi.begin();it!=fi.end();it++){
//             if(it->first==n-2){
//                 sum+=it->second;
//             }
//             if(it->first==n-1){
//                 sum+=it->second;
//                 fi.insert(pair<long long,long long>(n,sum));
//                 break;
//             }
//         }
        
//     }
//     typename map<long long,long long>::iterator itx=fi.find(n);
//     if(itx!= fi.end()){
//         return fi[n];
//     }
//     else
//         return fi[n]=(fibonacii(n-1)+fibonacii(n-2))%1000000000;
// }

// int main(void){
//     long long n;
//     cin>>n;
//     cout<<fibonacii(n)%1500000<<endl                                                                                                                                                                                                                                                                                                                                                                                                                                                          ;
// }
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

const int Max=5000000;

void findSmallestPrimeFactors(vector<bool>& is_prime, vector<int>& smallest_prime_factor){
    is_prime[0]=is_prime[1]=false;
    for(int i=2;i*i<=Max;i++){
        if(is_prime[i]){
            smallest_prime_factor[i]=i;
            for(int j=i*i;j<=Max;j+=i){
                is_prime[j]=false;
                if(smallest_prime_factor[j]==0)
                    smallest_prime_factor[j]=i;
            }
        }
    }
    for(int k=sqrt(Max);k<=Max;k++){
        if(smallest_prime_factor[k]==0){
            smallest_prime_factor[k]=k;
        }
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<bool> is_prime(Max+1,true);
    vector <int> smallest_prime_factor(Max+1,0);

    findSmallestPrimeFactors(is_prime,smallest_prime_factor);

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int num;
        cin>>num;

        while(num>1){
            cout<<smallest_prime_factor[num]<<' ';
            num/=smallest_prime_factor[num];
        }
        cout<<'\n';
    }
    return 0;
}
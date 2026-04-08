#include <iostream>

using namespace std;
#define MAX 1000000000

int main(void){
    long long x, y;
    cin>>x>>y;
    long long i=1, j=MAX;
    long long new_avg=0;
    long long avg=y*100/x;
    if(avg>=99){
        cout<<-1;
        return 0;
    }
    
    while(i<j){
  
        int m=(i+j)/2;
        int new_avg=(y+m)*(100)/(x+m);
        if(new_avg>avg)
            j=m;
        else 
            i=m+1;

        

}
    cout<<i;


}
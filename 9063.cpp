#include <iostream>
using namespace std;
struct coord{
    int x,y;
};
class coordinate{
    public:
        int size;
        coord*list;

        coordinate(int size){
            this->size=size;
            list=new coord[size];
        } 
    ~coordinate(void){
        delete[]list;
    }

    int findwidth(void){
        int min=list[0].x;
        int max=list[0].x;
        for(int i=1;i<size;i++){
            if(list[i].x<min)
                min=list[i].x;
            if(list[i].x>max)
                max=list[i].x;
        }
        return max-min;
    }
    int findheight(void){
        int min=list[0].y;
        int max=list[0].y;
        for(int i=1;i<size;i++){
            if(list[i].y<min)
                min=list[i].y;
            if(list[i].y>max)
                max=list[i].y;
        }
        return max-min;
    }
};



int main(void){
    int n;
    cin>>n;
    int num1,num2;
    
    if(n<=1){
        cin>>num1>>num2;
        cout<<0<<endl;
        return 0;
    }
    else{
        coordinate c(n);
        for(int i=0;i<n;i++){
            cin>>c.list[i].x>>c.list[i].y;
        }
        cout<<c.findwidth()*c.findheight()<<endl;
        return 0;
    }

}
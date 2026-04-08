#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<vector<char>> imagematrix;

string quadTree(int y, int x, int size){
    char init=imagematrix[y][x];
    for(int i=y;i<y+size;i++){
        for(int j=x;j<x+size;j++){
            if(imagematrix[i][j]!=init){
                int newsize=size/2;
                return "("
                    +quadTree(y,x,newsize)
                    +quadTree(y,x+newsize,newsize)
                    +quadTree(y+newsize,x,newsize)
                    +quadTree(y+newsize,x+newsize,newsize)
                    + ")";
            }
        }
    }
    return string(1,init);//string(size_t n, char c);
    // if(init=='1')
    //     return "1";
    // else
    //     return "0";
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    imagematrix.resize(n,vector<char>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>imagematrix[i][j];
        }
    }
    cout<<quadTree(0,0,n)<<'\n';
}
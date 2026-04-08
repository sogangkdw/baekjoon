#include <iostream>
#include <string>
#include <vector>

using namespace std;
int M,N;
int LCS(string &a, string &b){
    M=a.length(),N=b.length();
    vector<vector<int>> matrix(M+1, vector<int>(N+1,0));
    for(int i=M-1;i>=0;i--){
        for(int j=N-1;j>=0;j--){
            if(a[i]==b[j]){
                matrix[i][j]=matrix[i+1][j+1]+1;
            }
            else
                matrix[i][j]=max(matrix[i+1][j],matrix[i][j+1]);
        }
    }
    return matrix[0][0];
}

int main(void){
    ios::sync_with_stdio(false);
    string a,b;
    cin>>a>>b;
    cout<<LCS(a,b)<<'\n';
}
#include <bits/stdc++.h>
using namespace std;
//a는 변치않음
void print(int n,int a){
    for(int i=0;i<=(a-n);i++){
        cout<<"____";
    }
}

void func1(int n,int a){
    print(n,a);
    cout<<"\"재귀함수가 뭔가요?\"\n";
    if(n==1){
        print(n,a);
        cout<<"\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
        return;
    }
    print(n,a);
    cout<<"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
    print(n,a);
    cout<<"마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    print(n,a);
    cout<<"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
    func1(n-1,a);

}

void func2(int n,int a){
    if(n==0) return;
    for(int i=0;i<n;i++){
        cout<<"____";
    }
    cout<<"라고 답변하였지.\n";
    func2(n-1,a);
}

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,a;
    cin>>n;
    a=n;
    cout<<"어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
    cout<<"\"재귀함수가 뭔가요?\"\n";
    cout<<"\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
    cout<<"마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    cout<<"그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
    func1(n,a);
    func2(n,a);
    cout<<"라고 답변하였지.\n";
}
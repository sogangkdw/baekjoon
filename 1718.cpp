#include <bits/stdc++.h>
using namespace std;

int main(void){
    string secret;
    string sentence;
    string answer;
    getline(cin,sentence);
    getline(cin,secret);
    int size1=secret.size(),size2=sentence.size();
    int cnt=secret.size();
    int tmp=0;
    //secret sentence만큼의 길이로 변경
    while(cnt<size2){
        secret+=secret[tmp%size1];//tmp%size1은 0~size1까지로 인덱스 설정
        cnt++;
        tmp++;
    }
    /*string key = secret;
    key.resize(sentence.size());
    for (int i = secret.size(); i < sentence.size(); i++) {
        key[i] = secret[i % secret.size()];
    }*/


    for(int i=0;i<size2;i++){
        if(sentence[i]==' ')
            answer+=' ';
        else{
            if(sentence[i]>secret[i])
                answer+='a'+sentence[i]-secret[i]-1;
            else
                answer+='z'-(secret[i]-sentence[i]);
        }
    }
    cout<<answer;
}

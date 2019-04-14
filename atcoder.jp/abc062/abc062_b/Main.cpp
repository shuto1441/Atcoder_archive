#include<iostream>
#include<vector>
#include<cstdlib>
#include<string>
using namespace std;

int main(){
    //入力部
    int H,W;
    cin>>H>>W;
    vector<string>a(H);
    for(int i = 0;i < H; i++){
        cin>>a.at(i);
    }
    //上下の文字列
    vector<string>b(W+2,"#");
    for(int i = 0;i < W+2; i++){
        cout<<b.at(i);
    }
    cout<<endl;
    //n行目の処理
    for(int i = 0;i < H; i++){
        cout<<"#"<<a.at(i)<<"#"<<endl;
    }
    for(int i = 0;i < W+2; i++){
        cout<<b.at(i);
    }
    cout<<endl;
    return 0;
    }

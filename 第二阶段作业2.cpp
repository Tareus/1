//目标:使用类来进行输入1-10的整数,输出对应数量的"Hello,RoboMaster!"
#include<bits/stdc++.h>
using namespace std;
#include<string>
class yuju0{
      public:
      string yuju1="Hello,RoboMaster!";//属性
      string cout0(string yuju1){cout<<yuju1<<endl;};//行为
};
int main(){
    yuju0 y1;
    y1.yuju1="Hello,RoboMaster!";
    int j=0;
    cout<<"请输入要打印的语句个数："<<endl;
    cin>>j;
    for(int i=1;i<(j+1);i++){
        cout<<y1.yuju1<<endl;
    }
}
#include<iostream>
using namespace std;

int main(){

    int num1;
    cout<<"num1:";
    cin>>num1;
    int num2;
    cout<<"num2:";
    cin>>num2;

    int new_Num;
    new_Num = num2;
    num2 = num1;
    num1 = new_Num;

    cout<<"num1 :"<<num1<<endl;
    cout<<"num2 :"<<num2<<endl;

    return 0;
}
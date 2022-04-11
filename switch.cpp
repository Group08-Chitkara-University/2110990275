//simple calculator

#include<iostream>
using namespace std;
int main(){
    char oper;
    float num1, num2;
    cout<<"enter an operator (+, -, *, /) "<<endl;
    cin>>oper;
    cout<<"enter tow no."<<endl;
    cin>>num1 >>num2;
    switch (oper)
    {
    case '+':
       cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
        break;

    case '-':
       cout<<num1<<"-"<<num2<<"="<<num1+num2<<endl;
       break;

    case '*':
       cout<<num1<<"*"<<num2<<"="<<num1*num2<<endl;
       break;
    
    case '/':
       cout<<num1<<"/"<<num2<<"="<<num1/num2<<endl;
       break;

    default:                                                            
       cout<<"error the operator is not correct";
        break;
    }





return 0;
}
#include<iostream>
using namespace std;
int main(){

    char c;
    cout<<"enter a character : ";
    cin>>c;
    if (c>='A'&&c<='Z')
    {
        cout<<"UPPER CASE";
    }
    else if (c>='a'&&c<='z')
    {
        cout<<"lower case";
    }
    

return 0;
}
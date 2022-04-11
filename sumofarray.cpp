#include<iostream>
using namespace std;
int main(){
    int arr[4]={5,4,7,8};
    int sum=0;
    for(int i=0;i<4;i++){

       sum+=arr[i];
    }
    cout<<"sum = "<<sum;

return 0;
}
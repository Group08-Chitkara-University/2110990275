#include<iostream>
using namespace std;
int main(){
  int arr[4];
  int sum=0;
  for (int i=0;i<4;i++)
  {

    cout<<"enter value"<<i<<endl;
    cin>>arr[i];

    

  }
for (int i=0;i<4;i++)

{
    cout<<arr[i]<<endl;
    sum+=arr[i];
    

}
cout<<"the sum is :"<<endl<<sum<<endl;
cout<<"the avg of array is "<<sum/4;

return 0;
}
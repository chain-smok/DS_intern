#include <iostream>
using namespace std;
int main(){
    long long a,b;
    int carry,count,sum;
    cin>>a>>b;
    while(a||b){
      carry=count=0;
      while(a||b){
         sum=a%10+b%10+carry;
         carry=sum>9;
         count+=carry;
         a/=10;
         b/=10;
      }
    if(count==0){
        cout<<"No carry operation."<<endl;
    }else if(count==1){
        cout<<"1 carry operation."<<endl;
    }else{
        cout<<count<<" carry operations"<<endl;
    }
    cin>>a>>b;
}
}
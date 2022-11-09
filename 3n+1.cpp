#include <iostream>
#include <math.h>
using namespace std;
int main(){
   int i,j;
   while(cin>>i>>j){
    int max=0;
    int StartNum=fmin(i,j);
    int EndNum=fmax(i,j);
    while(StartNum<=EndNum){
      int n=StartNum;
      int count=1;
      while(n!=1){
        if(n%2!=0){
            n=n*3+1;
        }else{
            n/=2;
        }
        count++;
      }
        if(count>max)max=count;
        StartNum++;
      }
      cout<<i<<" "<<j<<" "<<max<<endl;
    }
   }

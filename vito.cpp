#include <iostream>
using namespace std;
int main(){
  int n,m,i,j,tmp,tmpx;
  int s[500]={0};
  cout<<"輸入的資料數量:";
  cin>>n;
  while(n--){
   cout<<"有幾個親戚:";
   cin>>m;
   for(i=0;i<m;i++){
    cout<<"輸入親戚家門牌號碼:";
    cin>>s[i];
   }
   for(i=0;i<m;i++){
     tmp=s[i];//tmp=3
     tmpx=i;//tmpx=0;
     for(j=i+1;j<m;j++){
        if(tmp>s[j]){//3>1
           tmp=s[j];//tmp=1
           tmpx=j;//tmpx=4
        }
     }
        s[tmpx]=s[i];//s[4]=3
        s[i]=tmp;//s[0]=1
   }
   int mid,sum=0;
   mid=s[m/2];
   //由小排到大
  for(i=0;i<m;i++){
    sum+=abs(mid-s[i]);
  }
   cout<<"距離的和最小為:";
   cout<<sum<<endl;
  }
}
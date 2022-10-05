#include <stdio.h>
#include <stdlib.h>
int maxv(int[],int N);
int main(){
    int a[10]={99,7,8,9,10,11,13,12,13,45};
    int b[5]={8,15,16,71,54};
    int length_a=sizeof(a)/sizeof(a[0]);//40/4=10
    int length_b=sizeof(b)/sizeof(b[0]);//20/4=5 
    printf("Max_a=%d\n",maxv(a,length_a));
    printf("Max_b=%d\n",maxv(b,length_b));
}
int maxv(int v[],int N){
    int max=v[0],i;
    for(i=1;i<5;i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    return max;
}
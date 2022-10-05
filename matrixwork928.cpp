#include <stdio.h>
#include <stdlib.h>
void arrayPrint(int v[],int length){
    int i;
    for(i=0;i<length;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}
int arrayMax(int v[],int length){
    int max=v[0],i;
    for(i=1;i<length;i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    return max;
}
void arrayRand(int v[],int length){
    int i;
    for(i=0;i<length;i++){
        v[i]=rand()%100;
    }
}
int main(){
  int a[10],b[20]; 
  int length_a=sizeof(a)/sizeof(a[0]);
  int length_b=sizeof(b)/sizeof(b[0]);
  arrayRand(a,length_a);
  arrayRand(b,length_b);
  arrayPrint(a,length_a);
  arrayPrint(b,length_b);
  printf("Max_a: %d\n",arrayMax(a,length_a));
  printf("Max_b: %d\n",arrayMax(b,length_b));
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void arrayRand(int v[]){
    int i;
    for(i=0;i<10;i++){
        v[i]=rand()%100;
    }
}
void arrayPrint(int v[]){
    int i;
    for(i=0;i<10;i++){
        printf("%d ",v[i]);
    }
    printf("\n");
}
int arrayMax(int v[]){
    int max=v[0],i;
    for(i=1;i<10;i++){
        if(v[i]>max){
            max=v[i];
        }
    }
    return max;
}

int main(){
  srand(time(0));
  int v[10],i;
  arrayRand(v);
  arrayPrint(v);
  printf("Max: %d\n",arrayMax(v));
}
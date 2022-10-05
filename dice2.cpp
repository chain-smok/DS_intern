#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int counter[10]={};
    for(int times=1;times<2000;times++){
        int dice=rand()%10+1;
        for(int number=1;number<=10;number++){
            if(dice==number){
                counter[number-1]++;
            }
        }
    }
    for(int i=1;i<=10;i++){
        printf("%d: %d\n",i,counter[i-1]);
    }
}
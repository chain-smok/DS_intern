#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0));
    int counter[]={0,0,0,0,0,0};
    for(int times=1;times<=6000;times++){
        int dice=rand()%6+1;
        for(int number=1;number<=6;number++){
            if(dice==number){
                counter[number--]++;
            }
        }
    }
    for(int i=0;i<6;i++){
        printf("%d: %d\n",i+1,counter[i]);
    }
}
#include <stdio.h>
#include <stdlib.h>
int main(){
    int score[]={68,49,88,18,95,21,34,56,21,10};
    float Average=0;
    int sum=0;
    for(int i=0;i<10;i++){
        sum+=score[i];
    }
    Average=(float)sum/10;
    printf("學生平均成績為:%.2f\n",Average);
}
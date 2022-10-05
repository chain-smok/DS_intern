#include <stdlib.h>
#include <stdio.h>
int main(){
    int score[6][4]={{65,85,78,75},
                     {66,55,52,92},
                     {34,56,78,33},           
                     {44,22,33,44},
                     {11,22,34,55},
                     {23,45,67,78}};
    int sum[6]={0};
    for(int i=0;i<6;i++)
     for(int j=0;j<4;j++)
       sum[i]+=score[i][j];
    for(int i=0;i<6;i++){
        printf("第%d個同學的成績平均為: %d",i+1,sum[i]/4);
        printf("\n");
    }
}
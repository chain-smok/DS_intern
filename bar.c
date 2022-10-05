#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,b[10]={0};
    int i;
    for(i=1;i<=10;i++){
        scanf("%d",&n);//n=12
        b[(n-1)/10]++;//b[11/10]=b[1]
    }
    for(i=1;i<=10;i++){
        printf("%d~%d",(i-1)*10,(i*10-1));
        int j;
        for(j=1;j<=b[i-1];j++){
            printf("*");
        }
        printf("\n");
    }
}
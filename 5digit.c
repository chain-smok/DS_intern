#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int n[5];
    int enter;
    printf("��J5�Ӿ��\n");
    for(int i=1;i<=5;i++)
     scanf("%d",&n[i-1]);
    printf("��J�n�d�ߪ���\n");
    scanf("%d",&enter);
    int nearnumber=n[0];
    for(int i=1;i<5;i++)
     if(abs(enter-n[i])<abs(enter-nearnumber)||abs (enter-n[i])==abs(enter-nearnumber)&&n[i]>nearnumber){
        nearnumber=n[i];
     }
    printf("�̱��񪺼�:%d\n",nearnumber);
}
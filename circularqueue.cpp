#include <stdio.h>
#include <iostream>
#define NUM 10
using namespace std;
typedef struct cqueue{
    int CQ[NUM];
    int Rear;
    int Front;
}CQueue;
int isQueueFull(CQueue q){
    if(q.Front==(q.Rear+1)%NUM){
        return 1;
    }else{
        return 0;
    }
}
int isQueueEmpty(CQueue q){
    if(q.Front==q.Rear){
        return 1;
    }else{
        return 0;
    }
}

void Enqueue(CQueue *q,int item){
    if(isQueueFull(*q)==1){
        printf("The queue is full\n");
    }else{
        q->Rear=(q->Rear+1)%NUM;
        q->CQ[q->Rear]=item;
    }
}
void Dequeue(CQueue *q){
    if(isQueueEmpty(*q)==1){
        printf("the queue is empty\n");
    }else{
        q->Front=(q->Front+1)%NUM;
    }
}
void PrintQueue(CQueue q){
  if(isQueueEmpty(q)==1){
    printf("THe queue is empty\n");
  }else{
     if(isQueueFull(q)==1){
        printf("The queue is full\n");
     }
     int i;
     printf("Current queue:");
     for(i=q.Rear;i!=q.Front;i=(i+NUM-1)%NUM){
        printf("%d ",q.CQ[i]);
     }
     printf("\n");
  }
}
int main(){
    CQueue qu;
    qu.Rear=0;
    qu.Front=0;
    int i;
    for(i=0;i<8;i++){
        Enqueue(&qu,i);
    }
    PrintQueue(qu);
    for(i=0;i<5;i++){
    Dequeue(&qu);}
    PrintQueue(qu);
    return 0;
}
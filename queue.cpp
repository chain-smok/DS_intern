#include <stdio.h>
#define NUM 10
typedef struct queue{
 int Q[NUM];
 int Rear;
 int Front;
}Queue;
int isQueueEmpty(Queue q){
    if(q.Front==q.Rear){
        return 1;
    }else{
        return 0;
    }
}
int isQueueFull(Queue q){
    if(q.Rear==NUM-1){
        return 1;
    }else{
        return 0;
    }
}
void Enqueue(Queue *q,int item){
  if(isQueueFull(*q)==1){
    printf("The queue is full\n");
  }else{
    q->Q[++q->Rear]=item;
  }
}
void Dequeue(Queue *q){
  if(isQueueEmpty(*q)==1){
    printf("The queue is empty\n");
  }else{
    q->Q[++q->Front];
  }

}

void PrintQueue(Queue q){
  if(isQueueEmpty(q)==1){
    printf("The queue is empty\n");
  }else{
    int i;
    printf("The queue:");
    for(i=q.Rear;i>=q.Front+1;i--){
        printf("%d ",q.Q[i]);
    }
    printf("\n");
  }
}
int main(){
    Queue qu;
    qu.Rear=-1;
    qu.Front=-1;
    int i;
    for(i=0;i<3;i++){
        Enqueue(&qu,i);
    }
    PrintQueue(qu);
    for(i=0;i<2;i++){
    Dequeue(&qu);}
    PrintQueue(qu);
    return 0;
}
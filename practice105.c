#include <stdio.h>
#include <stdlib.h>
typedef struct{
    int data[100];
    int size;
}Stack;
void push(Stack *s,int x){
    s->data[s->size]=x;
    s->size++;
}
void pop(Stack *s){
  s->size--;
}
void PrintStack(Stack s){
   int i;
   for(int i=0;i<s.size;i++){
    printf("%d ",s.data[i]);
   }
   printf("\n");
}
int top(Stack s){
    return s.data[--s.size];
}
int main(){
    Stack s;
    s.size=0;
    push(&s,10);
    push(&s,20);
    push(&s,30);
    push(&s,40);
    push(&s,50);
    PrintStack(s);
    printf("top is: %d\n",top(s));
    pop(&s);
    pop(&s);
    pop(&s);
    PrintStack(s);
    printf("top is: %d",top(s));
}
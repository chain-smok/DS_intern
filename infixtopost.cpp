//優先權大的字符會壓在上面
#include <stdio.h>
#include <ctype.h>
char Stack[100];
int top=-1;

void push(char x){
    Stack[++top]=x;
}
char Pop(){
    if(top==-1){
        return -1;
    }
    else{
        return Stack[top--];
    }
}
int Priority(char x){
    if(x=='('){
        return 0;
    }
    if(x=='+'||x=='-'){
        return 1;
    }
    if(x=='*'||x=='/'){
        return 2;
    }
}
int main(){
    char exp[100];
    char *e,x;
    printf("Enter the exp: ");
    scanf("%s",exp);
    e=exp;
    while(*e!='\0'){
        if(isalnum(*e)){
            printf("%c",*e);
        }
        else if(*e=='('){
            push(*e);
        }
        else if(*e==')'){
            while((x=Pop())!='('){
                printf("%c",x);
            }
        }
        else if(Stack[top]=='+'||Stack[top]=='-'||Stack[top]=='*'||Stack[top]=='/'||Stack[top]=='('){
            while(Priority(Stack[top])>=Priority(*e)){
              printf("%c",Pop());
            }
           push(*e);
        }
        else{
            push(*e);
        }
        e++;
    }
    while(top!=-1){
      printf("%c",Pop());
    }
}
#include <stdio.h>
#include <stdlib.h>
int top=-1;
int Stack[5];

int isEmpty(){
    return top==-1;
}

int isFull(){
    return top==5-1;
}

void push(int value){
    if(isFull()){
        printf("Stack is Full");
    }
    else {
        Stack[++top]=value;
        printf("%d is in the stack",value);
    }
}

int pop(){
    if(isEmpty()){
        printf("Stack is Empty");
        return -1;
    }
    else {
        return Stack[top--];
    }
}

void display(){
    if(isEmpty()){
        printf("Empty Stack");
    }
    else{
        printf("Stack elements: ");
        for(int i=0;i<=top; i++){
            printf("%d \t",Stack[i]);
        }
    }
}

int main() {
    int value, choice;
    
    while(1){
        printf("\n1. push\n2. pop\n3. display \n4. exit\nEnter Your Choice: ");
        scanf("%d",&choice);
        
        
        switch(choice){
            case 1:
            printf("Enter the value : ");
            scanf("%d",&value);
            push(value);
            break;
            
            case 2:
            value=pop();
            if(value !=-1){
                printf("\n %d is has been removed from stack",value);
            }
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            exit(0);
            break;
            
            default:
            printf("Invalid Choice");
        }
    }
    return 0;
}

#include <stdio.h>

int Queue[5];
int front , rear =-1 ;

int isFull(){
    return rear==5-1 && front!=-1;
}

int isEmpty(){
    return front==-1;
}

void enqueue(int value){
    if(isFull()){
        printf("Element can't be inserted");
        return;
    }
    
    if(front==-1){
        front=0;
    }
    
        Queue[++rear]=value;
        printf("%d Enqueued\n", value);
    
}

void dequeue(){
    if(isEmpty()){
        printf("Element can't be deleted");
    }
    else{
        int value=Queue[front++];
        printf("%d Dequeued", value);
    }
    if(front>rear){
        front = rear=-1;
    }
}

void display(){
    if(isEmpty()){
        printf("No element is present in the Queue");
    }
    else{
        printf("Queue Elements: ");
        for(int i=front; i<=rear; i++){
            printf("\n%d",Queue[i]);
        }
        printf("\n");
    }
}


int main() {
    
    int value, choice;
    
    while(1){
        printf("\n");
        printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit\nEnter Your Choice: ");
        scanf("%d",&choice);
        
        switch(choice){
            case 1:
            printf("Enter the Element: ");
            scanf("%d",&value);
            enqueue(value);
            break;
            
            case 2:
            dequeue();
            break;
            
            case 3:
            display();
            break;
            
            case 4:
            printf("Exiting the Program");
            exit(0);
            break;
        }
    }

    return 0;
}
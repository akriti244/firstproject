#define maxsize 5
#include<stdlib.h>
int front=-1;
int rear=-1;
int queue(maxsize);
 void push(int item){
    if(rear==maxsize-1)
    printf("\nOVERFLOW");
    if (front==-1 && rear==-1){
        front=front+1;
        rear=rear+1;
        queue[rear]=item;
    }
    else{
        rear=rear+1;
        queue[rear]=item;
    }

 }

 int pop(){
    int temp;
    if(front==-1);
    else if(front==rear){
        temp=queue[rear];
        front =-1;
        rear=-1;
        return temp;
    }
    else{
        temp=queue[front];
        front=front+1;
        return temp;
    }
 }
 void display(){
    int i;
    for(i=front;i<=rear;i++)
    printf("\np%d",queue[i]);
 }
 void main(){
    int i;
    clrscr();
    do{
        clrscr();
        printf("\nsimulation");
        randomize();
        for (i=0;i<5;i++)
        pudh(random(100));
        printf("displaying");
        display();
        printf("\n SEQUENCE");
        for(i=0;i<5;i++)
        printf("\np%d is excuted",pop());
        front=rear+1;
        delay(450);

    }while(!kbhit);
 }
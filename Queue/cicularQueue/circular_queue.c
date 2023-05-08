#include<stdio.h>
#include<conio.h>

struct CircularQueue{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct CircularQueue *q){
    if(((q->r+1)%q->size)==q->f){
        return 1;
    }
    return 0;
}

void enQueue(struct CircularQueue *q,int val){
    if(isFull(q)){
        printf("Queue is full\n");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
    }
}

int deQueue(struct CircularQueue *q){
    int val=-1;
    if(isEmpty(q)){
        printf("Queue is empty\n");
    }
    else{
        q->f=(q->f+1)%q->size;
        val=q->arr[q->f];
    }
    return val;
}

int isEmpty(struct CircularQueue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
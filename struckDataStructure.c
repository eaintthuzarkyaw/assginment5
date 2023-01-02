//
// Created by nori9 on 12/31/2022.
//

#include "stdio.h"
#include "stdlib.h"

#define MAXOFSTACK 10

int toCount = 0;

struct stack{

    int data[MAXOFSTACK];

    int top;
};

typedef struct stack st;

int isStackIsFull(st *myStack){

    if(myStack->top == MAXOFSTACK-1){

        return 1;

    }else{

        return 0;

    }

}

void create_emptyStack(st *myStack){

    myStack->top = -1;

}

int pushToStack(st *myStack, int value){

    if(isStackIsFull(myStack)){

        printf("Stack is full!");

    }else{

        myStack->top++;

        myStack->data[myStack->top] = value;

        printf("Data in stack : %d\n",myStack->data[myStack->top]);


    }

    toCount++;

}


int isStackIsEmpty(st *myStack){

    if(myStack->top == -1){

        return 1;

    }else{

        return 0;
    }
}

void popFromStack(st *myStack){

    if(isStackIsEmpty(myStack)){

        printf("Stack is Empty!");

    }else{

        printf("pop from stack data : %d\n",myStack->data[myStack->top]);

        myStack->top--;

    }

    toCount--;
}


int main(){

    st *myStack = (st*)malloc(sizeof (st));

    create_emptyStack(myStack);

    pushToStack(myStack,10);
    printf("index at : %d\n",myStack->top);

    pushToStack(myStack,20);
    printf("index at : %d\n",myStack->top);

    pushToStack(myStack,12);
    printf("index at : %d\n",myStack->top);

    pushToStack(myStack,8);
    printf("index at : %d\n",myStack->top);

    pushToStack(myStack,4);
    printf("index at : %d\n",myStack->top);

    pushToStack(myStack,45);
    printf("index at : %d\n",myStack->top);

    printf("Total count in stack :  %d\n",toCount);


    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);
    popFromStack(myStack);


    return 0;
}
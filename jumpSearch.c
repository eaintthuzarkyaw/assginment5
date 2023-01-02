//
// Created by nori9 on 1/2/2023.
//

#include "stdio.h"

int min(int first, int second){

    if(second > first){
        return first;
    }else{
        return second;
    }

}

int jumpSearch(int arr[], int size, int key){

    int step = size/2;

    printf("start step : %d\n",step);

    int previous = 0;

    while(arr[min(step,size)-1] < key){

        previous = step;

        step = step + size/2;

        printf("we found after step : %d\n",step);

        if(previous >= size){
            return -1;
        }

    }

    for(int j=previous; j<step; j++){

        if(arr[j] == key){
            return j;
        }

    }

    return -1;

}

int main(){


    int arr[] = {1,2,3,4,5,6,7,8,9,100,200,300,300,33,400,600,700};

    int toFind = 100;

    int size = sizeof (arr)/sizeof (arr[0]);

    printf("size of arr : %d\n",size);


    int indexNumber = jumpSearch(arr,size,toFind);

    if(indexNumber != -1){

        printf("data : %d\nindex at : %d\n",arr[indexNumber],indexNumber);

    } else{
        printf("not found");
    }

    return 0;
}

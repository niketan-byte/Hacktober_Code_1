#include <iostream>
#include <cstdio>

using namespace std;

void enqueue(char queue[], char element, int& rear, int arraySize) {
    if(rear == arraySize)            // Queue is Full
        printf("OverFlow\n");
    else {
        queue[rear] = element;    // Add the element to the back
        rear++;
    }
}


void dequeue(char queue[], int& front, int rear) {
    if(front == -1||front>rear)            // Queue is empty
        printf("UnderFlow\n");
    else {
        queue[front] ;        // Delete the front element
        front++;
    }
}

char Front(char queue[], int front) {
    return queue[front];
}


int main() {
    char queue[20] = {'a', 'b', 'c', 'd'};        
    int front = 0, rear = 4;                
    int arraySize = 20;                // Size of the array
    int N = 3;                    // Number of steps
    char ch;
    for(int i = 0;i < N;++i) {
         ch=Front(queue, front);
        enqueue(queue, ch, rear, arraySize);
        dequeue(queue, front, rear);
    }
    for(int i = front;i <= rear;++i)
        printf("%c", queue[i]);
    printf("\n");
}

#include <stdio.h>
#define SIZE 5

int items[SIZE], front = -1, rear = -1;

int isFull() { return (rear + 1) % SIZE == front; }
int isEmpty() { return front == -1; }

void enqueue(int value) {
    if (isFull()) { printf("Queue Full!\n"); return; }
    if (isEmpty()) front = 0;
    rear = (rear + 1) % SIZE;
    items[rear] = value;
}

int dequeue() {
    if (isEmpty()) { printf("Queue Empty!\n"); return -1; }
    int data = items[front];
    if (front == rear) front = rear = -1;
    else front = (front + 1) % SIZE;
    return data;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Deleted: %d\n", dequeue());

    return 0;
}
#include <stdio.h>
#define CAPACITY 100

int queue[CAPACITY];
int front = -1, rear = -1;

void enqueue(int data) {
    if (rear == CAPACITY - 1) {
        printf("Error: Queue Overflow!\n");
        return;
    }
    if (front == -1) front = 0;
    rear++;
    queue[rear] = data;
    printf("Successfully Enqueued: %d\n", data);
}

int dequeue() {
    if (front == -1 || front > rear) {
        printf("Error: Queue Underflow!\n");
        return -1;
    }
    int val = queue[front];
    front++;
    if (front > rear) { front = -1; rear = -1; }
    return val;
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    printf("Dequeued: %d\n", dequeue());

    return 0;
}

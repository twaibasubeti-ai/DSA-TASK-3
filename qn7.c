#include <stdio.h>
#define MAX 5

int deque[MAX], front = -1, rear = -1;

void insertFront(int val) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) { printf("Deque Full!\n"); return; }
    if (front == -1) { front = 0; rear = 0; }
    else if (front == 0) front = MAX - 1;
    else front--;
    deque[front] = val;
}

void insertRear(int val) {
    if ((front == 0 && rear == MAX - 1) || (front == rear + 1)) { printf("Deque Full!\n"); return; }
    if (front == -1) { front = 0; rear = 0; }
    else if (rear == MAX - 1) rear = 0;
    else rear++;
    deque[rear] = val;
}

int deleteFront() {
    if (front == -1) { printf("Deque Empty!\n"); return -1; }
    int val = deque[front];
    if (front == rear) { front = -1; rear = -1; }
    else if (front == MAX - 1) front = 0;
    else front++;
    return val;
}

int deleteRear() {
    if (front == -1) { printf("Deque Empty!\n"); return -1; }
    int val = deque[rear];
    if (front == rear) { front = -1; rear = -1; }
    else if (rear == 0) rear = MAX - 1;
    else rear--;
    return val;
}
int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);

    printf("Deleted from front: %d\n", deleteFront());
    printf("Deleted from rear: %d\n", deleteRear());

    return 0;
}
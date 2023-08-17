#include <stdio.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

void push(int value) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack overflow!\n");
        return;
    }
    stack[++top] = value;
}

int pop() {
    if (top == -1) {
        printf("Stack underflow!\n");
        return -1; // You might want to handle underflow differently
    }
    return stack[top--];
}

int peek() {
    if (top == -1) {
        printf("Stack is empty!\n");
        return -1; // Or handle this case differently
    }
    return stack[top];
}

int main() {
    push(10);
    push(20);
    push(30);

    printf("Top element: %d\n", peek()); // Should print 30

    pop();

    printf("Top element after pop: %d\n", peek()); // Should print 20

    return 0;
}

#include <stdio.h>
#define MAX_SIZE 5

int stack[MAX_SIZE];
int top = -1;  // Initialize stack top as -1

int isEmpty() {
    return top == -1;
}

int isFull() {
    return top == MAX_SIZE - 1;
}

void push(int item) {
    if (isFull()) {
        printf("Stack overflow!\n");
    } else {
        stack[++top] = item;
    }
}

int pop() {
    if (isEmpty()) {
        printf("Stack underflow!\n");
        return -1;  // You can choose a different error code
    } else {
        return stack[top--];
    }
}

int peek() {
    if (isEmpty()) {
        printf("Stack is empty!\n");
        return -1;  // You can choose a different error code
    } else {
        return stack[top];
    }
}

void deleteStack() {
    top = -1; // Reset top to indicate an empty stack
}

int main() {
    push(10);
    push(20);
    push(30);
    push(20);
    push(30);
    push(30);

    printf("Top item: %d\n", peek()); // Should print 30

    printf("Popped item: %d\n", pop()); // Should print 30
    printf("Popped item: %d\n", pop()); // Should print 20

    deleteStack(); // Clears the stack

    if (isEmpty()) {
        printf("Stack is empty now.\n");
    } else {
        printf("Stack is not empty.\n");
    }

    return 0;
}

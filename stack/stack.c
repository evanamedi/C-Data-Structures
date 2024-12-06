#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

Stack* createStack(int capacity) {
	Stack *stack = (Stack *)malloc(sizeof(Stack));
	if (!stack) {
		printf("Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	stack->data = (int *)malloc(capacity * sizeof(int));
	if (!stack->data) {
		printf("Memory allocation failed\n");
		free(stack);
		exit(EXIT_FAILURE);
	}
	stack->top = -1;
	stack->capacity = capacity;
	return stack;
}

// add an element to the stack
void push(Stack *stack, int value) {
	if (isStackFull(stack)) {
		printf("Stack overflow\n");
		return;
	}
	stack->data[++stack->top] = value;
}

// remove and return the top element in the stack
int pop(Stack *stack) {
	if (isStackEmpty(stack)) {
		printf("Stack underflow\n");
		return -1;
	}
	return stack->data[stack->top--];
}

// return the top element without removing it
int peek(Stack *stack) {
	if (isStackEmpty(stack)) {
		printf("Stack is empty\n");
		return -1;
	}
	return stack->data[stack->top];
}

// check if stack is empty
bool isStackEmpty(Stack *stack) {
	return stack->top == -1;
}

// check if stack is full
bool isStackFull(Stack *stack) {
	return stack->top == stack->capacity - 1;
}

// delete the stack and free allocated memory
void deleteStack(Stack *stack) {
	if (stack) {
		free(stack->data);
		free(stack);
	}
}

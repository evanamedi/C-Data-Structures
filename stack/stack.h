#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

typedef struct {
	int *data; // pointer to stack data arrray
	int top; // index of top element
	int capacity; // max capacity of the stack
} Stack;

// function prototypes
Stack* createStack(int capacity);
void push(Stack *stack, int value);
int pop(Stack *stack);
int peek(Stack * stack);
bool isStackEmpty(Stack *stack);
bool isStackFull(Stack *stack);
void deleteStack(Stack *stack);

#endif // STACK_H

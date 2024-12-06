#include <stdio.h>
#include "stack.h"

int main(void) {
	Stack *stack = createStack(5);

	push(stack, 10);
	push(stack, 20);
	push(stack, 30);

	printf("Top element is: %d\n", peek(stack));

	printf("Popped element: %d\n", pop(stack));
	printf("Popped element: %d\n", pop(stack));
	printf("Popped element: %d\n", pop(stack));

	if (isStackEmpty(stack)) {
		printf("Stack is empty now\n");
	}

	deleteStack(stack);

	return 0;
}

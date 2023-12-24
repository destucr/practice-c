#include <stdio.h>
#include <stdlib.h>

#define LIMIT 1000

// top of stack 
int top = -1;

// array dengan size sebesar LIMIT
int stack[LIMIT];

// functions
void push(){
  if (top == LIMIT - 1){
    printf("overflow state");
  }else {
    int numInsert;
    printf("Add number: ");
    scanf("%d", &numInsert);
    top+=1;
    stack[top]= numInsert;
  }
}

int pop(){
  // Checking underflow state
  if(top == -1)
    printf("Underflow State: Stack already empty, can't remove any element\n");
  else{
    int x = stack[top];
    printf("Popping %d out of the stack\n", x);
    stack[top] = 0;
    top-=1;

    return x;
  }
  return -1;
}

int peek(){
    int x = stack[top];
    printf("%d is the top most element of the stack\n", x);
    printf("array value: %d %d %d", stack[0], stack[1], stack[2]);

    return x;
}

int main(){
  printf("STATIC ARRAY (Total Capacity: %d)\n", LIMIT);
  int choice;

  while(1){
    
    printf("\nChoose any of the following options:\n");
    printf(" 0: Exit\n 1: Push\n 2: Pop\n 3: Peek\n");
    printf(" 4: Check if the stack is empty\n 5: Check if the stack is full\n\n");
    scanf("%d", &choice);

    switch(choice){
      case 0: exit(0);
      case 1: push(); break;
      case 2: pop(); break;
      case 3: peek(); break;
      default: printf("Please choose a correct option!");
    }
  }
  return 0;
}

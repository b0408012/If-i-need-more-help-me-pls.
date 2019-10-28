#include <iostream>
#include <stdlib.h>
using namespace std;

class stack {
	int top;
	int *content_;

	int(* pop)(struct stack *);
	void(* push)(stack *, int);
} stack;

int pop(stack *deck){
	return deck->content_[deck->top];
}
void push(stack *deck->top ++)=i;
{ 
stack *new_stack(int capacity){
	stacl *deck =(int*)malloc(capacity*sizeof(int));
	deck->top=0;
	deck->content_=(int *)malloc(capacity * sizeof(int));
	deck->pop;
	deck->push;
	
	return deck;
}

void dump(stack *deck){
	prinf("∞Ô≈|: [");
	
	for( int i=0;i<deck->top;i++){
		printf("%d",deck->content_[i]);
	}
}		
	prinf("]",deck->content_[i]);
	}
	void main(int argc,char**argv){
	}


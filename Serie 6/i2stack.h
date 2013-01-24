/* AP 26-sep-12	i2stack.h				*/
/*		ein Integer-Stack			*/
/*		Fehlerbehandlung in Stack-Struktur	*/
/*		Datenkapselung / ADT 			*/

# ifndef __i2stack_h
# define __i2stack_h

enum errorT { OK, NOT_INITIALIZED, EMPTY, NO_MEMORY };

typedef struct _stack* Stack;

void push( Stack, int );
int pop( Stack );
int top( Stack );
void swap( Stack );

Stack allocStack();
void freeStack( Stack );

void print_error( Stack s ); 
enum errorT lastError( Stack s );

# endif

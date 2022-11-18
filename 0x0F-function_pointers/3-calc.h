#ifndef _HEADER_
#define _HEADER_

/**
 * struct op - struct operator
 * @op: operator
 * @f: function used
 */
typedef struct op
{
	char *op;
	int (*f)(int x, int y);
} op_t;

int op_add(int x, int y);
int op_sub(int x, int y);
int op_mul(int x, int y);
int op_div(int x, int y);
int op_mod(int x, int y);
int (*get_op_func(char *s))(int, int);

#endif

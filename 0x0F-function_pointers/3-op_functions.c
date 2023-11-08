#include "3-calc.h"

int op_add(int i, int j);
int op_sub(int i, int j);
int op_mul(int i, int j);
int op_div(int i, int j);
int op_mod(int i, int j);

/**
 * op_add - Returns the sum of two numbrs.
 * @i: The first numbr.
 * @j: The second numbr.
 *
 * Return: The sum of i and j.
 */
int op_add(int i, int j)
{
	return (i + j);
}
/**
 * op_sub - Returns the difference of two numbrs.
 * @i: The first numbr.
 * @j: The second numbr.
 *
 * Return: The difference of i and j.
 */
int op_sub(int i, int j)
{
	return (i - j);
}
/**
 * op_mul - Returns the product of two numbrs.
 * @i: The first numbr.
 * @j: The second numbr.
 *
 * Return: The product of i and j.
 */
int op_mul(int i, int j)
{
	return (i * j);
}
/**
 * op_div - Returns the division of two numbrs.
 * @i: The first numbr.
 * @j: The second numbr.
 *
 * Return: The quotient of  and j.
 */
int op_div(int i, int j)
{
	return (i / j);
}
/**
 * op_mod - Returns the remainder of the division of two numbers.
 * @i: The first numbr.
 * @j: The second numbr.
 *
 * Return: The remainder of the division of a by j.
 */
int op_mod(int i, int j)
{
	return (i % j);
}



/**
 * print_name - prints a name
 * @name: pointer to a name
 * @f: pointer to finction
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

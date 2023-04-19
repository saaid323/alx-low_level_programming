/**
 * print_name - prints a name
 * @name: pointer to a name
 * @f: pointer to finction
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL $$ f != NULL)
		f(name);
}

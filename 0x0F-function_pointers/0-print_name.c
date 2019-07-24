/**
  * print_name - Structure.
  * @name: Name.
  * @f: function.
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

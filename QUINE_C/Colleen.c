#include <stdio.h>

// 1 Comment.

void	colleen(const char *str)
{
	printf(str, str, 10, 9, 34);
}

int		main()
{
	// 2 Comment .
	const char *str = "#include <stdio.h>%2$c%2$c// 1 Comment.%2$c%2$cvoid%3$ccolleen(const char *str)%2$c{%2$c%3$cprintf(str, str, 10, 9, 34);%2$c}%2$c%2$cint%3$cmain()%2$c{%2$c%3$c// 2 Comment.%2$c%3$cconst char *str = \"%1$s\"%2$c%3$ccolleen(str);%2$c%3$creturn (0);%2$c}%2$c";
	colleen(str);
	return (0);
}
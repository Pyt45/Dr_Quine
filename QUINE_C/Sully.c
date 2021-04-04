#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <string.h>
/*
* Comment *
*/
#define EXEC_CMD "/usr/bin/cc -Wall -Wextra -Werror -I /usr/include -o Sully_%d Sully_%d.c && ./Sully_%d"
#define SULLY_FILE "Sully_%d.c"
#define FMT "#include <stdio.h>%2$c#include <unistd.h>%2$c#include <fcntl.h>%2$c#include <stdlib.h>%2$c#include <string.h>%2$c/*%2$c* Comment *%2$c*/%2$c#define EXEC_CMD %4$c/usr/bin/cc -Wall -Wextra -Werror -I /usr/include -o Sully_%%d Sully_%%d.c && ./Sully_%%d%4$c%2$c#define SULLY_FILE %4$cSully_%%d.c%4$c%2$c#define FMT %4$c%1$s%4$c%2$c%2$cint%3$c%3$cmain(void)%2$c{%2$c%3$cint%3$c%3$ci;%2$c%3$cint%3$c%3$cfd;%2$c%3$cchar%3$c*src_file;%2$c%3$cchar%3$c*exec_cmd;%2$c%2$c%3$ci = %5$d;%2$c%3$cif (i > 0)%2$c%3$c{%2$c%3$c%3$cif (strchr(__FILE__, '_'))%2$c%3$c%3$c%3$ci--;%2$c%3$c%3$csrc_file = NULL;%2$c%3$c%3$c(void)asprintf(&src_file, SULLY_FILE, i);%2$c%3$c%3$cfd = open(src_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);%2$c%3$c%3$cif (fd > 0)%2$c%3$c%3$c{%2$c%3$c%3$c%3$cexec_cmd = NULL;%2$c%3$c%3$c%3$c(void)asprintf(&exec_cmd, EXEC_CMD, i, i, i);%2$c%3$c%3$c%3$cdprintf(fd, FMT, FMT, 10, 9, 34, i);%2$c%3$c%3$c%3$csystem(exec_cmd);%2$c%3$c%3$c%3$cfree(exec_cmd);%2$c%3$c%3$c}%2$c%3$c%3$cfree(src_file);%2$c%3$c}%2$c%3$creturn (0);%2$c}"

int		main(void)
{
	int		i;
	int		fd;
	char	*src_file;
	char	*exec_cmd;

	i = 5;
	if (i > 0)
	{
		if (strchr(__FILE__, '_'))
			i--;
		src_file = NULL;
		(void)asprintf(&src_file, SULLY_FILE, i);
		fd = open(src_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
		if (fd > 0)
		{
			exec_cmd = NULL;
			(void)asprintf(&exec_cmd, EXEC_CMD, i, i, i);
			dprintf(fd, FMT, FMT, 10, 9, 34, i);
			system(exec_cmd);
			free(exec_cmd);
		}
		free(src_file);
	}
	return (0);
}
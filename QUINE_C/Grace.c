#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

/*
* Comment *
*/

#define FMT "#include <stdio.h>%2$c#include <unistd.h>%2$c#include <fcntl.h>%2$c%2$c/*%2$c* Comment *%2$c*/%2$c%2$c#define FMT %4$c%1$s%4$c%2$c#define GRACE_KID(fd, fmt) dprintf(fd, fmt, fmt, 10, 9, 34)%2$c#define GRACE_PROGRAM(fmt) int main(void){ int fd = open(%4$cGrace_kid.c%4$c, O_WRONLY | O_CREAT, 0664); if (fd < 0) { return (-1); } else GRACE_KID(fd, fmt); close(fd); return (0); }%2$c%2$cGRACE_PROGRAM(FMT)"
#define GRACE_KID(fd, fmt) dprintf(fd, fmt, fmt, 10, 9, 34)
#define GRACE_PROGRAM(fmt) int main(void){ int fd = open("Grace_kid.c", O_WRONLY | O_CREAT, 0664); if (fd < 0) { return (-1); } else GRACE_KID(fd, fmt); close(fd); return (0); }

GRACE_PROGRAM(FMT)
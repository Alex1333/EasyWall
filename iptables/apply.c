#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(void)
{
	setuid(0);
	setgid(0);

	/* WARNING: Only use an absolute path to the script to execute,
	*          a malicious user might fool the binary and execute
	*          arbitary commands if not.
	* */

	system("/bin/bash ../iptables/apply.sh");

	return 0;
}

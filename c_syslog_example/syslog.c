#include <stdio.h>
#include <unistd.h>
#include <syslog.h>

// /var/log/syslog

int main()
{
	setlogmask (LOG_UPTO (LOG_NOTICE));
	openlog("Logs", LOG_PID, LOG_USER);
	syslog(LOG_INFO, "Start logging C Example!");
	closelog();
}
#include <stdio.h>
#include <signal.h>
#include <sys/time.h>
#include <iostream>
#include <string>

using namespace std;

void handler(int signo)
{
	cout << "timer tick" << endl;
}


int main(void)
{
	struct itimerval tval {0};

	tval.it_value.tv_sec = 2;
	tval.it_interval.tv_sec = 1;

	(void) signal(SIGALRM, handler);
	(void) setitimer(ITIMER_REAL, & tval, NULL);

	cin.get();
	cout << "end"<< endl;
	(void) setitimer(ITIMER_REAL, NULL, NULL);

	exit(0);
}

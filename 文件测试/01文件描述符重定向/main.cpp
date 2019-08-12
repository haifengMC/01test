#include <iostream>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>

using namespace std;

int main()
{
	int nullFd = open("/dev/null", O_RDWR);
	if (-1 == nullFd)
		cout << "nullFd open is failed..." << endl;
	cout << nullFd << endl;
	dup2(nullFd, STDOUT_FILENO);
	close(nullFd);
	//close(STDOUT_FILENO);

	

	return write(STDOUT_FILENO, "abc\n", 4);
}

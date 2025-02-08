#include <unistd.h>
#include <sys/syscall.h>

int main() {
        const int messageLength = 13;
        const char* message = "Hello world!\n";

        syscall(SYS_write, 0, message, messageLength);

        // '0' - code to output message to console

        return 0;
}
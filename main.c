#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char *buffer;
    int size;

    file = fopen("/sys/class/rtc/rtc0/date", "r");

    if (file == NULL) {
        printf("error : could not find rtc\n");
        exit(-1);
    }
    
    getline(&buffer, &size, f);
    if (buffer == NULL) {
        printf("error : couldn't alloc memory\n");
        exit(-1);
    }

    printf("%s", buffer);
    free(buffer);
    
    return 0;
}

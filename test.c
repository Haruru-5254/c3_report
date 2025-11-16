#include <stdio.h>
#include <time.h>

int main(){
    time_t now = time(NULL);
    struct tm *p = localtime(&now);

    printf("現在時刻: %d/%d/%d %d:%d:%d\n",
           p->tm_year + 1900,
           p->tm_mon + 1,
           p->tm_mday,
           p->tm_hour,
           p->tm_min,
           p->tm_sec);

    return 0;
}

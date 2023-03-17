#include <stdio.h>
#include <string.h>

int main(void)
{
    struct sigrecord
    {
        int signum;
        char signame[20];
        char sigdesc[100];
    } sigline, *sigline_p;

    sigline.signum = 5;
    strcpy(sigline.signame, "SIGINT");
    strcpy(sigline.sigdesc, "Interrupt from keyboard");
    sigline_p = &sigline;
    sigline_p->signum = 5;
    strcpy(sigline_p->signame, "SIGINT");
    strcpy(sigline_p->sigdesc, "Interrupt from keyboard");

    return 0;
}
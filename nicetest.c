#include "types.h"
#include "user.h"
#include "stat.h"

int main ()
{
    printf(1, "\ntest ps(0)\n");
    ps(0);
    printf(1, "\n");

    int i;
    printf(1,"\ngetnice test\n");
    for(i=-1;i<6;i++){
        printf(1,"\tgetnice(%d) \treturn: %d\n", i, getnice(i));
    }
    printf(1,"\tgetnice(%d) \treturn: %d\n", 1000, getnice(1000));

    printf(1,"\nsetnice test\n");
    for(i=-1;i<6;i++){
        printf(1,"\tgetnice(%d) \treturn: %d\n", i, getnice(i));
        printf(1,"\tsetnice(%d,15) \treturn: %d\n", i, setnice(i, 15));
        printf(1,"\tgetnice(%d) \treturn: %d\n", i, getnice(i));
        printf(1, "\n");
    }
    printf(1,"\tgetnice(%d) \treturn: %d\n", 1000, getnice(1000));
    printf(1,"\tsetnice(%d,15) \treturn: %d\n", 1000, setnice(1000, 15));
    printf(1,"\tgetnice(%d) \treturn: %d\n", 1000, getnice(1000));
    printf(1, "\n");

    printf(1, "\nps(0) again\n");
    ps(0);
    printf(1, "\n");

    printf(1, "\ncheck all ps by ps(0) %d:\n");
    ps(0);

    printf(1,"\nps testn");

    for(i=-1;i<6;i++){
        printf(1,"\nps(%d)\n", i);
        ps(i);
        printf(1, "\n");
    }
    exit();
}
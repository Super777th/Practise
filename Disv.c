#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define LENGTH 12
int main () {
    char* username, *nlptr;
    int allow = 0;
    char* grantAccess(char *);
    void privilegedAction(void);


    username = malloc(LENGTH * sizeof(*username));
    if (!username)
        return EXIT_FAILURE;
    printf("Enter your username, please: ");
    fgets(username,LENGTH, stdin);
    /*fgets stops after LENGTH-1 characters or at a newline character, which ever comes first.
     but it considers \n a valid character, so you might want to remove it:*/
    nlptr = strchr(username, '\n');
    if (nlptr) *nlptr = '\0';

    if (grantAccess(username)) {
        allow = 1;
    }
    if (allow != 0)
    {
        privilegedAction();
    }

    free(username);

    return 0;
}
char * grantAccess(char *u)
{
    return u;
}
void privilegedAction()
{
    printf("You have been granted access");
}

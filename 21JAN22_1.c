#include <stdio.h>
int main ()
 {
    char * grantAccess(char *u);
    void privilegedAction();
    char username[8];
    int allow = 0;
    printf("Enter your username, please: ");
    gets(username); /* user inputs "malicious"*/
    if (grantAccess(username)) {
        allow = 1;
    }
    if (allow != 0) { /* has been overwritten by the overflow of the username.*/
        privilegedAction();
    }
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

//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum Role { ADMIN, USER, GUEST };

int main() {
    enum Role r = USER;
    if (r == ADMIN)
        printf("Admin: Full access\n");
    else if (r == USER)
        printf("User: Limited access\n");
    else
        printf("Guest: Visitor access\n");
    return 0;
}

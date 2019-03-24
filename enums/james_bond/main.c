#include <stdio.h>

//create a enum type security levels
/* explained at
https://www.cs.utah.edu/~germain/PPS/Topics/C_Language/enumerated_types.html
*/
enum security_levels
{
    black_ops,
    top_secret,
    secret,
    unauthorized
};

int open_safe();
int open_door();
int mission();
int call_police();

int main()
{
    enum security_levels my_security_level = top_secret;

    if (my_security_level == black_ops) {
        printf("Welcome Mr. James Bond \n");
        printf("Your security clearance is %s\n", "black_ops");
        open_safe();
        mission();
        open_door();

    }
    else if (my_security_level == top_secret) {
        printf("Welcome Q \n");
        printf("Your security clearance is %s\n", "top_secret");
        open_door();
    }
    else if (my_security_level == secret) {
        printf("Your security clearance is %s\n", "secret");
        printf("Please leave now\n");

    }
    else if (my_security_level == unauthorized) {
        printf("Your security clearance is %s\n", "unauthorized");
        printf("Warning, The Police have been Called\n");
        printf("Surrender yourself to them immediately!\n");
        call_police();
    }

    return 0;
}

int open_safe() {
    printf("Dafe is opened\n");
    return 0;
}

int mission() {
    printf("Retrieve the mission \n");
    return 0;
}
int open_door() {
    printf("You opened the Door \n");
    return 0;
}

int call_police() {
    printf("Dial 911 \n");
    return 0;
}
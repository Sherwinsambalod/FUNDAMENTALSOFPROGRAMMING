#include <stdio.h>

int main() {
    int pass;
    
    printf("Enter password ( type -1 to stop): ");
    scanf("%d", &pass);
    
    while(pass != 1234 && pass != -1) {
        printf("Wrong password! Try again:");
        scanf("%d", &pass);
    }
    
    if(pass == 1234)
       printf("Access granted!\n");
    else
       printf("Program stopped.\n");
       
       return 0;
}


#include<stdio.h>
#include<time.h>
enum Switch{
    ON=1,
    OFF=2
};
int main(){
    enum Switch option=OFF;
    printf("Waiting for 5 seconds...\n");
    sleep(5);
    option = ON;
    if (option == ON) {
        printf("The switch is currently ON.\n");
    } else if (option == OFF) {
        printf("The switch is currently OFF.\n");
    } else {
        printf("Invalid switch position.\n");
    }
    return 0;
}

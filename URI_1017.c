#include <stdio.h>

int main(){
    int time = 0;
    int avgspeed = 0;
    double liters = 0.0;
    printf("Type in time (hours) then avg. speed (km/h): ");
    scanf("%d", &time);
    scanf("%d", &avgspeed);
    liters = (time*avgspeed)/12;
    printf("You would need %.03f liters", liters);
    return 0;
}

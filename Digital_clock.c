#include<stdio.h>
#include<windows.h>
int main(){
    int seconds , minutes , hours;
    int d = 1000;
    printf("Set time: \n");
    printf("Enter a hours \n");
    scanf("%d",&hours);
    printf("Enter a minutes \n");
    scanf("%d",&minutes);
    printf("Enter a seconds \n");
    scanf("%d",&seconds);
    if(hours > 12 || minutes > 60 || seconds > 60){
        printf("Error ffff2xxx");
        exit(0);
    }
    while(1){
        seconds++ ;
        if(seconds>59){
            minutes++;
            seconds = 0;
        }
        if(minutes>59){
            hours++;
            minutes = 0;
        }
        if(hours>59){
            hours = 1;
        }
        printf("clock : \n");
        printf("%02d:%02d:%02d", hours , minutes , seconds);
        Sleep(d);
        system("cls");

    }
    return 0;
    
}
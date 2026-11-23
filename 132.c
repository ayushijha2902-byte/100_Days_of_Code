#include <stdio.h>
enum lights{
    GREEN,
    YELLOW,
    RED,
};
int main(){
    enum lights light;
    light = GREEN;
    switch(light){
    case GREEN:
        printf("Go");
        break;
    case RED:
        printf("Stop");
        break;
    case YELLOW:
    printf("Wait");
    break;
    }
    return 0;
}
#include<stdio.h>
typedef int km_per_hour;
typedef int points;
typedef void noReturn;
noReturn congratulation(points high_score){
    printf("Yes,you are the winner:%d",high_score);

}
int main(){
    km_per_hour current_speed = 10;
    points high_score = 30;
    congratulation(high_score);
}

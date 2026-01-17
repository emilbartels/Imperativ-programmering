/*
Write a function that computes the time one must leave in order to reach a
certain destination by a designated time. You need to deal only with arrivals
occurring later in the same day as the departure. Function inputs include the
arrival time as an integer on a 24-hour clock (8:30 p.m. = 2030), the distance to
the destination in kilometers, and the speed you plan to average in km/hr. The
function result should be the required departure time (rounded to the nearest
minute) as an integer on a 24-hour clock. Also, write a driver program to test
your function.
*/

#include <stdio.h>

int main(void){

    int arrival_time, km_distance, avg_speed;
    int time_driving, departure_time;

    //Scan the arrival time
    printf("Input the time you want to arrive in 24-hour clock (8:30 p.m = 2030): ");
    scanf(" %d", &arrival_time);

    //Scan distance to destination in km,
    printf("Input the distance to the destination in km: ");
    scanf(" %d", &km_distance);

    //Scan the speed you plan to avg in km/hr,
    printf("Input the average speed in km/hr: ");
    scanf(" %d", &avg_speed);

    
    time_driving = (km_distance / avg_speed) * 100;
    //lav det om til timer som er 60 lang i stedet for 100 lang.
    //En time kan kun komme til 20:59 men det er en int så den kan godt komme til 20:99
    departure_time = arrival_time - time_driving;
    printf("You will have to leave by %d in order to make it %d km before %d\n", departure_time, km_distance, arrival_time);

    return 0;
}
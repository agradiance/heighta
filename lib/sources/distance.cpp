#include "../headers/distance.h";

double Distance::x_distance = 0;
double Distance::y_distance = 0;

double Distance::getDistanceInMeters(double distance){
    return distance/100;
}
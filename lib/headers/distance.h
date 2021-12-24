#include <Arduino.h>

class Distance {
    public:

    static double x(){
        return x_distance;
    }

    static double y(){
        return y_distance;
    }

//  private:
    static double x_distance;
    static double y_distance;

    double getDistanceInMeters(double distance);
    void setDistance(double& distance){

    }


};
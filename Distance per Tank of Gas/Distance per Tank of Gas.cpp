// Distance per Tank of Gas.cpp : A program to calculate gas comsumption comparing town vs highway

#include <iostream>
using namespace std;

int main()
{
    // set variables
    float tank = 20, mpgTown = 23.5, mpgHighway = 28.9;


    // calculate distance
    float distanceTown = tank * mpgTown;
    float distanceHighway = tank * mpgHighway;

    // Display the results
    cout << "The distance you can travel on a tank of gas in town is " << distanceTown << " miles.\n";
    cout << "The distance you can travel on a tank of gas on the highway is " << distanceHighway << " miles.\n";

    return 0;
}
// Copyright (c) 2022 St. Mother Teresa HS All rights reserved.
//
// Created by: Michael Clermont
// Created on: May 2022
// This program uses user defined functions

#include <iostream>
#include <string>
#include <cmath>

float VolumeOfCylinder(float height, float radius) {
    // calculate volume
    float volume;

    // process
    volume = M_PI * height * pow(radius, 2);

    return volume;
}

main() {
    // this function gets the height and radius

    std::string heightAsString;
    std::string radiusAsString;
    float heightAsFloat;
    float radiusAsFloat;
    float calculatedVolume;

    // input
    std::cout << "Enter the height of the cylinder(mm): ";
    std::cin >> heightAsString;
    std::cout << "Enter the radius of the cylinder(mm): ";
    std::cin >> radiusAsString;
    std::cout << std::endl;

    // call functions
    try {
        heightAsFloat = std::stof(heightAsString);
        radiusAsFloat = std::stof(radiusAsString);
        calculatedVolume = VolumeOfCylinder(heightAsFloat, radiusAsFloat);
        std:: cout << "The volume of the cylinder is " << calculatedVolume
        << "." << std::endl;
    } catch (std::invalid_argument) {
        std::cout << "That is not an float." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}

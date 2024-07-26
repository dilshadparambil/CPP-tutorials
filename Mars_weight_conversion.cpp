#include <iostream>

int main() {

float weight_earth=0,weight_mars=0;

std::cout<<"Enter the weight of an item in Kg: ";
std::cin>>weight_earth;

weight_mars=0.38*weight_earth; //The surface gravity of Mars is about 38% of Earth's gravity,

std::cout<<"The weight in Mars is "<<weight_mars<<" Kg\n";

}

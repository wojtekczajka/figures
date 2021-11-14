#include "figures.h"
#include <iostream>

using namespace std;


void rectangle::print_dimensions() {
    cout << "\nRECTANGLE" << endl;
    cout << "Side a: " << side_a << "\n" << "Side b: "<< side_b << "\n" <<
    "Area: " << area << endl;
}

void cuboid::print_dimensions(){
    cout << "\nCUBOID" << endl;
    cout << "Side a: " << side_a << "\n" << "Side b: " << side_b << "\n"
    << "Height: " << height << "\n" << "Area: " << volume / height << "\n" << "Volume: " << volume << endl;
}

void circle::print_dimensions() {
    cout << "\nCIRCLE" << endl;
    cout << "Radius: " << radius << "\n" << "Area:" << area << endl;
}

void cylinder::print_dimensions() {
    cout << "\nCYLINDER" << endl;
    cout << "Radius: " << radius << "\n" << "Height: " << height << "\n" << "Area: " <<  volume / height << "\n" << "Volume: " <<  volume << endl;
}

plane_figures::plane_figures(double s) : area(s){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(0, 3);
    color = static_cast<colors> (dist(gen));
}

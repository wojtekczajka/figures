#ifndef REPO_FIGURES_H
#define REPO_FIGURES_H

#include <random>
using namespace std;

enum colors {red, green, yellow, pink, blue};

class plane_figures{
protected:
    double area;
    enum colors color;
public:
    explicit plane_figures(double s);
    virtual void print_dimensions() = 0;
};

class spatial_figures : public plane_figures{
protected:
    double volume;
public:
    spatial_figures(double s, double h): plane_figures(s), volume(h * s)
            {}
};

class rectangle : public plane_figures{
protected:
    double side_a;
    double side_b;
public:
    explicit rectangle(double a = 0.0, double b = 0.0): side_a(a), side_b(b), plane_figures(a * b){}
    void print_dimensions();
};

class cuboid : public spatial_figures, public rectangle{
private:
    double height;
public:
    explicit cuboid(double a = 0.0, double b = 0.0, double h = 0.0): spatial_figures(a * b, h), rectangle(a, b), height(h)
    {}
    void print_dimensions();
};

class circle : public plane_figures{
protected:
    double radius;
public:
    explicit circle(double r) : radius(r), plane_figures(2 * M_PI * r)
    {}
    void print_dimensions();
};

class cylinder: public circle, public spatial_figures{
private:
    double height;
public:
    cylinder(double r, double h): height(h), spatial_figures(2 * M_PI * r, h), circle(r)
    {}
    void print_dimensions();
};
#endif

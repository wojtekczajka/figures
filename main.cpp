#include "figures.h"

int main() {
    plane_figures *p;
    spatial_figures *s;
    rectangle rec(5.0, 2.0);
    cuboid cub(5.0, 2.0, 10.0);
    circle circl(5.0);
    cylinder clndr(5.0, 10.0);
    p = &rec;
    p->print_dimensions();
    s = &cub;
    s->print_dimensions();
    p = &circl;
    p->print_dimensions();
    s = &clndr;
    s->print_dimensions();
    return 0;
}

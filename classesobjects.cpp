#include <iostream>

static double PI = 3.14;

class Cylinder
{
private:
    double radius;
    double height;
public:
    Cylinder() = default;
    Cylinder(const double &rad, const double &__height): radius(rad), height(__height) {}
    
    //Copy-control constructors
    Cylinder(const Cylinder &cyl): Cylinder(cyl.radius, cyl.height) {}
    Cylinder(Cylinder &&cyl): Cylinder(std::move(cyl.radius), std::move(cyl.height)) {}
    Cylinder& operator=(const Cylinder &);
    Cylinder& operator=(Cylinder &&);
    
    double volume();
    
    friend Cylinder ret();
};

Cylinder& Cylinder::operator=(const Cylinder &cyl)
{
    this->radius = cyl.radius;
    this->height = cyl.height;
    return *this;
}

Cylinder& Cylinder::operator=(Cylinder &&cyl)
{
    this->radius = std::move(cyl.radius);
    this->height = std::move(cyl.height);
    return *this;
}

double Cylinder::volume(void)
{
    return PI*radius*radius*height;
}

Cylinder ret(){
	return Cylinder(10, 10);
}

int main()
{
    Cylinder cyl(10.0, 8.0), cyl2;
    cyl2 = ret(); //call on Cylinder& Cylinder::operator=(Cylinder &&cyl)

    std::cout << "Volume of the cylinder is " << cyl2.volume() << std::endl;
    return 0;
}

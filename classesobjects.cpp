#include<iostream.h>
static float PI = 3.14;
class Cylinder
{
private:
float radius;
float height;
public:
Cylinder(float, float)
{
float volume(void);
};
Cylinder :: Cylinder(float a, float b)
{
radius=a;
height=b;
}
float Cylinder :: volume(void)
{
return PI * radius * radius * height;
}
void main()
{
Cylinder cyl = Cylinder(10,8);
cout<<"Volume of the cylinder is"<<cyl.volume();
}

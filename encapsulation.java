import java.util.*;
import java.lang.*;
import java.io.*;
interface ICylinder
{
void setValues(double radius, double hei);
double volume();
}
class Cylinder implements ICylinder
{
public static void main (String[] args) throws java.lang.Exception
	{
	double radius;
	double height;
	static final double PI=3.14;
	public void setValues(double rad, double hei)
	{
	radius=rad;
	height=hei;
	}
	public double volume()
	{
	return PI*radius*radius*height;
	}
	public static void main(String args[])
	{
	ICylinder cy=new Cylinder();
	cy.setValues(10,5);
	System.out.println("Volume is" +cy.volume());
	}
	}
}



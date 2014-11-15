import java.util.*;
import java.lang.*;
import java.io.*;
interface ICylinder
{

}
public class Cylinder implements ICylinder
{
public static void main (String[] args) throws IOException
        {
        double radius;
        double height;
        double PI=3.14;
        public void setValues(double rad, double hei)
        {
        radius=rad;
        height=hei;
        }
        public double volume()
        {
        return PI*radius*radius*height;
        }
        void main()
        {
        ICylinder cy=new Cylinder();
        cy.setValues(10,5);
        System.out.println("Volume is" +cy.volume());
        }
        }
}

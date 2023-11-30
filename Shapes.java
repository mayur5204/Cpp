// Design a base class shape with two double type values and member functions 
// to input the data and compute_area() for calculating area of shape.
//  Derive two classes: triangle and rectangle. Make compute_area() as
//  abstract function and redefine this function in the derived class to suit their requirements. 
// Write a program that accepts dimensions of triangle/rectangle and display calculated area.
//  Implement dynamic binding for given case study.
import java.util.Scanner;



abstract class Shape
{

    protected double dim1,dim2;

    abstract void input_data();
    abstract double compute_area();

}

class Triangle extends Shape
{

    @Override
    void input_data()
    {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the base of the triangle : ");
        dim1=sc.nextDouble();
        System.out.println("Enter the height of the triangle : ");
        dim2=sc.nextDouble();
    }

    @Override
    protected double compute_area()
    {
        return 0.5*dim1*dim2;
    
    }
   
}

class Rectangle extends Shape
{
    @Override
    void input_data()
    {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the length of the rectangle : ");
        dim1=sc.nextDouble();
        System.out.println("Enter the width of the rectangle : ");
        dim2=sc.nextDouble();
        sc.close();
    }

    @Override
    double compute_area()
    {
        return dim1*dim2;
    }

}

public class Shapes{
      public static void main(String args[])
    {
        Shape shape;
        shape =new Triangle();
        shape.input_data();
    
        System.out.println("Area of Triangle : "+shape.compute_area());
        Shape shape2;
        shape2 =new Rectangle();
        shape2.input_data();
        shape2.compute_area();
        System.out.println("Area of Rectangle : "+shape2.compute_area());
    }
}
   



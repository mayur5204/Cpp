// Design and develop a context for given case study and implement an interface for Vehicles 
// Consider the example of vehicles like bicycle, car and bike. 
// All Vehicles have common functionalities such as Gear Change, Speed up and apply breaks.
//  Make an interface and put all these common functionalities. 
// Bicycle, Bike, Car classes should be implemented for all these functionalities in their own class in their own way.
interface Vehicles
{
   abstract void GearChange();
    abstract void SpeedUp();
    abstract void ApplyBrakes();
}

class Bicycle implements Vehicles
{
    public void GearChange()
    {
        System.out.println("Bicycle's gear changed.");
    }

    public void SpeedUp()
    {
        System.out.println("Bicycle is speeding up.");
    }

    public void ApplyBrakes()
    {
        System.out.println("Bicycles's brakes applied.\n");
    }
    
}

class Car implements Vehicles
{
    public void GearChange()
    {
        System.out.println("Car's brakes applied.");
    }

    public void SpeedUp()
    {
        System.out.println("Car is speeding up.");
    }

    public void ApplyBrakes()
    {
        System.out.println("Car's brakes applied.\n");

    }
}

class Bike implements Vehicles
{
    public void GearChange()
    {
        System.out.println("Bike's gear changed.");
    }

    public void SpeedUp()
    {
        System.out.println("Bike is speeding up.");
    }

    public void ApplyBrakes()
    {
        System.out.println("Bike's brakes applied.\n");
    }
}


public class Vehicle
{
    public static void main(String args[])
    {
        Bicycle bicycle =new Bicycle();
        bicycle.SpeedUp();
        bicycle.GearChange();
        bicycle.ApplyBrakes();
        
        Car car=new Car();
        car.SpeedUp();
        car.GearChange();
        car.ApplyBrakes();

        Bike bike =new Bike();
        bike.SpeedUp();
        bike.GearChange();
        bike.ApplyBrakes();
    }
}
// Implement a program to handle Arithmetic exception, Array Index Out Of Bounds. 
// The user enters two numbers Num1 and Num2. The division of Num1 and Num2 is displayed. 
// If Num1 and Num2 were not integers, the program would throw a Number Format Exception.
//  If Num2 were zero, the program would throw an Arithmetic Exception.
//  Display the exception.


import java.util.Scanner;
public class ExceptionHandling
{
    String num1,num2;

    public void Division()
    {
        
        try {

            Scanner sc=new Scanner(System.in);
            System.out.println("Enter the numerator : ");
            num1=sc.nextLine();
            System.out.println("Enter the denominator : ");
            num2=sc.nextLine();
            int number1=Integer.parseInt(num1);
            int number2=Integer.parseInt(num2);
            sc.close();
        

        System.out.println("Division : "+(number1/number2));
        }
         catch(ArithmeticException e)
        {
            System.out.println("Arithmetic Exception occured!");
            System.out.println("Denominator cannnot be zero.");
        } 
        catch (NumberFormatException e) {

            System.out.println("Number format exception occured!");
            System.out.println("Please provide proper input.");
        
        }
       
        }
        
    

    public static void main(String args[])
    {
        ExceptionHandling e=new ExceptionHandling();
        e.Division();
       
    }


}
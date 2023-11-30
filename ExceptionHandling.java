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
         Scanner sc=new Scanner(System.in);
        try {

           
            System.out.println("Enter the numerator : ");
            num1=sc.nextLine();
            float number1=Float.parseFloat(num1);
            System.out.println("Enter the denominator : ");
            num2=sc.nextLine();
            int number2=Integer.parseInt(num2);
            
            if (number2==0)
            {
                throw new ArithmeticException("Denominator cannot be zero!");
            }
            else
            {
                float res=(number1/number2);
                 System.out.println("Division : "+(res));

                System.out.println("Enter the size of the array :");
                int size=sc.nextInt();
                System.out.println("Enter the index at which you want to add data : ");
                int index=sc.nextInt();
                System.out.println("Enter the data you want to add : ");
                int data =sc.nextInt();

                int[] array=new int[size];
                array[index]=data;

       

            }
           
        
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
        catch(ArrayIndexOutOfBoundsException e)
        {
            System.out.println("Array out of bound exception occured!");
        }
        finally
        {sc.close();
        }
       
        }
        
    

    public static void main(String args[])
    {
        ExceptionHandling e=new ExceptionHandling();
        e.Division();
       
    }


}
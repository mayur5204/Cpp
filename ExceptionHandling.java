


import java.util.Scanner;
public class ExceptionHandling
{
    String num1,num2;

    public void ExceptionHandlingexm()
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
        e.ExceptionHandlingexm();
       
    }


}
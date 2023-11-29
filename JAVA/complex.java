package JAVA;
public class Complex {
double real,imaginary;

public Complex(double real,double imaginary)
{
	this.real=real;
	this.imaginary=imaginary;
}


public Complex add(Complex other)
{
	double sumreal=this.real+other.real;
	double sumimag=this.imaginary+other.imaginary;
	return new Complex(sumreal,sumimag);

}


public Complex sub(Complex other)
{
	double subreal=this.real-other.real;
	double subimag=this.imaginary-other.imaginary;
	return new Complex(subreal,subimag);
}


public Complex mul(Complex other)
{
	double mulreal=(this.real*other.real)-(this.imaginary*other.imaginary);
	double mulimag=(this.real*other.imaginary)+(this.imaginary*other.real);
	return new Complex(mulreal,mulimag);
}


public Complex div(Complex other)
{
	double divreal=((this.real*other.real)+(this.imaginary*other.imaginary))/((other.real*other.real)+(other.imaginary*other.imaginary));
	double divimag=((this.imaginary*other.real)-(this.real*other.imaginary))/((other.real*other.real)+(other.imaginary*other.imaginary));
	return new Complex(divreal,divimag);
}
@Override
public String toString()
{
	return real+"+"+"("+imaginary+")"+"i";
}

public static void main(String args[])
{
	Complex a=new Complex(2,3);
	Complex b=new Complex(1,-1);
	Complex sum=a.add(b);
	System.out.println("Sum: "+sum);
	Complex sub=a.sub(b);
	System.out.println("Subtraction: "+sub);
	Complex mul=a.mul(b);
	System.out.println("Multiplication: "+mul);
	Complex div=a.div(b);
	System.out.println("Division: "+div);
}



}
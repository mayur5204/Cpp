
public class Publication {
	String title;
	float price;
	int copies;
	Publication (String title,float price,int copies)
	{
		this.title=title;
		this.price=price;
		this.copies=copies;
	}
	public void saleCopy(int quantity)
	{
		if (copies==0) {
			System.out.println("No copies left");
		}
		else {
		copies-=quantity;
		
		}
	}
	public float getTotalSale()
	{
        System.out.println("Title: "+title);
        System.out.println("Price :"+price*(copies));
		return price*(copies);
	}

}
class Book extends Publication
{
String author;
Book(String title,float price,int copies,String author)
{
	super(title,price,copies);
	this.author=author;
}
public void orderCopies(int quantity)
{
	copies+=quantity;
	
}
}
class Magazine extends Publication
{
	int currentIssue;

	Magazine(String title,float price,int copies,int currentIssue)
	{
		super(title,price,copies);
		this.currentIssue=currentIssue;
	}
	
	
	void orderQty(int quantity)
	{
		copies+=quantity;
	}
	
	void receiveIssue()
	{
		currentIssue++;
	}

	
	
	
	
	
		
	
public static void main(String args[])
{
	Book book1=new Book("Malgudi Days",200,100,"R.K.Narayan");
	Book book2=new Book( "Pride and Prejudice",580,120,"Jane Austen");
	book1.orderCopies(50);
	book2.orderCopies(100);
	Magazine mag1=new Magazine("Forbes",300,200,1);
	Magazine mag2=new Magazine ("National Geographic",250,400,1);
	mag1.orderQty(100);
	mag2.orderQty(30);
	book1.getTotalSale();
	book2.getTotalSale();
	mag1.getTotalSale();
	mag2.getTotalSale();
	
}
}

	



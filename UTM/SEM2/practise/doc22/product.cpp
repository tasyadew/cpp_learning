#include <iostream>
#include <iomanip>

using namespace std;

class Product{
	private:
		int code;
		double price;
	
	public:

	
		Product(int vc=0, double vp=0.0)
		{
		       code=vc;
		       price=vp;
	}

    void setCode(int c){
    	code=c;
	} 


    void setPrice(double p){
    	price=p;
	} 
	
	int getCode(){
		return code;
	}

	double getPrice()
	{ return price;
	}

};


int main() {
	
	Product p[100];
		
	int n;
	cout << "How many products to enter ? ";
	cin >> n;
	
	
	for (int x=0; x<n; x++)
	{
	   	int c;
		double vp;
	   	
		cout << "\nEnter the information of product #"<<x+1<<endl;
		cout << "Product Code: ";
		cin>>c;
		cout <<"Price: ";
		cin>>vp;
		
		p[x].setCode(c);
	
		p[x].setPrice(vp);
		
	}
    
	
	
	double sum=0.0;
	cout <<"\nNo	Product Code	Price";
	 for(int x=0;x<n;x++)
	    {
	    	cout <<"\n"<<x+1<<"\t"<<p[x].getCode()<<"\t\t"<<p[x].getPrice();
		     sum+=p[x].getPrice();
		}
		
	   cout <<fixed<<setprecision(2);
	   	
	   cout <<"\n\nAverage Price:  RM" <<sum/n<<endl;
	
  	  Product p2(100,1.0);
  	  p[n]=p2; 
	
	return 0;
}
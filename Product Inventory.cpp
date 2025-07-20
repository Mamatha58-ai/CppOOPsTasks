#include<iostream>
using namespace std;
class product{
	private:
		double price;
		int stock;
	public:
		string pn;
		string category;
		// constructor 
	product(double p , int s,string p_name,string cat){
		price = p;
		stock = s;
		pn = p_name;
		category = cat;
	}
	 // getter to display
	void display(){
		cout << price << endl;
		cout << stock << endl;
		cout << pn  << endl;
		cout << category;
	}	
};
int main(){
	// create object and access values 
	product p(1000,100,"table" , "furniture");
	p.display();
}

//Tugas 1 Pemrograman Berorientasi Objek (Invoice Store)
//MAULIDYA RISTA YUNIAR 057

#include<iostream>
#include <string>

using namespace std;

class Invoice{
	public:
		Invoice( string, string, int, int );
	void setPartNumber( string );
		string getPartNumber();
	void setPartDescription(string);
		string getPartDescription();
	void setItemQuantity(int);
	int getItemQuantity();
	void setItemPrice(int);
	int getItemPrice();
	int getInvoiceAmount();

	private:
		string partNumber;
		string partDescription;
	int itemQuantity;
	int itemPrice;
};

Invoice::Invoice( string number, string description, int quantity, int price ){
	partNumber=number;
	partDescription=description;

	if(quantity>0)
		itemQuantity=quantity;
	else
		{
  		itemQuantity=0;
		cout<<"Initial quantity was invalid."<<endl;
		}

 	if(price>0)
		itemPrice=price;
	else
		{
		itemPrice=0;
		cout<<"Initial price was invalid."<<endl;
		}
}

void Invoice::setPartNumber( string number){
	if ( number.length() <= 25 )
		partNumber = number;
	if ( number.length() > 25 )
	{
  		partNumber = number.substr( 0, 25 );
  		cout << "Name \"" << number <<"\" exceeds maximum length (25).\n"<< "Limiting partNumber to first 25 characters.\n" << endl;
	}
}

void Invoice::setPartDescription(string description ){
	if ( description.length() <= 25 )
		partDescription = description;
	if ( description.length() > 25 )
	{
		partDescription = description.substr( 0, 25 );
		cout << "Name \"" << description <<"\" exceeds maximum length (25).\n"<< "Limiting partDescription to first 25 characters.\n" << endl;
	}
}

void Invoice::setItemQuantity(int quantity )
{
	if(quantity>0)
		itemQuantity=quantity;
	else
	{
		itemQuantity=0;
		cout<<"Initial quantity was invalid."<<endl;
	}
}

void Invoice::setItemPrice(int price ){
	if(price>0)
		itemPrice=price;
	else
		{
		itemPrice=0;
		cout<<"Initial price was invalid."<<endl;
	}
}

string Invoice::getPartNumber() {
	return partNumber;
}
string Invoice::getPartDescription() {
	return partDescription;
}
int Invoice::getItemQuantity() {
	return itemQuantity;
}
int Invoice::getItemPrice() {
	return itemPrice;
}
int Invoice::getInvoiceAmount() {
	return itemQuantity*itemPrice;
}

int main() {
	cout << "-------------------------------------------------------------" <<endl;
	cout << "\t\t\t ->>PRICE<<-" <<endl;
	cout << "-------------------------------------------------------------" <<endl<<endl;
	Invoice Invoice1("WRD735","WARDAH NATURE DAILY HYDRAMILD FACEWASH",1,26000);
	Invoice Invoice2("EMN671","EMINA GLOSSY STAIN (IN NUMBER 01, 03, 05)",3,35000);
	Invoice Invoice3("PXY257","PIXY TWIN BLUSH(IN NUMBER 01, 04)",2,45000);
	cout << "Code Invoice 1 : "<< Invoice1.getPartNumber() <<endl;
	cout << "Description    : "<< Invoice1.getPartDescription() <<endl;
	cout << "Total Item     : "<< Invoice1.getItemQuantity() <<endl;
	cout << "Price per Item : Rp. "<< Invoice1.getItemPrice()<<",-" <<endl;
	cout << "PRICE TOTAL INVOICE 1  : Rp. "<<Invoice1.getInvoiceAmount()<<",-" <<endl<<endl;

	cout << "Code Invoice 2 : "<< Invoice2.getPartNumber() <<endl;
	cout << "Description    : "<< Invoice2.getPartDescription() <<endl;
	cout << "Total Item     : "<< Invoice2.getItemQuantity() <<endl;
	cout << "Price per Item : Rp. "<< Invoice2.getItemPrice()<<",-" <<endl;
	cout << "PRICE TOTAL INVOICE 2  : Rp. "<< Invoice2.getInvoiceAmount()<<",-" <<endl<<endl;

	cout << "Code Invoice 3 : "<< Invoice3.getPartNumber() <<endl;
	cout << "Description    : "<< Invoice3.getPartDescription() <<endl;
	cout << "Total Item     : "<< Invoice3.getItemQuantity() <<endl;
	cout << "Price per Item : Rp. "<< Invoice3.getItemPrice()<<",-" <<endl;
	cout << "PRICE TOTAL INVOICE 3  : Rp. "<<Invoice3.getInvoiceAmount()<<",-" <<endl<<endl;
	cout << "-------------------------------------------------------------" <<endl;

}

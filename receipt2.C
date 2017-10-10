/*Tyler Allen
CS 111
2/17/2015

This program will output the receipt after having input of the price, date, name and item name*/

#include <iostream>//include output input in iostream header file
#include <iomanip>//include math header file
using namespace std;

int main(){//main function
string name;//declare variables 
string date;
string itemName;
 double price;
 //declare variables
 char ch;
 cout<<"This program will ask you for the sales person's name, today's date, item name and price. It will then show the store receipt including the sales tax and total purchase price. When you are ready, press enter to continue the program."<<endl;
 cin.get(ch);
 //////////////////
 cout<< "Please enter today's date in the form (mm/dd/yyyy)";
 cin >> date;
 cin.ignore();
 cout << "Please enter your first and last name: ";//ask for input of radius
 getline(cin, name); //assign input to radius
 cout<<"Please enter the name of the item you are purchasing: ";
 getline(cin,itemName);
 cout<<"Please enter the price of the item you are purchasing: ";
 cin>>price;
 const double SALES_TAX=price*(7.75/100);
 cout<<"\""<<"Your Friendly Neighbor Store"<<"\""<<endl;
 cout<<setw(30)<<date<<endl;
 cout<<setw(30)<<name<<endl<<endl;
 cout<<left<<setw(20)<<itemName;
 cout<<right<<setw(10)<<fixed<<setprecision(2)<<price<<endl;
 cout<<left<<setw(20)<<"Sales tax";
 cout<<right<<setw(10)<<SALES_TAX<<endl;
 cout<<left<<setw(20)<<"Total";
 cout<<right<<setw(10)<<price+SALES_TAX<<endl;
 cout<<"------------------------------"<<endl;
 cout<<"Thank you for shopping with us!"<<endl;

 return 0; //end program
}

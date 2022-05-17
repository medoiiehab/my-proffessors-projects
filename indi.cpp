#include <iostream>
#include <cmath>
#include <string>
using namespace std;
//|.M.|.E.| 


class client {//based on if the clent is a vendor
public:
//the name of the customer
string name;
//the number of the customer and their total puchases from us.
int number, total_sellers ;
};
//.........................................................................

class suppliers{//the ones helping the production to exist
public:
//the corps name and address
string corp_name, address;
//their contact number and the total purchases we made from them
int number, total_puchases;

};
//.........................................................................

class products{
//the products that are stored in the stroage.
//the type of the product (laptops, rice, shampoos), name (lenovo, dell, dove.. etc), |removable|-> storage_facility that's been stored in
string type, name , storage_facility;
//the quantity of the products
int quantity, price;

};


 int main() {
//declaring variables
string answer, payment;

//classes and objects determination

//client
client b_tech;
b_tech.name ="lorem";
b_tech.total_sellers = 2500000;
b_tech.number = 01154625846;
//corp
suppliers microsoft;
microsoft.address = "Siclion valley, USA";
microsoft.corp_name = "MSI";
microsoft.total_puchases = 2000000;
microsoft.number = 99658210035;
//product
//example
products laptops;
laptops.storage_facility = "x1";
laptops.name ="MSI gaming";
laptops.type = "gaming laptop";
laptops.price = 22000;
laptops.quantity = 30;
int total_price = laptops.quantity * laptops.price;
//the input method
cout << "which receipt would you like to get? (corp or client) : "
cin >> answer;cout << endl;
cout << "what was the payment method : ";cin >> payment;cout << endl<< endl;

cout << "-------------------------------------------Receipt------------------------------------------------------------\n\n\n";
//the algorithm for the receipts
//the first case
if (answer == "bought", "buy", "purchased","purchase", "corp", "corpration"){
    //put what should be outputted here
    cout << "the laptops bought from "<< microsoft.corp_name << ".\n\n total purchases history: "<< microsoft.total_purchases << ".";
    cout << "\n\nthe total price of the purchases recently : "<< total_price << ".\n\n the contact number is :" <<microsoft.number ;
}
//the second case
else if(answer == "sold", "client", "sell"){
    //put what should be outputted here
    //because they may not be regural (we don't keep a history in the receipt)
    cout << "the laptops bought by "<< b_tech.name << ".\n\n total purchases: "<< b_tech.total_sellers << ".";
    cout << "\n\n the contact number : "<< b_tech.number << ".\n\n";
}
//error stage
else {cout << "sorry I don't really understand you, this action is performed by a bot thus you should put certain commands.\n\n";}


// the net worth stage.
int net = b_tech.total.sellers - microsoft.total_purchases;
//the output in the receipt.
cout << "the total net profit is : " << net;

//end of the program
     return 0;
     //the true end
 }
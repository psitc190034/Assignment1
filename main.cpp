#include <iostream>

using namespace std;


int main()
{
    string customerName;
    string items;
    double vat= 0.12;
    int customerID;
    double numberofItems;
    double cost;
    int printPrice= 50;
    int phonePrice= 30;
    int tablePrice= 20;
    int quantity;
    float amtOwed;
    int balance= 0;
    string item1= "Printer", item2= "Phone", item3= "Table";


    cout << "Welcome to NEWTON'S SUPERMARKET" << endl;
    cout << "_______________________________" << endl;
    cout << ""<< endl;


    cout << "Enter Your Name " << endl;
    cin >> customerName;
    cout << "Enter Your ID Number " << endl;
    cin >> customerID;

    cout << "These are the items available today; " << endl;
    cout << "1.Printer" <<endl;
    cout << "2.Phone" <<endl;
    cout << "3.Table" <<endl;
    cout << "" << endl;

    cout << "What item do you want to purchase " << endl;
    cin >> items;
    cout << "" << endl;

     while(items!=item1&&items!=item2&&items!=item3){
        cout << "Item Not Availiabe " << endl;
        cout << "Select another item " << endl;
        cin >> items;
    }

    cout << "How many items do you want to purchase" << endl;
    cin >> quantity;
    cout << "" << endl;


    if (item1== "Printer" ) {
        amtOwed= ( 50* quantity) + vat;
    }
    else if (item2== "Phone") {
        amtOwed= (30 * quantity) + vat;
    }
    else if (item3== "Table")
        amtOwed= (20 * quantity) + vat;

    cout <<"Amount Owed is "  << "$"<< amtOwed << endl;
    cout <<"" << endl;

   cout << "_____RECEIPT_____ " << endl;
   cout << "CUSTOMER " << customerName << endl;
   cout << "ID " << customerID << endl;
   cout << "ITEM PURCHASE " << items << endl;
   cout << "QUANTITY " << quantity << endl;
   cout << "VAT " << vat << endl;
   cout << "AMOUNT PAID " << amtOwed << endl;
   cout << "BALANCE " << "$" << balance << endl;
   cout << "_____THANK YOU_____ " << endl;





       // cost= numberofItems * 0.12;
       // cout << "cost" << cost;

        return 0;
}

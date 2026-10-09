#include <iostream>
using namespace std;
int main (){
    cout << "-------------------------" << endl;
    cout << "Personal Expense Tracker" << endl;
    cout << "-------------------------" << endl;
    cout<<  "1. Add Expense" << endl;
    cout<<  "2. View All Expenses" << endl;
    cout<<  "3. Search Expense" << endl;
    cout<<  "4. Sort Expenses" << endl;
    cout<<  "5. Expense Statistics" << endl;
    cout<<  "6. Delete Expense" << endl;
    cout<<  "7. Exit" << endl;
    cout << "-------------------------" << endl;

    cout<<"enter your choice:"<<endl;
    int choice;
    cin>>choice;
    switch(choice){
    
    case 1:
        cout<<"add expense"<<endl;
        break;
    
    case 2:
        cout << "You selected View All Expenses." << endl;
        break;

    case 3:
        cout << "You selected Search Expense." << endl;
        break;

    case 4:
        cout << "You selected Sort Expenses." << endl;
        break;

    case 5:
        cout << "You selected Expense Statistics." << endl;
        break;

    case 6:
        cout << "You selected Delete Expense." << endl;
        break;

    case 7:
        cout << "Thank you for using Expense Tracker!" << endl;
        break;

    default:
        cout << "Invalid choice. Enter a number between 1 and 7." << endl;

    
}
return 0;
}


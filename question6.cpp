#include<iostream>
using namespace std;
int main() 
{
    int no_of_items;
    cout<<"Please input the number of item types you want: "<<endl;
    cin>>no_of_items;
    int item_code, quantity, price,total_cost;
    for (int i = 0; i <= no_of_items; i++)  
    {
        cout<<"Please input the item code: "<<endl;
        cin>>item_code;
        cout<<"Please input the price of the item: "<<endl;
        cin>>price;
        cout<<"Please input the quantity: "<<endl;
        cin>>quantity;
        total_cost=price*quantity;
    }
    cout<<"Item Code            Price           Quantity          Total Cost"<<endl;
    cout<<item_code<<"          "<<price<<"         "<<quantity<<"          "<<total_cost;
    
}
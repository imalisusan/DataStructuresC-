#include<iostream>
using namespace std;
struct Item
        {
            int item_code, price, quantity, total_cost;
        };
int main() 
{
    int no_of_items;
    cout<<"Please input the number of item types you want: "<<endl;
    cin>>no_of_items;
    Item item[no_of_items];
    for (int i = 0; i < no_of_items; i++)  
    {
        Item item[i];
        cout<<"Please input the item code: "<<endl;
        cin>>item[i].item_code;
        cout<<"Please input the price of the item: "<<endl;
        cin>>item[i].price;
        cout<<"Please input the quantity: "<<endl;
        cin>>item[i].quantity;
        item[i].total_cost = item[i].price*item[i].quantity;
        cout<<item[i].total_cost;
    }
    cout<<"Item Code \tPrice \tQuantity \tTotal Cost"<<endl;

    for (int i = 0; i < no_of_items; i++)
    {
        display(item[i]);
        cout<<item[i].item_code<<"\t"<<item[i].price<<"\t"<<item[i].quantity<<"\t"<<item[i].total_cost<<endl; 
    } 
    
}
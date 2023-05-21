#include <iostream>
using namespace std;
class Item {
private:
    int code;
    string name;
    double price;
    static int itemCount;

public:
    Item() : code(0), name(""), price(0.0) {
        itemCount++;
    }

    Item(int code, string name, double price) : code(code), name(name), price(price) {
        itemCount++;
    }

    Item(const Item& other) : code(other.code), name(other.name), price(other.price) {
        itemCount++;
    }

    void displayDetails() {
        cout << "Code: " << code << endl;
        cout << "Name: " << name << endl;
        cout << "Price: $" << price << endl;
    }

    static int getItemCount() {
        return itemCount;   }
};

int Item::itemCount = 0;
int main() {
    Item item1;  
    Item item2(1, "Item 2", 9.99); 
    Item item3 = item2;  

    item1.displayDetails();
    item2.displayDetails();
    item3.displayDetails();

    cout << "Total items created: " << Item::getItemCount() << endl;

    return 0;
}


#include <iostream>
#include <vector>
using namespace std;

// Step 1: Item structure to store product details
struct Item {
    int id;
    string name;
    double price;
    int quantity;
};

// Step 2: Inventory class to manage the list of items
class Inventory {
private:
    vector<Item> items; // List to store all items dynamically

public:
    // Method to add an item (with duplicate ID check)
    void addItem(Item newItem) {
        // Check if item with same ID already exists
        for (auto& item : items) {
            if (item.id == newItem.id) {
                item.quantity += newItem.quantity; // Agar ID match ho gayi, toh quantity badha do
                cout << "Item with ID " << newItem.id << " already exists. Quantity updated!\n";
                return;
            }
        }
        // Agar ID nahi mili, toh naya item list ke end me add kar do
        items.push_back(newItem);
        cout << "New item added successfully!\n";
    }

    // Method to remove an item by ID
    bool removeItem(int targetId) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->id == targetId) {
                items.erase(it); // List se item hata do
                cout << "Item with ID " << targetId << " removed successfully!\n";
                return true;
            }
        }
        cout << "Item with ID " << targetId << " not found!\n";
        return false;
    }

    // Method to calculate total inventory value (const because it only reads data)
    double getTotalValue() const {
        double total = 0.0;
        for (const auto& item : items) {
            total += (item.price * item.quantity); // Price * Quantity for each item
        }
        return total;
    }
};

int main() {
    Inventory myShop;

    // Adding initial items
    myShop.addItem({101, "Notebook", 50.0, 10});
    myShop.addItem({102, "Pen", 20.0, 25});

    // Testing duplicate ID logic (Ye ID 101 ki quantity 10 se badha kar 15 kar dega)
    myShop.addItem({101, "Notebook", 50.0, 5});

    // Printing total inventory value
    cout << "\nTotal Inventory Value: Rs. " << myShop.getTotalValue() << endl;

    // Removing an item
    cout << "\nRemoving item ID 102...\n";
    myShop.removeItem(102);

    // Final total value after removal
    cout << "Final Total Inventory Value: Rs. " << myShop.getTotalValue() << endl;

    return 0;
}
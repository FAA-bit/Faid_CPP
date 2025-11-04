#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <memory>

// Framåtdeklaration
class Customer;

// ---------------- Item ----------------
class Item {
protected:
    std::string name_;
    int price_;
public:
    Item(const std::string& name, int price);
    virtual ~Item() = default;

    std::string name() const;
    int price() const;

    virtual void printInfo() const;
};

// ---------------- FoodItem ----------------
class FoodItem : public Item {
    int calories_;
public:
    FoodItem(const std::string& name, int price, int calories);
    void printInfo() const override;
};

// ---------------- ToolItem ----------------
class ToolItem : public Item {
	int durability_;
public:
    ToolItem(const std::string& name, int price, int durability);
    void printInfo() const override;
};

// ---------------- Shop ----------------
class Shop {
    std::vector<std::unique_ptr<Item>> inventory_;
    int balance_;
public:
    Shop();

    void addItem(std::unique_ptr<Item> item);
    void printInventory() const;
    bool sellItemToCustomer(const std::string& itemName, Customer& customer);
    void addBalance(int amount);

};

// ---------------- Customer ----------------
class Customer {
    std::string name_;
    int money_;
    std::vector<std::string> shoppingList_;
public:
    Customer(const std::string& name, int money, std::vector<std::string> shoppingList);

    void tryToBuy(Shop& shop);
    bool canAfford(int price) const;
    void pay(int price);
    std::string getName() const;
};


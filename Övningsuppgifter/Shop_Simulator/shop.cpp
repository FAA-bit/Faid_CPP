#include "Shop.h"
#include <fstream>
#include <sstream>

// ---------- Item ----------
Item::Item(const std::string& name, int price) : name_{ name }, price_{ price } {}
std::string Item::name() const { return name_; }
int Item::price() const { return price_; }
void Item::printInfo() const { std::cout << name_ << " – " << price_ << " kr\n"; }

// ---------- FoodItem ----------
FoodItem::FoodItem(const std::string& name, int price, int calories)
    : Item(name, price), calories_{ calories } {
}
void FoodItem::printInfo() const {
    std::cout << name_ << " – " << price_ << " kr (" << calories_ << " kcal)\n";
}

// ---------- Shop ----------
Shop::Shop() : balance_(0) {}
void Shop::addItem(std::unique_ptr<Item> item) { inventory_.push_back(std::move(item)); }
void Shop::printInventory() const {
    std::cout << "\n--- Shop Inventory ---\n";
    for (const auto& item : inventory_) item->printInfo();
    std::cout << "Balance: " << balance_ << " kr\n";
}
bool Shop::sellItemToCustomer(const std::string& itemName, Customer& customer) {
    for (auto it = inventory_.begin(); it != inventory_.end(); ++it) {
        if ((*it)->name() == itemName) {
            if (customer.canAfford((*it)->price())) {
                customer.pay((*it)->price());
                addBalance((*it)->price());
                inventory_.erase(it);
                std::cout << customer.getName() << " bought " << itemName << "\n";
                return true;
            }
            else {
                std::cout << customer.getName() << " cannot afford " << itemName << "\n";
                return false;
            }
        }
    }
    std::cout << itemName << " not found in shop.\n";
    return false;
}
void Shop::addBalance(int amount) { balance_ += amount; }

// ---------- Customer ----------
Customer::Customer(const std::string& name, int money, std::vector<std::string> shoppingList)
    : name_{ name }, money_{ money }, shoppingList_{ shoppingList } {
}
void Customer::tryToBuy(Shop& shop) {
    std::cout << "\n" << name_ << " enters shop with " << money_ << " kr.\n";
    for (const auto& itemName : shoppingList_) shop.sellItemToCustomer(itemName, *this);
    std::cout << name_ << " leaves with " << money_ << " kr left.\n";
}
bool Customer::canAfford(int price) const { return money_ >= price; }
void Customer::pay(int price) { money_ -= price; }
std::string Customer::getName() const { return name_; }

#include "include/Pallet.hpp"



Pallet::Pallet(std::string itemName, int itemCapacity, int itemCount) : 
itemName(itemName), itemCapacity(itemCapacity), itemCount(itemCount) {}

Pallet::Pallet() : itemCount(0) {}

std::string Pallet::getItemName() const {
    return itemName;
}

int Pallet::getItemCount() const {
    return itemCount;
}

int Pallet::getRemainingSpace() const {
    return itemCapacity - itemCount;
}

bool Pallet::reAllocateEmptyPallet(std::string itemName, int itemCapacity) {
    if (itemCount == 0) {
        this->itemName = itemName;
        this->itemCapacity = itemCapacity;
        return true;
    }    
    else {
        return false;
    }
}

bool Pallet::takeOne() {
    if (itemCount > 0) {
        this->itemCount = itemCount - 1;
        return true;
    }
    else {
        return false;
    }
}

bool Pallet::putOne() {
    if (itemCount < itemCapacity) {
        this->itemCount = itemCount + 1;
        return true;
    }
    else {
        return false;
    }
}

bool Pallet::isEmpty() {
    if (itemCount == 0) {
        return true;
    }
    else {
        return false;
    }
}

bool Pallet::isFull() {
    if (itemCount == itemCapacity) {
        return true;
    }
    else {
        return false;
    }
}
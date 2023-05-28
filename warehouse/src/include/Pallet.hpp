#pragma once
#include <iostream>
#include "IContainer.hpp"

class Pallet: public IContainer {
    private:
        int itemCount;
        std::string itemName;
        int itemCapacity;

    public:
        Pallet(std::string itemName, int itemCapacity, int itemCount);
        Pallet();
        std::string getItemName() const;
        int getItemCount() const;
        int getRemainingSpace() const;
        bool reAllocateEmptyPallet(std::string itemName, int itemCapacity);
        bool takeOne();
        bool putOne();
        bool isEmpty() override;
        bool isFull() override;
};
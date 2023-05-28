#pragma once
#include "Pallet.hpp"
#include "IContainer.hpp"
#include <iostream>
#include <array>

class Shelf: public IContainer {
    public:
        std::array<Pallet, 4> pallets;
    
    public:
        Shelf();
        bool swapPallet(int slot, int slot2);
        bool isEmpty() override;
        bool isFull() override;
};
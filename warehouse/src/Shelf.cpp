#include "include/Shelf.hpp"
#include "include/Pallet.hpp"

Shelf::Shelf() {
    pallets[0] = Pallet();
    pallets[1] = Pallet();
    pallets[2] = Pallet();
    pallets[3] = Pallet();
}

bool Shelf::swapPallet(int slot, int slot2) {
    int place_holder = slot2;
    pallets[slot2] = pallets[slot];
    pallets[slot] = pallets[place_holder];   
}

bool Shelf::isEmpty() {
    for (Pallet pallet: this->pallets) {
        if (pallet.getItemCount() != 0 ) {
            return false;
        }
        else {
            return true;
        }
    }
}

bool Shelf::isFull() {
    for (Pallet pallet: this->pallets) {
        if (pallet.getItemCount() != pallet.getRemainingSpace()) {
            return false;
        }
        else {
            return true;
        }        
    }

}

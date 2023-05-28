#include "include/Warehouse.hpp"


Warehouse::Warehouse() {}


void Warehouse::addEmployee(Employee employee) {
    Employees.push_back(employee);
}

void Warehouse::addShelf(Shelf shelf) {
    Shelves.push_back(shelf);
}

bool Warehouse::reArrangeShelf(Shelf& shelf) {
    for (Employee employee: this->Employees) {
        if (employee.getForkLiftCertificate() == true && employee.getBusy() == true) {
            for (int i = 0; i < shelf.pallets.size(); i++) {
                for (int j = 0; j < shelf.pallets.size() -1; j++) {
                    if (shelf.pallets[j].getItemCount() > shelf.pallets[j+1].getItemCount()) {
                        shelf.swapPallet(j, j+1);
                    }
                }
            }
        return true;    
        }
    }
    return false;
}

bool Warehouse::pickItems(std::string itemName, int itemCount) {
    for (Shelf shelf: this->Shelves) {
        for (Pallet pallet: shelf.pallets) {
            if (pallet.getItemCount() > 0 && pallet.getItemName() == itemName) {
                for (int i = 0; i < itemCount; i++) {
                    pallet.takeOne();
                }
                return true;
            }
        }
    }
    return false;
}
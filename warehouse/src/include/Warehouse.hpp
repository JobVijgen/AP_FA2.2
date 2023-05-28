#pragma once
#include <iostream>
#include "Employee.hpp"
#include "Shelf.hpp"
#include <vector>


class Warehouse {
    public:
        std::vector<Employee> Employees;        
        std::vector<Shelf> Shelves;

    public:
        Warehouse();
        void addEmployee(Employee employee);
        void addShelf(Shelf shelf);
        bool reArrangeShelf(Shelf& shelf);
        bool pickItems(std::string itemName, int itemCount);
};
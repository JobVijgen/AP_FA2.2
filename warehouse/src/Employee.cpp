#include "include/Employee.hpp"
#include <iostream>

Employee::Employee(std::string name, bool forkLiftCertificate) :
name(name), forkLiftCertificate(forkLiftCertificate), busy(false) {}

std::string Employee::getName() const {
    return name;
}

bool Employee::getBusy() const {
    return busy;
}

void Employee::setBusy(bool busy) {
    this->busy = busy;
}

bool Employee::getForkLiftCertificate() const {
    return forkLiftCertificate;
}

void Employee::setForkLiftCertificate(bool forkLiftCertificate) {
    this->forkLiftCertificate = forkLiftCertificate;
}
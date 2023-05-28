#pragma once
#include <iostream>

class Employee {
    private:
        const std::string name;
        bool busy;
        bool forkLiftCertificate;

    public:
        Employee(std::string name, bool forkLiftCertificate);
        std::string getName() const;
        bool getBusy() const;
        void setBusy(bool busy);
        bool getForkLiftCertificate() const;
        void setForkLiftCertificate(bool forkLiftCertificate);
};


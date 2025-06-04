#include <iostream>

class Building {

protected:
    int height;
public:
    Building(int h): height(h) {}
    int getHeight() const {
        return height;

    }
};

class House: public Building {
private:
    int surface;
public:
    House(int h, int s): Building(h), surface(s) {}
    void printInfo() const {
        std::cout<<"The house has  "<< surface<< "square meters and the heigh of "<< height << " meters.";
    }
};

int main() {
    int h,s;
    std::cin>>h>>s;
    House house(h,s);
    house.printInfo();
    return 0;

}

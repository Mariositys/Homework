// ClassesLab2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Animal {
    public:
        void move() {
            cout << "Moving" << endl;
        }

        void live() {
            cout << "Living" << endl;
        }

};

class Canidae : public Animal {
    public:
        void run() {
            cout << "running" << endl;
        }
    private:
        void onlyTrueDog() {
            cout << "Okay" << endl;
        }
};

class EnglishGreyhound : public Canidae {
    public:
        void runUltrafast() {
            cout << "running faster" << endl;
        }
};

int main()
{
    Canidae dog1;
    EnglishGreyhound hound1;
    Animal someAnimal;

    dog1.live();
    dog1.move();
    dog1.run();
    hound1.runUltrafast();
    someAnimal.live();
    hound1.live();

}

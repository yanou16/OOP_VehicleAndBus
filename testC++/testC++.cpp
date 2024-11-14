#include <iostream>

class Vehicule {
private:
    int max_speed;
    int mileage;

public:
    // Constructeur sans argument
    Vehicule() : max_speed(240), mileage(0) {}

    // Getter pour max_speed
    int getMaxSpeed() const {
        return max_speed;
    }

    // Setter pour max_speed
    void setMaxSpeed(int speed) {
        if (speed < 200) {
            max_speed = 240;  // Si la vitesse est inférieure à 200, on la met à 240
        }
        else {
            max_speed = speed;
        }
    }

    // Getter pour mileage
    int getMileage() const {
        return mileage;
    }

    // Setter pour mileage
    void setMileage(int age) {
        if (age < 0) {
            mileage = 0;  // Si le kilométrage est inférieur à 0, on le met à 0
        }
        else {
            mileage = age;
        }
    }
};

class Bus : public Vehicule {
private:
    int seat_capacity;

public:
    // Constructeur sans argument
    Bus() : seat_capacity(10) {}

    // Getter pour seat_capacity
    int getSeatCapacity() const {
        return seat_capacity;
    }

    // Setter pour seat_capacity
    void setSeatCapacity(int capacity) {
        if (capacity < 10) {
            seat_capacity = 10;  // Si la capacité est inférieure à 10, on la met à 10
        }
        else if (capacity > 50) {
            seat_capacity = 50;  // Si la capacité est supérieure à 50, on la met à 50
        }
        else {
            seat_capacity = capacity;  // Sinon, on utilise la valeur donnée
        }
    }

    // Méthode get_info pour afficher les informations du bus
    void get_info() const {
        std::cout << "Il s'agit d'un bus d'une capacité de " << getSeatCapacity()
            << " places, avec une vitesse maximale de " << getMaxSpeed()
            << " km/h et son kilométrage est de " << getMileage()
            << " km." << std::endl;
    }
};

int main() {
    // Test de la classe Bus
    Bus b;
    b.setMaxSpeed(240);
    b.setMileage(200000);
    b.setSeatCapacity(40);

    // Appel à la méthode get_info pour afficher les infos du bus
    b.get_info();

    return 0;
}

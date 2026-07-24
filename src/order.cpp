#include "../include/Order.h"
#include <stdexcept>

Order::Order(long long id, Side side, long long price, int quantity, long long timestamp){
    this->orderId = id;
    this->side = side;
    this->price = price;
    this->quantity = quantity;
    this->timestamp = timestamp;
}

long long Order::getId() const {
    return orderId;
}

Side Order::getSide() const {
    return side;
}

long long Order::getPrice() const {
    return price;
}

int Order::getQuantity() const {
    return quantity;
}

long long Order::getTimestamp() const {
    return timestamp;
}

void Order::reduceQuantity(int amount) {
    if (amount > quantity) {
        throw std::invalid_argument("Amount to reduce exceeds current quantity.");
    }
    quantity -= amount;
}

bool Order::isFilled() const {
    return quantity == 0; 
}


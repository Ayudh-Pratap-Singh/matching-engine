#ifndef ORDER_H
#define ORDER_H

enum class Side {
    BUY, 
    SELL
};

class Order {
    private:
        long long orderId;
        Side side;
        long long price;
        int quantity;
        long long timestamp;
    
    public:
        Order(long long id, Side side, long long price, int quantity, long long timestamp);
        long long getId() const;
        Side getSide() const;
        long long getPrice() const;
        int getQuantity() const;
        long long getTimestamp() const;

        void reduceQuantity(int amount);
        bool isFilled() const;


};

#endif

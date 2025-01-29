#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <limits>

enum class OrderBookType
{
    bid,
    ask
};

class OrderBookEntry
{
public:
    std::string timestamp;
    std::string product;
    OrderBookType orderType;
    double price;
    double amount;

    // Constructor using member initializer list
    OrderBookEntry(std::string _timestamp, std::string _product, OrderBookType _orderType, double _price, double _amount);
};


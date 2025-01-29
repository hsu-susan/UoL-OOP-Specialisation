#include <iostream>
#include <vector>
#include "MerkelMain.h"
#include "OrderBookEntry.h"

MerkelMain::MerkelMain()
{
}

void MerkelMain::init()
{
    loadOrderBook();
    int input;
    while (true)
    {
        printMenu();
        input = getUserOption();
        processUserOption(input);
    }
};

void MerkelMain::loadOrderBook()
{
    // Create sample OrderBookEntry objects and add them to the vector
    orders.push_back(OrderBookEntry{"2020/03/17 17:01:24.884492", "ETH/BTC", OrderBookType::bid, 0.02186299, 0.1});
    orders.push_back(OrderBookEntry{"2020/03/17 17:02:24.884492", "ETH/BTC", OrderBookType::ask, 0.02187308, 7.44564869});
    orders.push_back(OrderBookEntry{"2020/03/17 17:03:24.884492", "ETH/BTC", OrderBookType::bid, 0.02185000, 1.2});
}

void MerkelMain::printMenu()
{
    // 1 print help
    std::cout << "|   1: Print help              |" << std::endl;

    // 2 print exchange stats
    std::cout << "|   2: Print exchange stats    |" << std::endl;

    // 3 make an offer
    std::cout << "|   3: Make an offer           |" << std::endl;

    // 4 make a bid
    std::cout << "|   4: Make a bid              |" << std::endl;

    // 5 print wallet
    std::cout << "|   5: Print wallet            |" << std::endl;

    // 6 next step or continue
    std::cout << "|   6: Continue                |" << std::endl;

    std::cout << "=============================== " << std::endl;
}

int MerkelMain::getUserOption()
{
    // Ask user to select option
    int option;
    std::cout << "====== Select the option ====== " << std::endl;
    std::cout << "======    Type in 1-6    ====== " << std::endl;
    std::cin >> option;
    return option;
}

void MerkelMain::printHelp()
{
    std::cout
        << "Selected option is 1: Help" << std::endl;
    std::cout << "Help - Your aim is to make money.Analyse the market and make bids and offers." << std::endl;
}

void MerkelMain::printMarketStats()
{
    std::cout << "OrderBook contains : " << orders.size() << " entries" << std::endl;
}

void MerkelMain::enterOffer()
{
    std::cout << "Selected option is 3: Make an offer" << std::endl;
    std::cout << "Make an offer - enter the amount" << std::endl;
}

void MerkelMain::enterBid()
{
    std::cout << "Selected option is 4: Make a bid" << std::endl;
    std::cout << "Make a bid - enter the amount" << std::endl;
}

void MerkelMain::printWallet()
{
    std::cout << "Selected option is 5: Print wallet" << std::endl;
    std::cout << "Your wallet is empty." << std::endl;
}

void MerkelMain::gotoNextTimeframe()
{
    std::cout << "Selected option is 6: Continue" << std::endl;
    std::cout << "Going to next time frame. " << std::endl;
}

void MerkelMain::processUserOption(int userOption)
{
    // Check the input and print the result
    if (userOption == 1)
    {
        printHelp();
    }
    else if (userOption == 2)
    {
        printMarketStats();
    }
    else if (userOption == 3)
    {
        enterOffer();
    }
    else if (userOption == 4)
    {
        enterBid();
    }
    else if (userOption == 5)
    {
        printWallet();
    }
    else if (userOption == 6)
    {
        gotoNextTimeframe();
    }
    else
    {
        std::cout << "You selected invalid option!Choose 1-6" << std::endl;
    }
}
#ifndef ALLSELFMADE_H
#define ALLSELFMADE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include <stdlib.h>
#include <string.h>
#include <vector>


class Data
{
public:
    std::string Item;
    int Much;
    std::string Place;
};

class Storage
{
protected:
    //Data items[9999];
    //int NumberOfAllPositions;
public:
    Data items[1000];
    int NumberOfAllPositions;
    Storage()
    {
        NumberOfAllPositions = 0;
    }
    std::string searchObject(std::string ImSearchingFor);
    std::string searchLocation(std::string ImSearchingFor);
    std::string showLocation();
    std::string showObject();
    std::string showRawObject();
    std::string showObject(int NumberOfAllPositions);
    void addObject(std::string ObjectSwitch, std::string LocationSwitch, int QuantitySwitch);
    void substractObject(std::string ObjectSwitch, std::string LocationSwitch, int QuantitySwitch);
    void createObject(std::string ObjectSwitch, std::string LocationSwitch, int QuantitySwitch);
    void saveStorage();
};

#endif // ALLSELFMADE_H

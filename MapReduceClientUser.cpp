//
// Created by shaked571 on 5/6/17.
//
#include <iostream>
#include "MapReduceClient.h"

class SubStringKey :public k1Base{
    SubStringKey(std::string name):subString(name)
    {}

    ~FolderNameKey(){}

    std::string getSubString(){
        return subString;
    }
    bool operator<(const k1Base &other) const {
        SubStringKey otherIns = (const SubStringKey&) other;

        return this->subString < otherIns.getSubString();
    }

private:
    std::string subString;
};


class FolderNameKey: public v1Base{
    FolderNameKey(std::string name): folderName(name)
    {}
    std::string getFoloderName(){
        return folderName;
    }
    
private:
    std::string folderName;

};

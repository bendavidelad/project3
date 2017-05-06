//
// Created by shaked571 on 5/6/17.
//
#include <iostream>
#include "MapReduceClient.h"

class FolderNameKey :public k1Base{
    FolderNameKey(std::string name):folderName(name)
    {}

    ~FolderNameKey(){}

    std::string getFolerName(){
        return folderName;//ddd
    }
    bool operator<(const k1Base &other) const {
        FolderNameKey otherIns = (const FolderNameKey&) other;

        return this->folderName < otherIns.getFolerName();
    }

private:
    std::string folderName;
};

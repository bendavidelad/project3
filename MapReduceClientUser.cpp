//
// Created by shaked571 on 5/6/17.
//
#include <iostream>
#include "MapReduceClient.h"

class FolderNameKey :public k1Base{
    FolderNameKey(std::string name):folderName(name)
    {}

    ~FolderNameKey(){
    }
    bool operator<(const k1Base &other) {
//        int length = max(folderName.length();
//        for()
        return true;
    }

public:
    std::string folderName;
};

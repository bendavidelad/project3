
// Created by shaked571 on 5/6/17.
//
#include <iostream>
#include "MapReduceClient.h"

class SubStringKey :public k1Base{
public:
    SubStringKey(std::string name);

    ~FolderNameKey();

    std::string getSubString();

    bool operator<(const k1Base &other) const;

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

class FileName:public k2Base{
public:
    FileName(std::string name);

    ~FileName();

    std::string getFileName();

    bool operator<(const k2Base &other) const;


private:
    std::string fileName;

};

class oneClass: public v2Base{
public:
    oneClass();

    ~oneClass();

    int getOne();

private:
    int val = 1;
};

class FileNameReduce: public 
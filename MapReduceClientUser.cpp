
#include <iostream>
#include "MapReduceClient.h"
#include "MapReduceClientUser.h"

<<<<<<< HEAD
class SubStringKey :public k1Base{
public:
    SubStringKey(std::string name):subString(name)
    {}
=======
>>>>>>> d95ecf80816173519c268cd0ee16e87d3e6a0255

/**
 *
 * SubStringKey class
 * #####################################################################################
 */

SubStringKey::SubStringKey(std::string name):subString(name){}

std::string SubStringKey::getSubString(){
    return subString;
}
bool SubStringKey::operator<(const k1Base &other) const {
    SubStringKey otherIns = (const SubStringKey&) other;

    return this->subString < otherIns.getSubString();
    }

SubStringKey::~SubStringKey() {

}

<<<<<<< HEAD
class FolderNameKey: public v1Base{
public:
    FolderNameKey(std::string name): folderName(name)
    {}
    std::string getFoloderName(){
        return folderName;
    }
    
private:
    std::string folderName;
=======
>>>>>>> d95ecf80816173519c268cd0ee16e87d3e6a0255



/**
 *
 * FolderNameKey class
 * #####################################################################################
 */
//constructor
FolderNameKey::FolderNameKey(std::string name): folderName(name) {}

std::string FolderNameKey::getFolderName(){
    return folderName;
}


/**
 *
 * oneClass class
 * #####################################################################################
 */
int oneClass::getOne() {
    return val;
}

oneClass::~oneClass() {
}

oneClass::oneClass() {
}



/**
 *
 * FileName class
 * #####################################################################################
 */
FileName::FileName(std::string name) {

}
FileName::~FileName(){

}
std::string FileName::getFileName() {
    return fileName;
}

bool FileName::operator<(const k2Base &other) const {
    FileName otherIns = (const FileName&) other;

    return this->fileName < otherIns.getFileName();
}


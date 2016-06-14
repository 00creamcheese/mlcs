#pragma once
#include <map>
#include <string>

enum QuantityUnit {
    UNIT_RAW=0,UNIT_POUNDS=1,UNIT_OUNCES=2
};

enum ResourceId {
    RESOURCE_NULL=0,RESOURCE_SING_LOB=1,RESOURCE_2LB_LOB=2,
    RESOURCE_LOB_MEAT=3,RESOURCE_LOB_MAC=4,RESOURCE_LOB_RISOTTO=5,
    RESOURCE_BK_ST_CLAM=6,RESOURCE_CHOWDER=7,RESOURCE_HADDOCK=8,
    RESOURCE_SWORDFISH=9,RESOURCE_SALMON=10,RESOURCE_CHARR=11,
    RESOURCE_HALIBUT=12,RESOURCE_NY_STRIP=13,RESOURCE_FILET_MIGNON=14,
    RESOURCE_BURGER=15,RESOURCE_HOT_DOG=16,RESOURCE_FRENCH_FRY=17,
    RESOURCE_FRYING_CLAM=18,RESOURCE_FRYING_OYSTER=19,RESOURCE_ONION_RING=20,
    RESOURCE_MAINE_SHRIMP=21,RESOURCE_JUMBO_SHRIMP=22
};

class QuantityDescriptor
{
public:
    QuantityDescriptor() { this->fQuantityRaw = -1.0f; };
    QuantityDescriptor(float const quantityRaw) { this->fQuantityRaw = quantityRaw; };
    
    bool quantityIsTangible(void) { return this->fQuantityRaw > 0.01f; };
    float getQuantityIn(QuantityUnit const unit)
    {
        //todo
    };
    std::string getRawUnit(void)
    {
        //todo
    };
private:
    float fQuantityRaw;
};

class CStock
{
public:
    CStock() {};
    ~CStock() {};
private:
    std::map<ResourceId,QuantityDescriptor> stock;
};

std::string const &getResourceLongName(ResourceId const id);
std::string const &getResourceNickname(ResourceId const id);
#include "Restaurant.hxx"

std::string const &getResourceLongName(ResourceId const id)
{
    std::string static const longNames[] = {
        "Null Resource",
        "1-1/4 lb Lobster",
        "2 lb Lobster",
        "Lobster Meat",
        "Lobster Mac & Cheese",
        "Lobster Risotto",
        "Baked Stuffed Clam",
        "Chowder",
        "Haddock Filet",
        "Swordfish Filet",
        "Salmon Filet",
        "Charr Filet",
        "Halibut Filet",
        "New York Strip",
        "Filet Mignon",
        "Burger",
        "Hot Dog",
        "French Fry",
        "Frying Clam",
        "Frying Oyster",
        "Onion Ring",
        "Maine Shrimp",
        "Jumbo Shrimp"
    };
    return longNames[id];
}

std::string const &getResourceNickname(ResourceId const id)
{
    std::string static const shortNames[] = {
        "null",
        "sing_lob",
        "2lb_lob",
        "lobmeat",
        "lobmac",
        "risotto",
        "bkstclam",
        "chowder",
        "haddock",
        "sword",
        "salmon",
        "charr",
        "halibut",
        "nystrip",
        "filet",
        "burger",
        "hotdog",
        "fry",
        "clam",
        "oyster",
        "oring",
        "meshrimp",
        "jumboshrimp"
    };
    return shortNames[id];
}
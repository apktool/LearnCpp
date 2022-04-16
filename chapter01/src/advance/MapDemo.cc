//
// Created by li on 4/26/22.
//

#include "MapDemo.h"

void printI(std::map<std::string, int> &map) {
    for (std::map<std::string, int>::iterator it = map.begin(); it != map.end(); it++) {
        std::cout << "<" << it->first << ", " << it->second << ">" << std::endl;
    }
}

void printA(const std::map<std::string, int> &map) {
    for (std::pair<std::string, int> item: map) {
        std::cout << "<" << item.first << ", " << item.second << ">" << std::endl;
    }
}

void printM(const std::multimap<std::string, int> &map) {
    for (std::pair<std::string, int> item: map) {
        std::cout << "<" << item.first << ", " << item.second << ">" << std::endl;
    }
}

void MapDemo::testBasic() {
    std::map<std::string, int> map1;
    map1.insert(std::pair<std::string, int>("a", 1));
    map1.insert(std::pair<std::string, int>("b", 2));
    map1.insert(std::make_pair("c", 3));
    map1.insert(std::make_pair("d", 4));
    map1.insert(std::map<std::string, int>::value_type("e", 5));
    map1.insert(std::map<std::string, int>::value_type("f", 6));
    map1["g"] = 7;
    map1["h"] = 8;

    printI(map1);

    // ----------------------

    std::cout << "map: empty " << map1.empty() << ", size " << map1.size() << std::endl;

    map1.erase("h");
    printA(map1);

    map1.erase(++map1.begin(), map1.end());
    printA(map1);

    // ----------------------

    std::map<std::string, int, MapCompare> map2;
    map2.insert(std::pair<std::string, int>("a", 1));
    map2.insert(std::make_pair("c", 3));
    map2["a"] = 8;
    for (auto &item: map2) {
        std::cout << "<" << item.first << ", " << item.second << ">" << std::endl;
    }

    std::cout << "map['a'] = " << map2["a"] << std::endl;
    std::cout << "map.find('a') = " << map2.find("a")->second << std::endl;
    std::cout << "map.count('a') = " << map2.count("a") << std::endl;

    // ----------------------

    std::multimap<std::string, int> map3;
    map3.insert(std::make_pair("a", 1));
    map3.insert(std::make_pair("b", 2));
    map3.insert(std::make_pair("a", 2));
    printM(map3);
}
//
// Created by li on 4/16/22.
//

#include "FileDemo.h"

void FileDemo::write(std::string filename) {
    std::ofstream ofs;

    ofs.open(filename, std::ios::out);
    ofs << "name: li" << std::endl;
    ofs << "sex: male" << std::endl;
    ofs << "age: 18" << std::endl;

    ofs.close();
}

void FileDemo::read(std::string filename) {
    std::ifstream ifs;

    ifs.open(filename, std::ios::in);

    if (!ifs.is_open()) {
        std::cout << "File Open Filed" << std::endl;
        return;
    }

    std::string buffer;
    while (getline(ifs, buffer)) {
        this->content += buffer;
    }

    ifs.close();

    std::cout << this->content << std::endl;
}

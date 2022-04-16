//
// Created by li on 4/10/22.
//

#include "StructDemo.h"

void StructDemo::testStruct1() {
    Student stu1;
    stu1.id = 1;
    stu1.name = "li";
    stu1.age = 18;
    std::cout << "id:" << stu1.id << "; name:" << stu1.name << "; age:" << stu1.age << std::endl;

    Student stu2 = {2, "wang", 30};
    std::cout << "id:" << stu2.id << "; name:" << stu2.name << "; age:" << stu2.age << std::endl;
}

void StructDemo::testStruct2() {
    struct Teacher {
        int id;
        std::string name;
        int age;
    } teacher1, teacher2;

    teacher1.id = 1;
    teacher1.name = "li";
    teacher1.age = 18;
    std::cout << "id:" << teacher1.id << "; name:" << teacher1.name << "; age:" << teacher1.age << std::endl;

    teacher2 = {2, "wang", 30};
    std::cout << "id:" << teacher2.id << "; name:" << teacher2.name << "; age:" << teacher2.age << std::endl;
}

void StructDemo::testStructArray() {
    Student stus[] = {
            {1, "li",   18},
            {2, "wang", 30}
    };

    for (Student stu: stus) {
        std::cout << "id:" << stu.id << "; name:" << stu.name << "; age:" << stu.age << std::endl;
    }
}

void StructDemo::testStructPoint() {
    Student stu = {1, "li", 18};

    Student *p = &stu;
    std::cout << "id:" << (*p).id << "; name:" << (*p).name << "; age:" << (*p).age << std::endl;
    std::cout << "id:" << p->id << "; name:" << p->name << "; age:" << p->age << std::endl;
}

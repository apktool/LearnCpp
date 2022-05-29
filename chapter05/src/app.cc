//
// Created by li on 5/14/22.
//

#include "app.h"

int main(int argc, char* argv[]) {
  dt::Config config;
  std::cout << config.kAuthor << std::endl;

  dt::Database db;
  db.id = 1;
  db.name = "db_test";
  std::cout << db.id << ": " << db.name << std::endl;

  dt::Table table;
  table.id = 1;
  table.name = "table_test";
  std::cout << table.id << ": " << table.name;
  return 0;
}
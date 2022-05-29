//
// Created by li on 5/14/22.
//

#include "database_test.h"

namespace dt {
class DataBaseTest : public testing::Test {
 public:
  DataBaseTest() = default;
  MockDatabase mock_database_;

 protected:
  void SetUp() override {
    MockDatabase::Builder* builder = new MockDatabase::Builder();
    mock_database_ = builder->SetId(1)->SetName("db1")->Build();
  }
};

TEST_F(DataBaseTest, DataBaseConstruct) {
  uint64_t id = mock_database_.id_;
  std::string name = mock_database_.name_;

  Database db;
  db.id = id;
  db.name = name;

  EXPECT_EQ(1, db.id);
  EXPECT_EQ("db1", db.name);
}
}
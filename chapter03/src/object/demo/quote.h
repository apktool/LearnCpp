#include <iostream>
#include <string>

class Quote {
public:
  Quote() = default;

  Quote(const std::string &book_no, double price)
      : book_no_(book_no), price(price) {}

  std::string isbn() const { return book_no_; }

  virtual double NetPrice(std::size_t n) const { return n * price; }

  virtual ~Quote() = default;

protected:
  double price = 0.0;

private:
  std::string book_no_;
};

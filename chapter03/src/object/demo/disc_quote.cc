#include "disc_quote.h"

DiscQuote::DiscQuote(const std::string &book_no, double price, size_t quantity,
                     double discount)
    : Quote(book_no, price), quantity(quantity), discount(discount) {}

double DiscQuote::NetPrice(std::size_t cnt) const {
  if (quantity >= 50) {
    return cnt * (1 - discount) * price;
  } else {
    return cnt * price;
  }
}
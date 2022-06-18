#include "quote.h"

class DiscQuote : public Quote {
public:
  DiscQuote(const std::string &book_no, double price, size_t quantity,
            double discount);

  ~DiscQuote() override = default;

  double NetPrice(std::size_t n) const override;

protected:
  std::size_t quantity = 0;
  double discount = 0.0;
};

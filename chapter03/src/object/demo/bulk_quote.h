#include "disc_quote.h"

class BulkQuote : public DiscQuote {
public:
  BulkQuote(const std::string &, double, size_t, double);

  ~BulkQuote() override = default;

  double NetPrice(std::size_t n) const override;
};

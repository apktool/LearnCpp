#include "bulk_quote.h"

BulkQuote::BulkQuote(const std::string &book, double p, size_t qty, double disc)
    : DiscQuote(book, p, qty, disc) {}

double BulkQuote::NetPrice(std::size_t cnt) const { return 0.0; }

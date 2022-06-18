#include "demo/bulk_quote.h"
#include "inheritance/alpha.h"

int main(int argc, char *argv[]) {
  Quote *quote1 = new DiscQuote("Book01", 9.9, 50, 8.9);
  std::cout << quote1->isbn() << " : " << quote1->NetPrice(11) << std::endl;
  delete quote1;

  Quote *quote2 = new BulkQuote("Book02", 9.9, 50, 8.9);
  std::cout << quote2->isbn() << " : " << quote2->NetPrice(11) << std::endl;
  delete quote2;

  std::cout << "------ " << "public" << "---------" << std::endl;
  PublicDerived public_derived;
  public_derived.test();
  public_derived.PrintPublic();
  // public_derived.printProtect();

  std::cout << "------ " << "protect" << "---------" << std::endl;
  ProtectedDerived protected_derived;
  protected_derived.test();
  // protected_derived.PrintPublic();
  // protected_derived.PrintProtect();
  // protected_derived.printProtect();

  std::cout << "------ " << "private" << "---------" << std::endl;
  PrivateDerived private_derived;
  private_derived.test();
  // private_derived.PrintPublic();
  // private_derived.PrintProtect();
  // private_derived.PrintPrivate();

  std::cout << "------ " << "public" << "---------" << std::endl;
  AlphaA alpha_a;
  alpha_a.exec();
  alpha_a.PrintPublic();
  // alpha_a.PrintProtect();
  // alpha_a.printPrivate();

  std::cout << "------ " << "protect" << "---------" << std::endl;
  AlphaB alpha_b;
  alpha_b.exec();
  // alpha_b.PrintPublic();
  // alpha_b.PrintProtect();
  // alpha_b.printPrivate();

  std::cout << "------ " << "private" << "---------" << std::endl;
  AlphaC alpha_c;
  alpha_c.exec();
  // alpha_c.PrintPublic();
  // alpha_c.PrintProtect();
  // alpha_c.printPrivate();
}

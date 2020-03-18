#ifndef DEALER_H
#define DEALER_H

class Dealer
{
  public:
    Dealer(Deck deck);
    void dealCards();
    void dealChips();
    bool gameResult(bool playerWin);

  private:
    bool playerWin;
};

#endif

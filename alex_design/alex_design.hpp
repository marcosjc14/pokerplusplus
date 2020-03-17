#ifndef ALEX_DESIGN_HPP
#define ALEX_DESIGN_HPP

#include <cstdio>
#include <cstdlib>

class dealer
{
  public:
    dealer();
    ~dealer();
    void dealCards(int cardValues[], int aceValues[]);
    void dealChips(int chipValues[]);
    int gameResult(int win, int lose);
    void check();
    void bet();
    void raise();
    void call();
    void fold();

  private:
    int cardValues[12];
    int aceValues[2];
    int chipValues[3];
    int win;
    int lose;
};

class pot
{
  public:
    pot();
    ~pot();
    int addToPot(int potValue);

  private:
    int potValue;
};

class round
{
  public:
    round();
    ~round();
  private:

};

#endif

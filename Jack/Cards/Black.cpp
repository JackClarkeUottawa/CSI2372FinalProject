
class Black : public Card {
  int getCardsPerCoin(int coins) {
    if (coins == 0) {
      return 0;
    } else if (coins == 1) {
      return 2;
    } else if (coins == 2) {
      return 4;
    } else if (coins == 3) {
      return 5;
    } else if (coins == 4) {
      return 6;
    }
   
      return -1;
   
  }
  string getName() { return "Black"; }

  void print(ostream &out) { out << "b"; }
};
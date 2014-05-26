my idea:
class card{
   suit: spade, heart, diamond, club; 
   rank: //A,2,...J,Q,K,not specific,J,Q,K is counted as 10 in blackjack;
   bool available=true;
   public:
	int getValue(){
	    return rank;
	}
   	bool isAvailable(){return available}
        void markAvailable(){ available=true;}
        void markUnavailable(){ available=false;}
};
class deck:card{
   array<card,52> cards;	
   int dealtindex=0;
   public:
	void shffle(){...}
        int remainingCards(){
	    return cards.size()-dealtIndex;
	};
};
class hand:card{
   public:
	int score(){ add card.rank;}
	void addCard(card){cards.add(add);}
};
class BlackJack:hand{
   public:
	int score(){
	    ...
	}
        bool busted(){return score()>21;}
        bool is21(){return score()==21;}
        bool isBackJack(){one Ace and one 10};
};

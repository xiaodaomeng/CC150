jukebox:自动唱机
class song{
   song details
};
class playlist{
   queue<song> q;
   public:
   	song getnextsong(){q.top();}
 	void addnewsong(song s){q.push(s);}
        void deletefunction();
 	void shuffle();//how to achieve shuffle in queue
        void songselector();
};
class jukebox{
   public:
   	  song playcurrentsong(){...}
};
may add User information


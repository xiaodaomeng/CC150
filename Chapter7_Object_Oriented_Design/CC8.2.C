base class employee{
   Call currentCall=null;
   public:
        void receiveCall(){...}
	void callCompledted(){...}
	void escalatedAndReassign(){...}
        bool assignNewCall(){...}
        bool isFree(){return currentCall==null;}
	Rank getRank(){...}
};
class respondent/manager/director:employee{
   public:
    	Respondent(){
	   return Rank.Responder;
	}
};
class callHandler{
   list total numbers for three level people;
   //list level;
   list<list<employee>> employeeLevels 
   create a queue for recording people ranking based on calls
   public:
	Employee GetHandlerForCall(Call call){...}
        void dispatchCall(Caller caller){
	   Call call = new 
	   dispatchCall(call);
	}
        void dispatchCall(Caller call){
	   Employee emp =getHandlerForCall(call);
	   if(emp!=null){
		emp.receiveCall(call);
	   	call.setHandler(emp);
	   }else{
		call in the queue according to the rank
	   }
 	}      
};
class Call{
   //a call from caller
   Rank rank;
   Caller caller;
   Employee handler;
   public:
   	void call(Caller c){
	     rank = Rank.Responder;
             caller = c;
	}
        void setHandler(Employee e){...}
        void setRank(){...}
        Rank getRank(){...}
 	Rank incrementRank(){...}
 	void disconnect(){...}
};

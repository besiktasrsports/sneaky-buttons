class Constants{
public:

  const int button1 = 2;
  const int button2 = 3;
  const int button3 = 4;
  const int button4 = 5;
  const int button5 = 6;
  const int button6 = 7;
  const int button7 = 8;
  const int button8 = 9;
  const int button9 = 10;
  const int button10 = 11;
  const int button11 = 12;
  const int button12 = 13;
  const int button13 = A0;
  const int button14 = A1;
  const int button15 = A2;


  int getButton(int buttonNumber){
      return (buttonNumber-1);
      }

    
  int getButtonPin(int buttonNumber){
    if(buttonNumber > 15 || buttonNumber == 0){
      
      return 0;
    }
    else{
      
      return (1+buttonNumber);
    
    }
  }
    
  
  void setupButtons(){
    for(int i = 2;i<17;i++){
      pinMode(i,INPUT_PULLUP);
    }
  }
};

// anodo 38 a 53
// catodo 2 a 5

int anodo = 38;
int catodo = 2;

void setup() {
   for(int i=0; i<4; i++){
    pinMode(catodo, OUTPUT);
    catodo += 1;
   }
   for(int i=0; i<16; i++){
    pinMode(anodo, OUTPUT);
    anodo += 1;
   }
}

void loop() {

//--------------Gr�fico 1----------------

  for(int c=0; c<3; c++){
  anodo = 38;
  catodo = 2;
    for(int i=0; i<4; i++){
      for(int j=0; j<4; j++){
        digitalWrite(catodo, HIGH);
        digitalWrite(catodo+1, HIGH);
        digitalWrite(catodo+2, HIGH);
        digitalWrite(catodo+3, HIGH);
        digitalWrite(anodo, HIGH);    
        delay(50);
        digitalWrite(anodo, LOW);
        delay(50);
        anodo += 1;
        }
      }
  }
anodo = 38;
catodo = 2;
//--------------Gr�fico 1----------------

//--------------Gr�fico 2----------------

  for(int d=0; d<8; d++){
    int r = rand()%15;
    for(int i=0; i<4; i++){
      digitalWrite(catodo+i, HIGH);
      digitalWrite(r+38, HIGH);
      delay(200);
      digitalWrite(catodo+i, LOW);
    }
    digitalWrite(r+38, LOW);
  }

//--------------Gr�fico 2----------------

//--------------Gr�fico 3----------------

  for(int i=0; i<16; i++){
    int r1 = rand()%15;
    int r2 = rand()%15;
    int r3 = rand()%15;
    int rc = rand()%4;
  
      digitalWrite(rc+2, HIGH);
      digitalWrite(r1+38, HIGH);
      digitalWrite(r2+38, HIGH);
      digitalWrite(r3+38, HIGH);
      
      delay(400);
  }
  
//--------------Gr�fico 3----------------

//--------------Gr�fico 4----------------

  for(int j=0; j<15; j++){
    for(int i=0; i<4; i++){
      digitalWrite(catodo+i, HIGH);
    }  
    for(int i=0; i<16; i++){
      digitalWrite(anodo+i, HIGH);
    }
    delay(50);
    for(int i=0; i<16; i++){
      digitalWrite(anodo+i, LOW);
    }    
    for(int i=0; i<4; i++){
      digitalWrite(catodo+i, LOW);
    }  
  delay(50);
  }

//--------------Gr�fico 4----------------

//--------------Gr�fico 5----------------

  for(int x=0; x<4; x++){
    
    for(int c=0; c<16; c+=4){
      for(int i=0; i<4; i++){
        digitalWrite(catodo, HIGH);
        digitalWrite(anodo+i+c, HIGH);
        }
        delay(100);
        for(int i=0; i<4; i++){
        digitalWrite(anodo+i+c, LOW);
        }
    }
    digitalWrite(catodo, LOW);
    
//-------
  
    for(int c=1; c<4; c++){
      for(int i=0; i<4; i++){
        digitalWrite(catodo+c, HIGH);
        digitalWrite(anodo+i+16-4, HIGH);
      }
      delay(100);
      digitalWrite(catodo+c, LOW);
    }
        for(int i=0; i<4; i++){
        digitalWrite(anodo+i+16-4, LOW);
      }
    delay(100);
    
//-------
  
    for(int c=12; c>0; c-=4){
      for(int i=0; i<4; i++){
        digitalWrite(catodo+3, HIGH);
        digitalWrite(anodo+i+c-4, HIGH);
      }
      delay(100);
      for(int i=0; i<4; i++){
        digitalWrite(anodo+i+c-4, LOW);
      }
    }
    digitalWrite(catodo+3, LOW);
    
//-------
  
    for(int c=2; c>0; c--){
      for(int i=0; i<4; i++){
        digitalWrite(catodo+c, HIGH);
        digitalWrite(anodo+i, HIGH);
      }
      delay(100);
      digitalWrite(catodo+c, LOW);
    }
        for(int i=0; i<4; i++){
        digitalWrite(anodo+i, LOW);
      }
    delay(100);    
  }
  
//--------------Gr�fico 5----------------

    
}

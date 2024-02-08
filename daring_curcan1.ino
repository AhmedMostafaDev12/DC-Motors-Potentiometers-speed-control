
int frompotR = A1;
int frompotL =A0;

int motorR = 9;
int motorL =3;

int slideR= 4;
int slideL = 2;

int topotR= 6;
int topotL = 5;
int Lreading=0;
int Rreading=0;
//char ser ='o' ;
void setup()
{ Serial.begin(9600);
  pinMode(frompotR,INPUT);
  pinMode(frompotL,INPUT);
  pinMode(motorR,OUTPUT);
 pinMode(motorL,OUTPUT);
 pinMode(slideR,INPUT);
  pinMode(slideL,INPUT);
 pinMode(topotR,OUTPUT);
  pinMode(topotL,OUTPUT);
}

void loop()
{Rreading = digitalRead(slideR);
 if(Rreading == 1)
 {digitalWrite(topotR,1);
  analogWrite(motorR,analogRead(frompotR));}
    else
  {analogWrite(motorR,0);}
 

Lreading = digitalRead(slideL);
 if(Lreading == 1)
 {digitalWrite(topotL,1);
  analogWrite(motorL,analogRead(frompotL));}
    else
  {analogWrite(motorL,0);}
 


 
  
}
  
int potA=A0;
int potB=A1;
int potC=A2;
int kirmizi=3;
int yesil=4;
int mavi=6;
int degerA,degerB,degerC;
void setup() {
pinMode(potA,INPUT);
pinMode(potB,INPUT);
pinMode(potC,INPUT);
pinMode(kirmizi,OUTPUT);
pinMode(yesil,OUTPUT);
pinMode(mavi,OUTPUT);
}
void loop() {
degerA=analogRead(potA);
degerB=analogRead(potB);
degerC=analogRead(potC);
degerA=map(degerA,0,1023,0,255);
degerB=map(degerB,0,1023,0,255);
degerC=map(degerC,0,1023,0,255);
analogWrite(kirmizi,degerA);
analogWrite(yesil,degerB);
analogWrite(mavi,degerC);
}

 int Tinaco_lleno = 5;
 int Cisterna = 6;
 int Bomba = 7; 

void setup() {
   pinMode (Tinaco_lleno,INPUT);
   pinMode (Cisterna,INPUT);
   pinMode (Bomba,OUTPUT);
}

void loop() {
   if(digitalRead(Cisterna)==HIGH){
     if(digitalRead(Tinaco_lleno)==LOW){
        digitalWrite (Bomba,HIGH);
        }
      else if (digitalRead(Tinaco_lleno)==HIGH){
        digitalWrite (Bomba,LOW);
      }
   }else digitalWrite (Bomba,LOW);

}

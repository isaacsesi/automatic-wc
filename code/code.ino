int firstSeatMotor;
int secondSeatMotor;

int motionSensor;
int IRSensor;

int previousMillis = 0;

unsigned long previousMillis = 0; 
int currentMillis;

const int INTERVAL =  60000;
byte raiseFirstSeatFlag = 0;

void raiseFirstSeat();
void raiseSecondSeat();
void lowerFirstSeat();
void lowerSecondSeat();

void setup(){
	pinMode(firstSeatMotor, OUTPUT);
	pinMode(secondSeatMotor, OUTPUT);
	pinMode(motionSensor, INPUT);
	pinMode(IRSensor, INPUT);
}

void loop(){
	int occupantStatus = digitalRead(motionSensor);
	int IRSensorTriggered = digitalRead(IRSensor);
	if(occupantStatus==HIGH){
		raiseFirstSeat();
		unsigned long currentMillis = millis()
		 if (currentMillis - previousMillis >= interval) {
    
    previousMillis = currentMillis;

	}

	if(raiseFirstSeatFlag==1 && IRSensorTriggered==HIGH)
		raiseSecondSeat();


}

void raiseFirstSeat(){

}

void raiseSecondSeat(){

}

void lowerFirstSeat(){

}

void lowerSecondSeat(){
	
}
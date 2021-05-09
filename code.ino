int led = D6;


void setup() {
    pinMode(led, OUTPUT);
    digitalWrite(led, LOW);
    Particle.subscribe("fakeEvent",blink);
    
    digitalWrite(led, HIGH);
    delay(1000);
    digitalWrite(led, LOW);
    
}

void loop() {
    
}


void blink(const char *event, const char *data){

    if(strcmp(data, "wave") == 0){
        for(int i = 0 ; i<3 ; i++)
        {
            digitalWrite(led, HIGH);
            delay(1000);
            digitalWrite(led, LOW);
            delay(500);
        }
    }
    if(strcmp(data,"pat")==0){    
        for(int i = 0 ; i<4 ; i++)
        {
            digitalWrite(led, HIGH);
            delay(250);
            digitalWrite(led, LOW);
            delay(250);
        }
    }
}
    

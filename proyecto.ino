
int motor_A = 12;
int motor_B = 13;

int motor_A_speed = 10;
int motor_B_speed = 11;

int wait_in_milliseconds = 1000;

void forward(){
    digitalWrite(motor_A, LOW);
    digitalWrite(motor_B, HIGH);

    analogWrite(motor_A_speed, 255);
    analogWrite(motor_B_speed, 255);

    delay(wait_in_milliseconds);

    analogWrite(motor_A_speed, 0);
    analogWrite(motor_B_speed, 0);
}

void setup(){
pinMode(motor_A, OUTPUT);
pinMode(motor_B, OUTPUT);
}

void loop(){
forward();
delay(1000);
}
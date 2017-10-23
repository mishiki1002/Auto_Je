#include <Encoder.h>        // Find out how far we moved
#include "NAxisMotion.h"    // Contains the bridge code between the API and the Arduino Enviorment
#include <Wire.h>           // Controll the drive motors manually
#include <Servo.h>          // Controll the steering wheel with the built in encoder
#include <SPI.h>            

// Gyro
NAxisMotion gyro;

// Encoder Connection Pins
int encoder_Left = NULL;
int encoder_Right = NULL;

// Find out if we want to have both motors move unanimously or if 
// We want independent motion for quick turns and such
int Drive_Train_Pin = NULL;
int Steering_Wheel_Pin = NULL;
int Distance_Sensor_Pin = NULL:

// Motor Definitions
Servo Chassis;
Servo Steering_Wheel;
Servo Distance_Sensor;


// Some Steering Wheel Values
int RightTurn = 96;
int LeftTurn = 72;

int Max_Right = 150;
int Home = 90;
int Max_Left = 35;

// Some Drive Speeds
int Stop = 90;
int Full_Forward = 180;
int FUll_Backwards = 8;

// LED Pins
int Head_Lights = NULL;
int Tail_Lights = NULL;

/* Tasks
 * Look at the pamphlict to see all the tasks.
 */
int Task = NULL;


void setup(){
    Serial.begin(9600); // Begin our communications on a channel with baudrate of 9600
    Serial.println("#### Serial Comunications Initialized ####");

    // Connect The LED's to their pins and set it as a output
    Serial.println("Setup : Connecting LED's");
    pinMode(Head_Lights, OUTPUT);
    pinMode(Tail_Lights, OUTPUT);
    
    // Turn all the lights on to signal the startup Proccess
    Serial.println("Setup : Turning LEDS's On");
    digitalWrite(Head_Lights, HIGH);
    digitalWrite(Tail_Lights, HIGH);
    
    // Connect Our Drive Train
    Serial.println("Setup : Connecting Chassis to pin [" + Drive_Train_Pin + "]"); 
    Chassis.attach(Drive_Train_Pin);
    Serial.println("Setup : Connecting Steering Wheel to pin [" + Steering_Wheel_Pin + "] with update rates of [700] and [2300]");
    Steering_Wheel.attach(Steering_Wheel_Pin, 700, 2300); // Connect our Servo but we are going to predefine the update rate
    
    
    // Delay 3 seconds before running main loop.
    // Shortten or remove when debugging or testing new code
    delay(3000);
}

void loop(){
    int laps = 1;
    while(laps == 1){
        
}

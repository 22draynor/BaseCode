#include "FastLED.h"

        // Defining variables and information that remains constant throughout the code.                                -- Main Variables and Information
#define NUM_LEDS 45        // Number of Leds in the strip.       
#define LED_TYPE WS2811   // The type of Led strip.
#define DATA_PIN 6        // The numeber of the data pin the strip is run from.
#define BRIGHTNESS 120

        // Structuring all of the led strips, different strips will require a new structure.                            -- Led Structuring
struct CRGB leds[NUM_LEDS];

        // Defining the pins used to collect data.                                                                      -- Defining Data Pins
              // -- Analog pins are used for collecting data from an analog input.
const int PinSignal = A0; 
              // -- digital pins are used for searching for pin signals, they are tied high and low.
              
              

        // Defining integers and variables that will will be used / change with the code.                               -- Integers and Variables
              // -- Unsigned integers keep their data when the code cycles.
              // -- Integers do not have to be single letters.
              // -- I use letters that would not commonly be used to prevent errors when writing small functions.
unsigned long u = 1;
unsigned long v = 1;
unsigned long w = 1;

      // Millis intgers, seperate section to keep code organized.                                                       -- Millis Information
              // -- Different lengths of Millis will generally require manipulation or a new integer.

unsigned long previousMillis = 0;   //allows tracking of millis seconds
              // -- Millis intervals, the time given before executing the code again.


//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


void setup() { 
  
      // Leds must be added after being structured.
  LEDS.addLeds<LED_TYPE, DATA_PIN, GRB>(leds, NUM_LEDS);

      // Limits current, this allows for a safe max brightness protecting the power source
   FastLED.setMaxPowerInVoltsAndMilliamps(5, 1000); // 5V, 1000mA

     // Pins must be set with "pinMode(pin, INPUT_PULLUP);" after beign defined.

   FastLED.clear();    // Clears the strip on color to create a fresh slate.
   delay(2000);        // PowerUp Safety Delay

   FastLED.setBrightness(BRIGHTNESS);

uint8_t gHue = 0; // rotating "base color" used by many of the patterns

}


//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
//@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@


void loop() {

      // Must int the digital pins using "int dpin  = digitalRead(pin);".


FunctionOne();



  FastLED.show();         // Displays the pattern.
}

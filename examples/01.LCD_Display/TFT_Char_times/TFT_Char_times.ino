/*
 Font draw speed and flicker test, draws all numbers 0-999 in each font
 Average time in milliseconds to draw is shown in red
 A total of 2890 characters are drawn in each font
 
 Needs fonts 2, 4, 6, 7 and 8

 Make sure all the display driver and pin comnenctions are correct by
 editting the User_Setup.h file in the TFT_eSPI library folder.

 #########################################################################
 ###### DON'T FORGET TO UPDATE THE User_Setup.h FILE IN THE LIBRARY ######
 #########################################################################
 */


#include <Afantor.h>


unsigned long drawTime = 0;

void setup(void) {

  AF.begin();
  
}

void loop() {

  AF.LCD.fillScreen(TFT_BLACK);
  AF.LCD.setTextColor(TFT_WHITE, TFT_BLACK);

  drawTime = millis();

  for (int i = 0; i < 1000; i++) {
    yield();AF.LCD.drawNumber(i, 100, 80, 1);
  }

  drawTime = millis() - drawTime;

  AF.LCD.setTextColor(TFT_RED, TFT_BLACK);
  int xpos = 20;
  xpos += AF.LCD.drawFloat(drawTime / 2890.0, 3, xpos, 180, 4);
  AF.LCD.drawString(" ms per character", xpos, 180, 4);
  if (drawTime < 100) AF.LCD.drawString("Font 1 not loaded!", 50, 210, 4);
  
  delay(4000);
  AF.LCD.fillScreen(TFT_BLACK);
  AF.LCD.setTextColor(TFT_WHITE, TFT_BLACK);
    drawTime = millis();

  for (int i = 0; i < 1000; i++) {
    yield();AF.LCD.drawNumber(i, 100, 80, 2);
  }

  drawTime = millis() - drawTime;

  AF.LCD.setTextColor(TFT_RED, TFT_BLACK);
  xpos = 20;
  xpos += AF.LCD.drawFloat(drawTime / 2890.0, 3, xpos, 180, 4);
  AF.LCD.drawString(" ms per character", xpos, 180, 4);
  if (drawTime < 200) AF.LCD.drawString("Font 2 not loaded!", 50, 210, 4);
  
  delay(4000);
  AF.LCD.fillScreen(TFT_BLACK);
  AF.LCD.setTextColor(TFT_WHITE, TFT_BLACK);
    drawTime = millis();

  for (int i = 0; i < 1000; i++) {
    yield();AF.LCD.drawNumber(i, 100, 80, 4);
  }

  drawTime = millis() - drawTime;

  AF.LCD.setTextColor(TFT_RED, TFT_BLACK);
  xpos = 20;
  xpos += AF.LCD.drawFloat(drawTime / 2890.0, 3, xpos, 180, 4);
  AF.LCD.drawString(" ms per character", xpos, 180, 4);
  if (drawTime < 200) AF.LCD.drawString("Font 4 not loaded!", 50, 210, 4);
  
  delay(4000);
  AF.LCD.fillScreen(TFT_BLACK);
  AF.LCD.setTextColor(TFT_WHITE, TFT_BLACK);
    drawTime = millis();

  for (int i = 0; i < 1000; i++) {
    yield();AF.LCD.drawNumber(i, 100, 80, 6);
  }

  drawTime = millis() - drawTime;

  AF.LCD.setTextColor(TFT_RED, TFT_BLACK);
  xpos = 20;
  xpos += AF.LCD.drawFloat(drawTime / 2890.0, 3, xpos, 180, 4);
  AF.LCD.drawString(" ms per character", xpos, 180, 4);
  if (drawTime < 200) AF.LCD.drawString("Font 6 not loaded!", 50, 210, 4);
  
  delay(4000);
  AF.LCD.fillScreen(TFT_BLACK);
  AF.LCD.setTextColor(TFT_WHITE, TFT_BLACK);
    drawTime = millis();

  for (int i = 0; i < 1000; i++) {
    yield();AF.LCD.drawNumber(i, 100, 80, 7);
  }

  drawTime = millis() - drawTime;

  AF.LCD.setTextColor(TFT_RED, TFT_BLACK);
  xpos = 20;
  xpos += AF.LCD.drawFloat(drawTime / 2890.0, 3, xpos, 180, 4);
  AF.LCD.drawString(" ms per character", xpos, 180, 4);
  if (drawTime < 200) AF.LCD.drawString("Font 7 not loaded!", 50, 210, 4);
  
  delay(4000);
  AF.LCD.fillScreen(TFT_YELLOW);
  AF.LCD.setTextColor(TFT_WHITE, TFT_BLACK);
    drawTime = millis();

  for (int i = 0; i < 1000; i++) {
    yield();AF.LCD.drawNumber(i, 100, 80, 8);
  }

  drawTime = millis() - drawTime;

  AF.LCD.setTextColor(TFT_RED, TFT_BLACK);
  xpos = 20;
  xpos += AF.LCD.drawFloat(drawTime / 2890.0, 3, xpos, 180, 4);
  AF.LCD.drawString(" ms per character", xpos, 180, 4);
  if (drawTime < 200) AF.LCD.drawString("Font 8 not loaded!", 50, 210, 4);
  
  delay(4000);
}









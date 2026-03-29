#include <LiquidCrystal_I2C.h>
int dados;
int crt=0;
String buf;
float tensao;

 LiquidCrystal_I2C lcd(0x27, 16, 2);
 
void setup()
{
  lcd.init();                     
  lcd.backlight();

 Serial.begin(9600);

}

void loop() 
{
  
 if (Serial.available()>0)
 {
    dados = Serial.read();

      if(dados == 'W')
      {
        crt=0;
        Serial.print('W');
        Serial.print(buf);
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("End");
        lcd.setCursor(0, 1);
        lcd.print(buf);
        buf="";
      }
      
     if(dados =='X')
        {
            tensao = analogRead(15);
            tensao = analogRead(15);
            tensao = tensao/1240.909090909091;
            buf="";
            buf=tensao;
            Serial.flush();
            Serial.print(tensao);
            Serial.flush();
            buf="";
            crt=0;
        }
        
      if(crt==1)
      {
        buf+=char(dados);
        buf.replace(" ", "");
        buf.replace("\n", "");
        buf.replace("'", "");
        
        
          
      }
      
      if(dados == 'Y')
      {
        crt=1;
        Serial.print('Y');
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Begin");
      }

 }
 
}

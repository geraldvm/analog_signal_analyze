# Procesamiento digital de señales
Procesamiento de una señal, eliminando el ruido por medio de un Arduino UNO para el curso de Taller de Diseño Analógico del Lógico  de la carrera Ingeniería en Computadores del Tecnológico de Costa Rica.

# Lectura
## Señal A
Se ingresa un valor de entrada de un voltaje en CD en un rango de entre 100 mV y 1.75 V. Esta tensión, que sería la tensión **A**, es entrega por el sensor de temperatura TMP36 donde 100 mV equivale a -40°C y 1.75 V a 125°C.
## Señal B
La señal **B** correspone al ruido blanco la cuál es una señal en el rango de 0 V a 3.3 V entregado regulado por un potenciómetro de 250 kΩ.


# Circuito 
Se elabora un sistema capaz de eliminar el ruido blanco en una señal y dando como salida la visualización del voltaje limpio en una pantalla LCD.

![Circuito](https://github.com/geraldvm/analog_signal_analyze/blob/main/images/level1.png)

Como se observa en la sigueite figura, el sistema está compuesto de diversas fases, empezado por medio de la recolección de las señales A y B por medio de un ssensor de temperatura y un potenciómetro respectivamente, seguido de una etapa de suma en la que por medio de un amplificador operacional 741 se suman las señales A y B. Para luego pasar a una etapa de elimación de ruido dando como resultado la señal A, para luego analizar el dato obtenido operandolo por el ADC y finalmente ese dato emplearlo como iinsumo en la etapa de impresión de datos en la LCD.

![Circuito](https://github.com/geraldvm/analog_signal_analyze/blob/main/images/level2.png)

Como se observa se emplea un ARDUINO UNO para el procesamiento de datos y control de la pantalla LCD.

![Circuito](https://github.com/geraldvm/analog_signal_analyze/blob/main/images/circuit.png)

# Código
`int AB = A0; //A+B in pin A0
int B = A1;  //B in pin A1
int abValue; //a+b reading value
int bValue;  // b reading value

// include the library code:
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  // initialize all the readings to 0:

}

void loop() {

  temp_measure();
}
 
float read(){
  abValue = analogRead(AB);
  bValue = analogRead(B);
  return abValue - bValue;
}



void temp_measure(){
  float voltage = 5.0 /1024 * read() ;
  float temp = (voltage-0.5) * 100; 
  lcd.setCursor(0, 0);
  lcd.print("Voltage:");
  lcd.setCursor(9, 0);
  lcd.print(voltage);
  lcd.setCursor(14, 0);
  lcd.print("V");
  delay(1);        // delay in between reads for stability
}`

# Simulación
Se empleó la aplicación web de [TINKERCAD](https://www.tinkercad.com/). El circuito simulado se encuentra en el siguiente link:

[https://www.tinkercad.com/things/iU172kKniQ6](https://www.tinkercad.com/things/iU172kKniQ6)


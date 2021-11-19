# Autores
Jonathan Araya Guzmán.

Gerald Valverde Mc kenzie.


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

# Materiales

Lista de materiales:

![Materials](https://github.com/geraldvm/analog_signal_analyze/blob/main/images/materials.PNG)

# Pinout

| Pin | Value      |
|-----|------------|
| A0  | Señal A+B  |
| A1  | Señal B    |
| 2   | LCD D7     |
| 3   | LCD D6     |
| 4   | LCD D5     |
| 5   | LCD D4     |
| 11  | LCD Enable |
| 12  | LCD RS     |


# Código

[Arduino Code](https://github.com/geraldvm/analog_signal_analyze/tree/main/code)

# Simulación
Se empleó la aplicación web de [TINKERCAD](https://www.tinkercad.com/). El circuito simulado se encuentra en el siguiente link:

[https://www.tinkercad.com/things/iU172kKniQ6](https://www.tinkercad.com/things/iU172kKniQ6)

## Ejecución

Para ejecutar el proyecto se debe seleccionar el botón de Simular:

![Botón](https://github.com/geraldvm/analog_signal_analyze/blob/main/images/sim1.PNG)

Seguidamente se varía el valor de señal A cambiando la temperatura sensada en el componente TMP36:

![Botón](https://github.com/geraldvm/analog_signal_analyze/blob/main/images/sim2.PNG)

Seguidamente se varía el valor de señal B cambiando el valor de la resistencia del potenciómetro:

![Botón](https://github.com/geraldvm/analog_signal_analyze/blob/main/images/sim3.PNG)

El resultado de la pantalla se puede observar en la pantalla LCD:

![Botón](https://github.com/geraldvm/analog_signal_analyze/blob/main/images/sim4.PNG)

#include <Arduino.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>
#include <DHT.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27,16,2);

void setup(){

  lcd.init();
  lcd.clear();
  lcd.setBacklight(HIGH);

  lcd.print("Tempe: 32");
}

void loop(){}

// // 
// // Pinos dos componentes do projeto
// const int pino_led = 2;
// const int pino_sensor_de_gas = 26;
// const int pino_dht = 5;

// // Variaveis de valores dos sensores  
// int sensor_gas_nivel = 0;
// int temperatura_valor = 0;

// LiquidCrystal_I2C lcd(0x27,16,2);

// TaskHandle_t Task1;
// TaskHandle_t Task2;


// DHT dht(pino_dht, DHT11);

// void setup() {
//   Serial.begin(115200); 
  
//   pinMode(pino_led, OUTPUT);
//   pinMode(pino_sensor_de_gas, INPUT);

//   dht.begin();

//   lcd.init();
//   lcd.clear();
//   lcd.setBacklight(HIGH);

//   // Cria uma tarefa que será executada na função Task1code(), com  prioridade 1 e execução no núcleo 0
//   xTaskCreatePinnedToCore(
//                     Task1code,   /* Função da tarefa */
//                     "Escrita no LCD",  /* nome da tarefa */
//                     10000,       /* Tamanho (bytes) */
//                     NULL,        /* parâmetro da tarefa */
//                     1,           /* prioridade da tarefa */
//                     &Task1,      /* observa a tarefa criada */
//                     0);          /* tarefa alocada ao núcleo 0 */                  
//   delay(500); 

//   // Cria uma tarefa que será executada na função Task2code(), com  prioridade 1 e execução no núcleo 1
//   xTaskCreatePinnedToCore(
//                     Task2code,   /* Função da tarefa */
//                     "Ler sensores",/* nome da tarefa */
//                     10000,       /* Tamanho (bytes) */
//                     NULL,        /* parâmetro da tarefa */
//                     1,           /* prioridade da tarefa */
//                     &Task2,      /* observa a tarefa criada */
//                     1);          /* tarefa alocada ao núcleo 1 */
//     delay(500); 
// }

// //Task1code: Escreve os dados continuamente no LCD
// void Task1code( void * pvParameters ){
//   for(;;){
//     temperatura_valor = dht.readTemperature();

//     lcd.setCursor(0,0);
//     lcd.print("Temp = "); // Escreve no Display
//     lcd.setCursor(7,0);
//     lcd.print(temperatura_valor);
//   } 
// }

// //Task2code: Faz a leitura dos sensor
// void Task2code( void * pvParameters ){
//     for(;;){ // Loop infinito
      
//       // Manda comando para ler o sensor de gás
//       sensor_gas_nivel = digitalRead(pino_sensor_de_gas); 

//       Serial.print("Sensor gás: ");
//       Serial.println(sensor_gas_nivel);

//       if(sensor_gas_nivel)
//         digitalWrite(pino_led, HIGH);
//       else
//         digitalWrite(pino_led, LOW);
//   }
// }

// void loop() {

// }
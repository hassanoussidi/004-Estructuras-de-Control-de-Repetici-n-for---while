/*******************************************************************************    
        muestra  en la pantalla      
        ( Ahora contare de 0 a 11 >>> 0-1-2-3-4-5-6-7-8-9-10-11-)                          
*******************************************************************************/
 
int contar = 11;
void setup ()         // se ejecuta una vez
{
  Serial.begin(9600); //activa el puerto serie y fija la velocidad en 9600 bps
  Serial.print ( "Ahora contare de 0 a "); 
  Serial.println (contar);
  
  for (int i = 0; i <= contar; i ++){
    Serial.print (i);
    Serial.print ( "-"); } 
     
}

void loop() {} // se ejecuta cíclicamente




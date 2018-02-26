/*******************************************************************************    
                                             
*******************************************************************************/
 
int contar = 11;
void setup ()                // run once, when the sketch starts
{Serial.begin
  (9600);       // set up Serial library at 9600 bps
  Serial.print ( "Ahora contaré de 0 a");
  Serial.println (contar);
  for (int i = 0; i <= contar; i ++)
  {Serial.print
    (i);
    Serial.print ( "-");
   
}}
Void loop ()     // we need this to be here even though its empty

{}


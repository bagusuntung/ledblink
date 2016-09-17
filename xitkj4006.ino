/*
  Blink
  Menyalakan LED pada Pin 7 selama 4 detik dan Mematikanya selama 4 detik.
 
  Ini contoh Kode Programnya.
 */
 
int led = 7;//Output pada Digital Pin adalah sebuah LED yang terkoneksi/terhubung dengan Digital Pin 7.

void setup() 
{                
  pinMode(led, OUTPUT);//Mengatur Digital Pin sebagai Output.     
}

void loop() 
{
  digitalWrite(led, HIGH);   // Mengatur LED agar Menyala.
  delay(4000);               // Tunggu sampai 4 detik.
  digitalWrite(led, LOW);    // Mengatur LED agar Mati.
  delay(4000);               // Tunggu samapi 4 detik.
}

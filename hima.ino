const int relayPin = 23; // Pin untuk mengontrol relay

void setup() {
  // Inisialisasi pin relay sebagai output
  pinMode(4, OUTPUT);
  // Matikan lampu pada awalnya
  digitalWrite(4, LOW);
}

void loop() {
  // Nyalakan lampu
  digitalWrite(4, HIGH);
  delay(200); // Lampu menyala selama 5 detik

  // Matikan lampu
  digitalWrite(4, LOW);
  delay(200); // Lampu mati selama 5 detik
}

/*
  pins mapping
  3 -> B = top right
  4 -> D = bottom
  5 -> G = middle
  6 -> A = top
  7 -> E = bottom left
  8 -> F = top left
  9 -> C = bottom right
*/

void setup() {
  for (int i = 3; i <= 9; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // display last index number
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
}

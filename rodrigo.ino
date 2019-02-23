void limpar() {
    digitalWrite(A5, LOW);
    digitalWrite(A4, LOW);
    digitalWrite(8, LOW);
    digitalWrite(7, LOW);
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
}

void R(){
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
}

void O() {
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(A5, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(A4, HIGH);
}

void D() {
    digitalWrite(5, HIGH);
    digitalWrite(A5, HIGH);
    digitalWrite(A4, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(6, HIGH);
}

void I() {
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);  
}

void G() {
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(A4, HIGH);
}

void S() {
    digitalWrite(8, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(A4, HIGH);
}

void T() {
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(A5, HIGH);
    digitalWrite(A4, HIGH);
}

void A() {
    digitalWrite(8, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(A5, HIGH);
}


void U() {
    digitalWrite(7, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(A5, HIGH);
    digitalWrite(A4, HIGH);
}

void esperar() {
    delay(1000);
}

void setup() {
    pinMode(A5, OUTPUT);
    pinMode(A4, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(3, OUTPUT);
}

void loop() {
    // R
    limpar(); 
    R();
    esperar();

    //O
    limpar();
    O();
    esperar();

    //D
    limpar();
    D();
    esperar();

    // R
    limpar();
    R();
    esperar();

    // I
    limpar();
    I();
    esperar();

    // G
    limpar();
    G();
    esperar();

    // O
    limpar();
    O();
    esperar();

    // G
    limpar();
    esperar();
    esperar();
    G();
    esperar();
    
    // O
    limpar();
    O();
    esperar();

    // S
    limpar();
    S();
    esperar();

    // T
    limpar();
    T();
    esperar();

    // A
    limpar();
    A();
    esperar();

    // D
    limpar();
    esperar();
    esperar();
    D();
    esperar();

    // O
    limpar();
    O();
    esperar();

    // G
    limpar();
    esperar();
    esperar();
    G();
    esperar();

    // U
    limpar();
    U();
    esperar();

    // I
    limpar();
    I();
    esperar();

    // G
    limpar();
    G();
    esperar();

    // O
    limpar();
    O();
    esperar();
    limpar(); 
    esperar();
    esperar();  
}


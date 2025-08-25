This project is a robotic vehicle controlled by voice commands using an Arduino Uno and a Bluetooth module connected to a smartphone app. Built during middle school, it introduced me to wireless communication, real-time control, and mobile-to-hardware integration. The robot demonstrates how digital input from an external device can be translated into mechanical motion.

How It Works
Input (Voice Commands): A mobile app (voice_control_robo.aia) converts voice input into ASCII commands (letters) and sends them over Bluetooth.
Arduino receives commands via a SoftwareSerial connection on pins 3 (RX) and 4 (TX).
Arduino Logic:

Each ASCII value corresponds to a movement command:

ASCII Code	Character	  Command	      Action on Robot
97	           'a'	    Forward	  Both motors move forward
98	           'b'	    Backward	Both motors move backward
99	           'c'	    Left	    Robot turns left
100	           'd'	    Right	    Robot turns right
101	           'e'	    Stop	    All motors stop

The Arduino reads incoming characters (mySerialBT.read()) and sets motor outputs accordingly.
Motors (Output): Four digital pins (10–13) control two DC motors to execute forward, backward, left, right, or stop commands.
Hardware Components
  Arduino Uno
  2 DC motors
  Bluetooth module
  Chassis and wheels
  Connecting wires
  Smartphone with MIT App Inventor app (voice_control_robo.aia)
  Computer for programming and power

Skills & Concepts Learned

  Wireless Communication: Learned how Bluetooth serial communication connects a mobile app to Arduino.
  Software Integration: Combined mobile app input with Arduino hardware control.
  Motor Control: Implemented directional commands via digital pins.
  Programming: Used SoftwareSerial library to handle communication and mapped incoming ASCII codes (letters 'a'–'e') to motor actions.
  Debugging & Testing: Verified command reliability and motor responses; tested multiple commands to ensure smooth operation.
  Systems Thinking: Integrated hardware, software, and wireless input into a cohesive interactive system.
  
  Code Highlights
    SoftwareSerial used to read Bluetooth input from pins 3 and 4.
    Conditional logic maps ASCII commands ('a'–'e') to motor control outputs.
    Motors are controlled using digital pins (10–13) for forward, backward, left, right, and stop functions.
    Serial.println() used for debugging and monitoring received commands.

Possible Improvements
  If I were to revisit this project today, I would:
    Implement error checking to handle missed or noisy Bluetooth commands.
    Improve the mobile app interface for easier voice command mapping.
    Document wiring and Bluetooth connections with diagrams for reproducibility.

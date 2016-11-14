var   serial;          // variable to hold an instance of the serialport library
var   portName = '/dev/cu.usbmodem1411';  // fill in your serial port name here
var   currentString;                               // for incoming serial data
var   ardVal = [];        //array that will hold all values coming from arduino




function setup() {

 serial = new p5.SerialPort(); // make a new instance of the serialport library
 serial.on('data', serialEvent);
 serial.open(portName);
 createCanvas(1023, 1023);


  // initialize pubnub
  pubnub = PUBNUB.init(
  {
    publish_key   : 'pub-c-1dac0f46-7b42-4c07-9774-10d1ad3ce09b',
    subscribe_key : 'sub-c-ed9f4264-a836-11e6-be20-0619f8945a4f',
  });

  // subscribe to drawing channel
  pubnub.subscribe(
  {
    channel : "messaging",
    message: handleMessage
  });



}


function button1(){
    send_to_pub (1);
}

function button1_off(){
    send_to_pub (11);
}

function button2(){
    send_to_pub (2);
}

function button2_off(){
    send_to_pub (22);
}

function button3(){
    send_to_pub (3);
}

function button3_off(){
    send_to_pub (33);
}

function button4(){
    send_to_pub (4);
}

function button4_off(){
    send_to_pub (44);
}

function button5(){
    send_to_pub (5);
}

function button5_off(){
    send_to_pub (55);
}

function button6(){
    send_to_pub (6);
}

function button6_off(){
    send_to_pub (66);
}

function send_to_pub (message) {
    pubnub.publish(
    {
      channel: 'messaging',
      message: {
        x: message
      }
    });
}


function draw() {
}


function handleMessage(message) {
    if (message.x == 1) {
      serial.write(1);
    }
    if (message.x == 11) {
      serial.write(11);
    }
    if (message.x == 2) {
      serial.write(2);
    }
    if (message.x == 22) {
      serial.write(22);
    }
    if (message.x == 3) {
      serial.write(3);
    }
    if (message.x == 33) {
      serial.write(33);
    }
    if (message.x == 4) {
      serial.write(4);
    }
    if (message.x == 44) {
      serial.write(44);
    }
    if (message.x == 5) {
      serial.write(5);
    }
     if (message.x == 55) {
      serial.write(55);
    }
    if (message.x == 6) {
      serial.write(6);
    }
    if (message.x == 66) {
      serial.write(66);
    }
}


function serialEvent() {
  currentString = serial.readStringUntil("\r\n");
}

// Publish to a channel, go to deep sleep, then wake up and publish
// takes about 33 seconds to send the message after wake up

void loop() {
  // Get some data
  String data = String(10);
  // Trigger the integration
  Particle.publish("april_2018_call_box", data, PRIVATE);
  // Wait 60 seconds
  // delay(60000);
  System.sleep(SLEEP_MODE_DEEP, 20);

}

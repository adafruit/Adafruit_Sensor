#include "Adafruit_Sensor.h"
#include <avr/pgmspace.h>

void Adafruit_Sensor::constructor() {
}

size_t Adafruit_Sensor::serializeSensor(sensor_t sensor) {
}

size_t Adafruit_Sensor::serializeEvent(sensors_event_t event) {
}

size_t Adafruit_Sensor::logSensor(sensor_t sensor) {
}

size_t Adafruit_Sensor::logEvent(sensors_event_t event) {
}

int32_t Adafruit_Sensor::average(int32_t values[], const size_t len) {
}

float Adafruit_Sensor::average(float values[], const size_t len) {
}

#include <stdio.h>

enum LightState {
    OFF,
    ON,
    BLINKING
};

struct TrafficLight {
    enum LightState redLight;
    enum LightState yellowLight;
    enum LightState greenLight;
};

int main() {
    struct TrafficLight intersectionLight = {OFF, BLINKING, ON};

    printf("Red light state: %d\n", intersectionLight.redLight); // Output: Red light state: 0
    printf("Yellow light state: %d\n", intersectionLight.yellowLight); // Output: Yellow light state: 2

    return 0;
}
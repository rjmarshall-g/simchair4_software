#define COMPACT_COLLECTIVE_I2C_ADDRESS 10
#define COMPACT_COLLECTIVE_HEAD_I2C_ADDRESS 30
#define AB412_HEAD_CONTROLLER_A_I2C_ADDRESS 13
#define AB412_HEAD_CONTROLLER_B_I2C_ADDRESS 14
#define SIMPLE_COLLECTIVE_I2C_ADDRESS 16
#define HUEY_HEAD_I2C_ADDRESS 17
#define B206_HEAD_I2C_ADDRESS 18
#define B407_HEAD_I2C_ADDRESS 19
#define SINGLE_COLLECTIVE_I2C_ADDRESS 10
#define SINGLE_COLLECTIVE_MKIII_I2C_ADDRESS 12
#define TWIN_COLLECTIVE_MKIII_I2C_ADDRESS 15
#define TWIN_COLLECTIVE_I2C_ADDRESS 15
#define COLLECTIVE_NOTHR_I2C_ADDRESS 11
#define SIMPLE_PEDESTAL_I2C_ADDRESS 40
#define VRMAXII_PEDESTAL_A_I2C_ADDRESS 41
#define VRMAXII_PEDESTAL_B_I2C_ADDRESS 42
#define HELI_QUADRANT_I2C_ADDRESS 50
#define B8GRIP_I2C_ADDRESS  20

#if ((!defined CUSTOM_RUDDER_SENS) && (defined B8_GRIP))
  #define CUSTOM_RUDDER_SENS 80
#endif

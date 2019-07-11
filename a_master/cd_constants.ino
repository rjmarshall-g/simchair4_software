#define COMPACT_COLLECTIVE_I2C_ADDRESS 10
#define COMPACT_COLLECTIVE_HEAD_I2C_ADDRESS 30
#define SIMPLE_PEDESTAL_I2C_ADDRESS 40
#define B8GRIP_I2C_ADDRESS  20

#if ((!defined CUSTOM_RUDDER_SENS) && (defined B8_GRIP))
  #define CUSTOM_RUDDER_SENS 80
#endif

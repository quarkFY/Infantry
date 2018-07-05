#ifndef DRIVERS_I2C_H
#define DRIVERS_I2C_H

#define SDARead() HAL_GPIO_WritePin(SDA_GPIO_Port, SDA_Pin, GPIO_PIN_SET)


void i2c_write_byte(unsigned char b);
void i2c_start();


#endif

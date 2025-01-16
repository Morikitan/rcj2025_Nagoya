add_library(I2C I2C(Ball,BLE).c)
target_link_libraries(I2C pico_stdlib hardware_i2c)
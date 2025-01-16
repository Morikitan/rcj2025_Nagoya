#Add an executable target to be build from the source files
add_executable(test test.c)

#Pull in our pico_stdlib which aggregates commonly used features
target_link_libraries(test pico_stdlib)

#Enable USB output, disable UART output
pico_enable_stdio_usb(test 1)
pico_enable_stdio_uart(test 0)

#Create map/bin/hex/uf2 file etc.
pico_add_extra_outputs(test)

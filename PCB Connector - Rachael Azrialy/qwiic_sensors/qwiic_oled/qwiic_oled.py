from hub import pins as Pin
from hub import uart
import time
from softwarei2c import SoftwareI2C
import ssd1306

i2c = SoftwareI2C(scl_pin=Pin.TX, sda_pin=Pin.RX)  # Example GPIO pins

oled_width = 64
oled_height = 48  # Adjusted for Qwiic Micro OLED
oled = ssd1306.SSD1306_I2C(oled_width, oled_height, i2c)   # Example settings for PS

def oled_run():
    oled.poweron()
    # Clear the display buffer
    oled.fill(0)
  
    # Display a message  
    oled.text("Hello!", 0, 0,1)
    oled.text("I am", 0, 10,1)
    oled.text("working!", 0, 20,1)
    oled.text(":)", 0, 30,1)

    oled.show()

oled_run()
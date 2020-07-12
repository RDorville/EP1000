## Input Devices

Input devices are often called **Sensors**.  Output devices are often called **Actuators**.  The process of connecting a Sensor or Actuator to a computer processor system is called Interfacing.

### Sensors

- A sensor is a device, module, machine or subsystem whose purpose is to detect events or changes in its environment and send the information to other electronics, frequently a computer processor. (Ref: [Wikipedia: Sensor](https://en.wikipedia.org/wiki/Sensor))
- Used in everyday objects to read changes in the enviroment.
- Sensor readings are usually analog by nature.
- Changes are usually slower in availability (compared to computer processors) and require some processing techniques.

### Methods of reading sensors

- There are 3 basic methods of reading/obtaining information from a sensor.  These methods are dependent upon the availability of the information, as read by the sensor
    - Always available
        - Just read the data, data is always available
        - Changes to the reading occur very slowly.
        - E.g. temperature
    - Polling
        - Processor has to continually query/poll the sensor for information.
        - Sensor will usually indicate whether there is new information through another signal or have a drastic change in the reading to indicate that there is a new reading available.
        - When Processor "sees" this change, data is read.
        - E.g. switch
    - Triggering
        - A trigger is a signal(s) that is used to initiate the reading.
        - Sequence is as follows:
            + Processor sends a signal to the sensor for data
            + Sensor gathers information, and when ready
            + Sends reading back to the Processor.  The Sensor may also indicate that data is ready to be read by sending back an Acknowledge/Ready signal
        - E.g. Ultrasonic distance measurement
- Sensor data
    + Real environment data is analog by nature.  It may be some physical element e.g. temperature, distance
    + A sensor converts this data into an **equivalent** electrical signal/voltage that is sent to the computer processor.
    + The computer processor has to read this electrical signal and convert it into an understansable value.
    - Analog signals
        - most common type of sensor data
        - requires conversion to a digital value, usually with an ADC
        - usually it is a direct relationship e.g. V = K * environment-value
    - Digital signals
        - these sensors are configured as smart devices, with processing power
        - sensor itself converts the analog values into a digital signal (e.g. pulse or series of digits)
        - processor needs to decode to understand the value
- Arduino Libraries
    + The Arduino System is very popular because there is large number of libraries (of code) available for almost every Sensor that you can think of.
    + Add libraries to the Arduion IDE System (Ref: Arduino.cc [Installing Additional Arduino Libraries](https://www.arduino.cc/en/Guide/Libraries))
        * There are two types of libraries,
            - Searchable using the Arduino IDE sytem (Internal)
            - External libraries, available as compressed C++ code.
        * How to add a library using the Library Manager
            1.  `IDE > Sketch > Install Library > Manage Libraries`
            2.  Search for the library
            3.  Hightlight and click Install, when complete, it should state "Installed"
        * How to add an External library (.ZIP format)
            1.  Search for the library on the Internet
            2.  Download the library, usually in a compressed .ZIP file
            3.  `IDE > Sketch > Include Library > Add .Zip Library`
            4.  Close the IDE. Re-open.
        + How to manually add an External Library
            1.  Search for the library on the Internet
            2.  Download the library, usually in a compressed .ZIP file
            3.  Locate where your sketch folder is found on your computer using `IDE > File > Preferences > Sketchbook`
            4.  Extract the Library from the ZIP file (this is usually a folder)
            5.  Copy the extracted library folder to [Sketchbook folder] > Libraries folder
            6.  Close the IDE.  Re-open.
    - Check that the Library has been added using `IDE > Sketch > Include Library`.  You should see your installed library there.
    + To apply the library code to your application, add the header file a the top of your sketch using `IDE > Sketch > Include Libary > LibName`.  The header file has an extension of `.h`.

### Types of  Sensors

- Switches
    - An electrical component that can disconnect or connect the conducting pather of a circuit.
    - Provides a LOW or HIGH signal depending on the circuitry.
    - Use `digitalRead()` to determine value of a switch.
    - Be aware of debouncing techniques when mechanical switches are in use.
    - Types of switches
        + [Toggle](https://duckduckgo.com/?q=toggle+switch&t=canonical&iax=images&ia=images)
            * a mechanical switch that changes the state each time the switch is thrown/manipulated.
            * e.g. If in the ON position, throwing the switch will change it to an OFF position.
            * the state remains until the switch is thrown
        - [Pushbutton switch](https://duckduckgo.com/?q=pushbutton+switch&t=canonical&iar=images&iax=images&ia=images)
            + a spring-loaded mechanical switch that changes state when the switch is pressed.  When released (and because of the spring) the switch returns to the original state.
            + Two types of pushbutton switches
                * normally closed - push to open/break connection
                * normally open - push to close/make connection
        - [Slide switch](https://duckduckgo.com/?q=slide+switch&t=canonical&iar=images&iax=images&ia=images)
            + a switch which is closed or opened by a sliding mechanism.
            + when changed, the switch remains in the new state.
        - [Touch Capacitative switch](https://duckduckgo.com/?q=touch+capacitative+switch&t=canonical&iar=images&iax=images&ia=images)
            + switch works based on body capacitace.
            + when a person touches it, the body increases the capacitance of the switch and triggers the switch


- Temperature, Humidity
    - DHT-11 (or DHT-22)
    - LM35
    - DS1820
- Distance
    - Ultrasonic HC-SR04
    - Photoelectric InfraRed sensor Avoidance detection
- Motion detection
    - PIR Motion Detection HC-SR501
    - Microwave module Doplar detection RCWL-0516
- Water
    - Water level sensor
- Light
    - LDR 5516
    - LM393 Light Sensor Module
    - BH1750FVI Digital Light intensity Sensor Module
- Time
    - Real-time Clock Modules
        - RTC DS3231 using I2C
        - RTC DS1302 using single-wire
- Weight
    - Load Cell Weight Sensor HX711 AD Converter
- Arduino Sensor Kit


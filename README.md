# Temperature Converter

## Description
This is a simple **Temperature Converter** program written in **C++**. It allows users to convert temperatures between **Fahrenheit (F)** and **Celsius (C)** using standard conversion formulas.

## Features
- Converts **Fahrenheit** to **Celsius** using the formula:
```txt
  C = (5/9) × (F - 32)
```
- Converts **Celsius** to **Fahrenheit** using the formula:
```txt
  F = (C × 9/5) + 32
```

- User-friendly interface with clear prompts.
- Error handling for incorrect unit inputs.

## How to Use
### **1. Compile the program** using a C++ compiler like `g++`:
```sh g++ temp_converter.cpp -o temp_converter```

### 2. Run the program:
```sh ./temp_converter ```

### 3. Follow the on-screen instructions:
```sh
Enter 'C' for Celsius or 'F' for Fahrenheit. 
Input the temperature value.
The program will display the converted temperature.
```

Example Usage
```txt
********* Temperature Converter ***********
F for Fahrenheit
C for Celsius
Enter your unit (C or F): F
Enter the temperature: 100
100F is equal to: 37.7778C
```

## Requirements
C++ compiler (e.g., g++)

Compatible with Windows, Linux, and macOS.

## Future Improvements
Add support for Kelvin conversions.

Implement a GUI version.

Enhance input validation.

## Author
Eisensenpou

Feel free to contribute or suggest improvements!

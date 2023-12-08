# Wind-Chill-Factor

Write a program that inputs the current temperature, the temperature scale (c for Celsius or f for Fahrenheit), and the wind speed in miles per hour, then calculates and outputs the wind chill factor using the same temperature scale as that which was entered as input. Temperature and wind speed may include decimal places. Temperature output should use one decimal place. You may assume that input will be valid and the scale will be entered in lowercase.

Meteorologists use the following formula to compute the wind chill factor, *W*:

*W = 35.74 + 0.6215 T - 35.75 V <sup>0.16</sup> + 0.4275 T V <sup>0.16</sup>*

where *V* is the wind speed in miles per hour and *T* is the temperature in degrees Fahrenheit. (Note that the formula expects temperature to be supplied in degrees Fahrenheit. If the user enters degrees in Celsius, you will need to convert before using the formula.)

The formulas to convert between Celsius and Fahrenheit are:

*C = (5 / 9) (F - 32)*<br />*F = (9 / 5) C + 32*

In implementing your solution, include at least these three functions:

- *ctof*: A function that takes a Celsius temperature and returns its Fahrenheit equivalent.
- *ftoc*: A function that takes a Fahrenheit temperature and returns its Celsius equivalent.
- *windchill*: A function that takes a temperature in Fahrenheit degrees and a wind speed in miles per hour (both double), and returns the wind chill factor in Fahrenheit degrees. (You may, at your option, include a third parameter for the temperature scale, in which case the temperature is provided in the given scale, and the wind chill factor returned is in that same scale.)

Your main function should prompt for the required information, make use of the functions above to calculate a result, then output the result. The result temperature is to be in the same scale as the input temperature. Display the temperature with one decimal place of precision. You may use either *int* or *double* for your input temperature; no test cases will include a decimal place for input.

Use the *pow* function from the cmath library where appropriate.

## Sample Run #1

```
Enter temperature: 35
Enter scale (f or c): f
Enter wind speed: 15
Wind chill factor is 25.4F.
```

## Sample Run #2

```
Enter temperature: -2
Enter scale (f or c): c
Enter wind speed: 20
Wind chill factor is -9.3C.
```

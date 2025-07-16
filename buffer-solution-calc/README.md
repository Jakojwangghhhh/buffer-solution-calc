# Buffer Solution pH Calculator (C)

This is a simple C program that calculates the pH of a buffer solution using the **Henderson-Hasselbalch equation**: 
   pH = pKa + log10([A⁻]/[HA])

## 📥 Input
- pKa of the weak acid
- Concentration of the weak acid [HA]
- Concentration of the conjugate base [A⁻]

## 📤 Output
- The calculated pH of the buffer solution

## 🛠️ How to Compile

```bash
gcc buffersolncalc.c -o buffersolncalc -lm

## How to run
./buffersolncalc

Example

Enter pKa of the acid: 4.76
Enter concentration of the acid [HA] in mol/L: 0.1
Enter concentration of the base [A-] in mol/L: 0.1
The pH of the buffer solution is: 4.76



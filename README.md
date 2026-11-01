# Credit Card Validity Checker
A command-line C++ application that verifies the validity of a credit card number using **Luhn's Algorithm**.

## How It Works
The program processes the card number as a string and splits the validation logic into modular operations:
1. **Even Position Totals:** Doubles every second digit starting from the right. If doubling results in a two-digit number, the digits are summed together.
2. **Odd Position Totals:** Takes the remaining digits directly from the rightmost position.
3. **Checksum Verification:** Sums both totals together. If the final value is cleanly divisible by 10, the card number is structurally valid.

## Functions Overview
- `getEvenNum(std::string number)`: Extracts digits at even positions from the back, doubles them, and collects their sums.
- `getOddNum(std::string number)`: Extracts digits at odd positions from the back and tracks their sums.
- `getNum(int number)`: Helper function to reduce any double-digit results down to their component digital sums.

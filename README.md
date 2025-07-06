# Date2Day


![CI](https://github.com/silven-mohan/Date2Day/actions/workflows/.github/workflows/main.yml/badge.svg)

-----

# 📆 Date2Day — Find the Day for Any Date

**Date2Day** is a C program that calculates the day of the week for any given date using **Zeller's Congruence**. It accepts date, month (as a string), and year from the user and outputs the corresponding weekday.

---

## 🔧 Features

- 📅 Accepts month names like "March", "December", etc.
- ✅ Accurate weekday detection using Zeller's formula
- 🧠 Handles January and February as per the algorithm's rules
- 🖥️ Console-based, beginner-friendly, no extra libraries

---

## 🛠 How It Works

1. User enters:
   - Day (number)
   - Year (4-digit)
   - Month (as a name, case-sensitive)
2. The program uses `strcmp()` to convert month name to Zeller format
3. Applies Zeller’s Congruence to compute the weekday
4. Prints the full result (e.g., `14 June 2025 is Saturday`)

---

## 📦 Compile & Run

```bash
gcc Date_to_Day.c -o Date2Day
./Date2Day
```

## 🚀 Sample Output
Enter the date: 14
Enter the year: 2025
Enter the month name: June

14 June 2025 is Saturday

## 📃License

  See included [LICENSE](./LICENSE) file for more details.

## Author-Silven Mohan

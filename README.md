# C++ Project-
# Random Event Generator 🎁

This is a basic C++ console application that randomly generates a prize each time it's run. It uses the current system time to seed the random number generator, and assigns a reward based on a random number between 1 and 5.

## Prizes
- 🍬 Toffee  
- 🍦 Ice Cream  
- 🧁 Cupcake  
- 🍛 Biryani  
- 🌴 Date  

## How It Works
- srand(time(0)) is used to ensure different results each time.
- rand() % 5 + 1 gives a number from 1 to 5.
- A switch statement determines which prize to award.


 

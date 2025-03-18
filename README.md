# CarSimulator

## Assumptions

I placed the car logic into the class 'Car' and not 'MonsterTruck' since I assumed the logic was for any car. I did not find any details that were clearly exclusive to monster trucks.

I also assumed that the program should exit if invalid input was entered.

There is also one thing missing from what I would have done in daily work: tests. I skipped this since it did not seem to be an essential part of this task according to the pdf. I would of course have done it otherwise and in regular daily work. If I were to create some tests for this program, I would use the GoogleTest framework since I have used it in previous work.

One last note: I used Git but not branches since this seemed a bit unnecessary for this task. 

## How to run the program

The program should be able to be run in both Linux and Windows but I have only used Linux.

### Using Linux:

Open the project folder in a terminal and run the following commands:
1. ```cd build```
2. ```cmake ..```
3. ```make```
4. ```./CarSimulator```

### Requirements

* cmake
* a c++ compiler, I used g++
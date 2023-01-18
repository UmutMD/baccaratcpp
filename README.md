# Baccarat in C++

## Introduction

It's a C++ version of the famous card game Baccarat. The player who comes closest to 9 points wins this game, which is played between the Player and the Banker. A tie situation is possible. If a participant's score falls below a specific threshold, he or she may draw another card; the maximum number of cards can be dealt is six.

## Dependencies

The following libraries and dependencies were utilised when developing the application and can be found in the Baccarat.depend file:

```
<iostream>
<fstream>
<stdlib.h>
<string.h>
<math.h>
<stdio.h>
<time.h>
```

## Installation

Download baccarat.exe from the bin/release file to launch the software ([Can be found here](https://github.com/UmutMD/baccaratcpp/tree/master/bin/Release)). Windows will issue the standard warnings because it is in executable format; if you accept and continue, the running executable will play a game of Baccarat for you.

## Code Rundown

In this section, I'll describe how the code works and in what order.
Baccarat is a point-scoring game played with 8 decks of cards, where each number indicates its own score and the number 10 and pictures like J Q K offers no points.

-Create 8 Decks of 1-2-3-4-5-6-7-8-9 and 0-0-0-0 \
-Shuffle\
-Cards are dealt to the Player and Banker one by one from the shuffled deck\
-Checking whether there is a natural winner.\
-Draw phase or End result

## To-Do and Other Implementation
The executable file contains procedures on how the entire game plays in its current state. In the future version, I will be implementing a new file with only outcome displays.

Aside from this technique, I believe it is also possible to use a queue.

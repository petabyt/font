# 7x5 Font
A font I made a while back for an OS. Includes most ASCII chars.  
https://github.com/petabyt/PrismOS2/blob/master/PRISMOS.BAS  

Good for DOS games, OS dev, VGA stuff  

## Features:
1. A-Z
2. a-z
3. 0-9
4. Some symbols
5. Compiler command line options

## Usage:
For easy modification, the font is stored in 7x5 character array.  
Simply loop through the array to find the char you need, then  
loop through the characters, (height = 7, width = 5). When you  
encounter a '#', plot a dot. If space, don't plot.

See demo.c for examples.

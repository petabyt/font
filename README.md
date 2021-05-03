# 7x5 Font
A font I made a while back for an OS. Includes most ASCII chars.  
https://github.com/petabyt/PrismOS2/blob/master/PRISMOS.BAS  
See it in action: https://github.com/petabyt/ahdk/blob/master/screen.jpg  

## Features:
- A-Z
- a-z
- 0-9
- Some symbols
- Easy to modify and add new characters

## Usage:
For easy modification, the font is stored in 7x5 character array.  
Simply loop through the array to find the char you need, then  
loop through the characters, (height = 7, width = 5). When you  
encounter a '#', plot. If space, don't plot.

See demo.c for examples.

# 7x5 Font
A font I made a while back for an OS. Includes most common ASCII chars.  

## Features:
1. A-Z
2. a-z
3. 0-9
4. Some symbols
5. Good for DOS games, OS dev, VGA stuff

## Usage:
For easy modification, font is stored in 7x5 character array.  
Simply loop through the array to find the char you need, then  
loop through the characters, (height = 7, width = 5). When you  
encounter a '#', plot a dot. If space, don't plot.

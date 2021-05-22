# 7x5 Font
![Demo](example.png)

A tiny and easy font for OS dev, embedded, etc.

## Features:
- A-Z
- a-z
- 0-9
- Some symbols
- Easy to modify and add new characters
- Preprocessor options
- ASCII independent

## Usage:
For easy modification, the font is stored in 7x5 character array.  
Simply loop through the array to find the char you need, then  
loop through the characters, (height = 7, width = 5). When you  
encounter a '#', plot. If space, don't plot.

See demo.c for examples.

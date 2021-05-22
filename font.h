/*
	Compiler command line options:
	-DNO_LOWERCASE
	-DNO_SYMBOL
	-DNO_NUMBERS
*/
#ifndef FONT_H
#define FONT_H

struct Font {
    char letter;
    char code[7][5];
};

struct Font font[] = {
{' ', { /* Processor should ignore this */
"     ",
"     ",
"     ",
"     ",
"     ",
"     ",
"     "}},
{'A', {
" ### ",
"#   #",
"#   #",
"#   #",
"#####",
"#   #",
"#   #"}},
{'B', {
"#### ",
"#   #",
"#   #",
"#### ",
"#   #",
"#   #",
"#### "}},
{'C', {
" ####",
"#    ",
"#    ",
"#    ",
"#    ",
"#    ",
" ####"}},
{'D', {
"#### ",
"#   #",
"#   #",
"#   #",
"#   #",
"#   #",
"#### "}},
{'E', {
"#####",
"#    ",
"#    ",
"#####",
"#    ",
"#    ",
"#####"}},
{'F', {
"#####",
"#    ",
"#    ",
"#####",
"#    ",
"#    ",
"#    "}},
{'G', {
" ####",
"#    ",
"#    ",
"#  ##",
"#   #",
"#   #",
" ####"}},
{'H', {
"#   #",
"#   #",
"#   #",
"#####",
"#   #",
"#   #",
"#   #"}},
{'I', {
"#    ",
"#    ",
"#    ",
"#    ",
"#    ",
"#    ",
"#    "}},
{'J', {
"    #",
"    #",
"    #",
"    #",
"    #",
"    #",
"#### "}},
{'K', {
"#   #",
"#  # ",
"# #  ",
"##   ",
"# #  ",
"#  # ",
"#   #"}},
{'L', {
"#    ",
"#    ",
"#    ",
"#    ",
"#    ",
"#    ",
"#####"}},
{'M', {
"#   #",
"## ##",
"# # #",
"#   #",
"#   #",
"#   #",
"#   #"}},
{'N', {
"#   #",
"##  #",
"# # #",
"#  ##",
"#   #",
"#   #",
"#   #"}},
{'O', {
" ### ",
"#   #",
"#   #",
"#   #",
"#   #",
"#   #",
" ### "}},
{'P', {
"#### ",
"#   #",
"#   #",
"#### ",
"#    ",
"#    ",
"#    "}},
{'Q', {
" ### ",
"#   #",
"#   #",
"#   #",
"#   #",
"#  ##",
" ####"}},
{'R', {
"#### ",
"#   #",
"#   #",
"#   #",
"#### ",
"#   #",
"#   #"}},
{'S', {
" ####",
"#    ",
"#    ",
" ### ",
"    #",
"    #",
"#### "}},
{'T', {
"#####",
"  #  ",
"  #  ",
"  #  ",
"  #  ",
"  #  ",
"  #  "}},
{'U', {
"#   #",
"#   #",
"#   #",
"#   #",
"#   #",
"#   #",
" ### "}},
{'V', {
"#   #",
"#   #",
"#   #",
"#   #",
"#   #",
" # # ",
"  #  "}},
{'W', {
"#   #",
"#   #",
"#   #",
"#   #",
"# # #",
"## ##",
"#   #"}},
{'X', {
"#   #",
"#   #",
" # # ",
"  #  ",
" # # ",
"#   #",
"#   #"}},
{'Y', {
"#   #",
"#   #",
"#   #",
" ### ",
"  #  ",
"  #  ",
"  #  "}},
{'Z', {
"#####",
"    #",
"   # ",
"  #  ",
" #   ",
"#    ",
"#####"}},
#ifndef NO_LOWERCASE
{'a', {
"     ",
"     ",
" ### ",
"    #",
" ####",
"#   #",
" ####"}},
{'b', {
"#    ",
"#    ",
"#### ",
"#   #",
"#   #",
"#   #",
"#### "}},
{'c', {
"     ",
"     ",
" ### ",
"#   #",
"#    ",
"#   #",
" ### "}},
{'d', {
"    #",
"    #",
" ####",
"#   #",
"#   #",
"#   #",
" ####"}},
{'e', {
"     ",
"     ",
" ### ",
"#   #",
"#####",
"#    ",
" ####"}},
{'f', {
"  ## ",
" #  #",
" #   ",
"###  ",
" #   ",
" #   ",
" #   "}},
{'g', {
"     ",
" ####",
"#   #",
"#   #",
" ####",
"    #",
"#### "}},
{'h', {
"#    ",
"#    ",
"#### ",
"#   #",
"#   #",
"#   #",
"#   #"}},
{'i', {
"#    ",
"     ",
"#    ",
"#    ",
"#    ",
"#    ",
"#    "}},
{'j', {
"    #",
"     ",
"   ##",
"    #",
"    #",
"#   #",
" ### "}},
{'k', {
"#    ",
"#    ",
"#   #",
"#  # ",
"###  ",
"#  # ",
"#   #"}},
{'l', {
"#    ",
"#    ",
"#    ",
"#    ",
"#    ",
"#    ",
"##   "}},
{'m', {
"     ",
"     ",
"#### ",
"# # #",
"# # #",
"# # #",
"# # #"}},
{'n', {
"     ",
"     ",
"#### ",
"#   #",
"#   #",
"#   #",
"#   #"}},
{'o', {
"     ",
"     ",
" ### ",
"#   #",
"#   #",
"#   #",
" ### "}},
{'p', {
"     ",
"     ",
" ### ",
" #  #",
" ### ",
" #   ",
" #   "}},
{'q', {
"     ",
"     ",
"  ###",
" #  #",
"  ###",
"    #",
"    #"}},
{'r', {
"     ",
"     ",
"# ###",
"##   ",
"#    ",
"#    ",
"#    "}},
{'s', {
"     ",
"     ",
" ####",
"#    ",
" ### ",
"    #",
"#### "}},
{'t', {
"  #  ",
"  #  ",
" ### ",
"  #  ",
"  #  ",
"  #  ",
"   ##"}},
{'u', {
"     ",
"     ",
"#   #",
"#   #",
"#   #",
"#  ##",
" ## #"}},
{'v', {
"     ",
"     ",
"#   #",
"#   #",
"#   #",
" # # ",
"  #  "}},
{'w', {
"     ",
"     ",
"#   #",
"#   #",
"# # #",
"# # #",
" # # "}},
{'x', {
"     ",
"     ",
"#   #",
" # # ",
"  #  ",
" # # ",
"#   #"}},
{'y', {
"     ",
"     ",
"#   #",
"#   #",
" ####",
"    #",
"#### "}},
{'z', {
"     ",
"     ",
"#####",
"   # ",
"  #  ",
" #   ",
"#####"}},
#endif
#ifndef NO_NUMBERS
{'0', {
" ### ",
"#   #",
"#  ##",
"# # #",
"##  #",
"#   #",
" ### "}},
{'1', {
"##   ",
" #   ",
" #   ",
" #   ",
" #   ",
" #   ",
" #   "}},
{'2', {
" ### ",
"#   #",
"    #",
"  ## ",
" #   ",
"#    ",
"#####"}},
{'3', {
"#### ",
"    #",
"    #",
" ### ",
"    #",
"    #",
"#### "}},
{'4', {
"#   #",
"#   #",
"#   #",
"#####",
"    #",
"    #",
"    #"}},
{'5', {
"#####",
"#    ",
"#    ",
"#### ",
"    #",
"    #",
"#### "}},
{'6', {
" ####",
"#    ",
"#    ",
" ### ",
"#   #",
"#   #",
" ### "}},
{'7', {
"#####",
"    #",
"    #",
"  ## ",
" #   ",
" #   ",
" #   "}},
{'8', {
" ### ",
"#   #",
"#   #",
" ### ",
"#   #",
"#   #",
" ### "}},
{'9', {
" ### ",
"#   #",
"#   #",
" ####",
"    #",
"    #",
" ### "}},
#endif
#ifndef NO_SYMBOLS
{'!', {
"#    ",
"#    ",
"#    ",
"#    ",
"#    ",
"     ",
"#    "}},
{'.', {
"     ",
"     ",
"     ",
"     ",
"     ",
"     ",
"#    "}},
{',', {
"     ",
"     ",
"     ",
"     ",
"     ",
"  #  ",
" #   "}},
{'?', {
" ##  ",
"#  # ",
"   # ",
"  #  ",
" #   ",
"     ",
" #   "}},
{'^', {
"     ",
" # # ",
" # # ",
"     ",
"  #  ",
"#   #",
" ### "}},
{' ', {
"     ",
"     ",
"     ",
"     ",
"     ",
"     ",
"#####"}},
{'-', {
"     ",
"     ",
"     ",
" ### ",
"     ",
"     ",
"     "}},
{';', {
"     ",
" #   ",
"     ",
" #   ",
" #   ",
"#    ",
"     "}},
{'`', {
" #   ",
" #   ",
"     ",
"     ",
"     ",
"     ",
"     "}},
{'=', {
"     ",
"#####",
"     ",
"     ",
"#####",
"     ",
"     "}},
{'_', {
"     ",
"     ",
"     ",
"     ",
"     ",
"     ",
"#####"}},
{':', {
"     ",
" #   ",
"     ",
"     ",
" #   ",
"     ",
"     "}},
{'<', {
"   # ",
"  #  ",
" #   ",
"#    ",
" #   ",
"  #  ",
"   # "}},
{'>', {
" #   ",
"  #  ",
"   # ",
"    #",
"   # ",
"  #  ",
" #   "}},
{'~', {
"     ",
"     ",
"# # #",
" # # ",
"     ",
"     ",
"     "}},
{'*', {
"  #  ",
" ### ",
"  #  ",
" # # ",
"     ",
"     ",
"     "}},
{'/', {
"    #",
"    #",
"   # ",
"  #  ",
" #   ",
" #   ",
"#    "}},
{'\'', {
"#    ",
"#    ",
"#    ",
"     ",
"     ",
"     ",
"     "}},
#endif
/* Fallback/end Char. If you don't know the
font size, use this as the "null terminator" */
{0, {
"#####",
"#####",
"#####",
"#####",
"#####",
"#####",
"#####"}},
};

#endif

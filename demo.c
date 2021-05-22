// Unicode terminal printer

#include <stdio.h>
#include <wchar.h>
#include <locale.h>

#include "font.h"

#define SCREEN_WIDTH 5 * 20
#define SCREEN_HEIGHT 7 * 2 + 2

char buffer[SCREEN_HEIGHT][SCREEN_WIDTH] = {0};

void drawPixel(int x, int y) {
	buffer[y][x] = 1;
}

// This is just a simple demonstration.

int printChar(int x, int y, char c) {
	int match = 0;
	for (int l = 0; l < (int)(sizeof(font) / sizeof(font[0])); l++) {
		if (font[l].letter == c) {
			match = l;
			break;
		}
	}

	// Loop through 7 high 5 wide monochrome font
	int maxLength = 0;
	for (int py = 0; py < 7; py++) {
		for (int px = 0; px < 5; px++) {
			if (font[match].code[py][px] == '#') {
				drawPixel(x + px, y + py);

				// Dynamix width character spacing
				if (px > maxLength) {
					maxLength = px;
				}
			}
		}
	}

	return maxLength;
}

int printString(int x, int y, char *string) {
	int cx = x;
	int cy = y;

	for (int c = 0; string[c] != '\0'; c++) {
		int length;
		if (string[c] == ' ') {
			length = 5;
		} else {
			length = printChar(cx, cy, string[c]);
		}

		cx += length + 3;

		// Text wrap after space
		#ifdef SCREEN_WIDTH

		// Fine tune this to your liking.
		if (cx > SCREEN_WIDTH - 20 && string[c] == ' ') {
			cx = x;
			cy += 8;
		}
		#endif
	}

	return cy;
}

int main() {
	setlocale(LC_CTYPE, "");
	
	printString(0, 0, "Font test test test");

	// Use upper half, lower half, and full to simulate graphics
	for (int y = 0; y < SCREEN_HEIGHT; y += 2) {
		for (int x = 0; x < SCREEN_WIDTH; x++) {
			if (buffer[y][x] && buffer[y + 1][x]) {
				printf("%ls", L"\u2588");
			} else if (buffer[y + 1][x]) {
				printf("%ls", L"\u2584");
			} else if (buffer[y][x]) {
				printf("%ls", L"\u2580");
			} else {
				putchar(' ');
			}
		}

		putchar('\n');
	}

	return 0;
}

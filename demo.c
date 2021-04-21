#include "font.h"

// This is just a simple demonstration.

int printChar(int x, int y, char c, char color) {
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
				drawPixel(x + px, y + py, color);

				// Dynamix width character spacing
				if (px > maxLength) {
					maxLength = px;
				}
			}
		}
	}

	return maxLength;
}

int printString(int x, int y, char *string, char color) {
	int cx = x;
	int cy = y;

	for (int c = 0; string[c] != '\0'; c++) {
		// Text wrap after space
		if (cx + 50 > SCREEN_WIDTH && string[c] == ' ') {
			cx = x;
			cy += 5 + 4;
			c++;
		}

		int length;
		if (string[c] == ' ') {
			length = 5;
		} else {
			length = printChar(cx, cy, string[c], color);
		}

		cx += length + 3;
	}

	return cy;
}

// Base16 Unikitty Reversible dark - simple terminal color setup
// Josh W Lewis (@joshwlewis)
static const char *colorname[] = {
	/* Normal colors */
	"#2e2a31", /*  0: Base 00 - Black   */
	"#d8137f", /*  1: Base 08 - Red     */
	"#17ad98", /*  2: Base 0B - Green   */
	"#dc8a0e", /*  3: Base 0A - Yellow  */
	"#7864fa", /*  4: Base 0D - Blue    */
	"#b33ce8", /*  5: Base 0E - Magenta */
	"#149bda", /*  6: Base 0C - Cyan    */
	"#c3c2c4", /*  7: Base 05 - White   */

	/* Bright colors */
	"#878589", /*  8: Base 03 - Bright Black */
	"#d65407", /* 16: Base 09 */
	"#4b484e", /* 18: Base 01 */
	"#69666b", /* 19: Base 02 */
	"#a5a3a6", /* 20: Base 04 */
	"#e1e0e1", /* 21: Base 06 */
	"#d41acd", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#c3c2c4", /* default fg: Base 05 */
	[257] = "#2e2a31", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

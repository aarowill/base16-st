// Base16 UwUnicorn dark - simple terminal color setup
// Fernando Marques (https://github.com/RakkiUwU) and Gabriel Fontes (https://github.com/Misterio77)
static const char *colorname[] = {
	/* Normal colors */
	"#241b26", /*  0: Base 00 - Black   */
	"#877bb6", /*  1: Base 08 - Red     */
	"#c965bf", /*  2: Base 0B - Green   */
	"#a84a73", /*  3: Base 0A - Yellow  */
	"#6a9eb5", /*  4: Base 0D - Blue    */
	"#78a38f", /*  5: Base 0E - Magenta */
	"#9c5fce", /*  6: Base 0C - Cyan    */
	"#eed5d9", /*  7: Base 05 - White   */

	/* Bright colors */
	"#6c3cb2", /*  8: Base 03 - Bright Black */
	"#de5b44", /* 16: Base 09 */
	"#2f2a3f", /* 18: Base 01 */
	"#46354a", /* 19: Base 02 */
	"#7e5f83", /* 20: Base 04 */
	"#d9c2c6", /* 21: Base 06 */
	"#a3a079", /* 17: Base 0F */
	"#e4ccd0", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#eed5d9", /* default fg: Base 05 */
	[257] = "#241b26", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

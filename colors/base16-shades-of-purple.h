// Base16 Shades of Purple dark - simple terminal color setup
// Iolar Demartini Junior (http://github.com/demartini) based on Shades of Purple Theme (https://github.com/ahmadawais/shades-of-purple-vscode).
static const char *colorname[] = {
	/* Normal colors */
	"#1e1e3f", /*  0: Base 00 - Black   */
	"#d90429", /*  1: Base 08 - Red     */
	"#3ad900", /*  2: Base 0B - Green   */
	"#ffe700", /*  3: Base 0A - Yellow  */
	"#6943ff", /*  4: Base 0D - Blue    */
	"#ff2c70", /*  5: Base 0E - Magenta */
	"#00c5c7", /*  6: Base 0C - Cyan    */
	"#c7c7c7", /*  7: Base 05 - White   */

	/* Bright colors */
	"#808080", /*  8: Base 03 - Bright Black */
	"#f92a1c", /* 16: Base 09 */
	"#43d426", /* 18: Base 01 */
	"#f1d000", /* 19: Base 02 */
	"#6871ff", /* 20: Base 04 */
	"#ff77ff", /* 21: Base 06 */
	"#79e8fb", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#c7c7c7", /* default fg: Base 05 */
	[257] = "#1e1e3f", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

// Base16 Tokyo Night Terminal Dark dark - simple terminal color setup
// Michaël Ball
static const char *colorname[] = {
	/* Normal colors */
	"#16161e", /*  0: Base 00 - Black   */
	"#f7768e", /*  1: Base 08 - Red     */
	"#41a6b5", /*  2: Base 0B - Green   */
	"#e0af68", /*  3: Base 0A - Yellow  */
	"#7aa2f7", /*  4: Base 0D - Blue    */
	"#bb9af7", /*  5: Base 0E - Magenta */
	"#7dcfff", /*  6: Base 0C - Cyan    */
	"#787c99", /*  7: Base 05 - White   */

	/* Bright colors */
	"#444b6a", /*  8: Base 03 - Bright Black */
	"#ff9e64", /* 16: Base 09 */
	"#1a1b26", /* 18: Base 01 */
	"#2f3549", /* 19: Base 02 */
	"#787c99", /* 20: Base 04 */
	"#cbccd1", /* 21: Base 06 */
	"#d18616", /* 17: Base 0F */
	"#d5d6db", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#787c99", /* default fg: Base 05 */
	[257] = "#16161e", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

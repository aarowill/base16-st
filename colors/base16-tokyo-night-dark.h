// Base16 Tokyo Night Dark dark - simple terminal color setup
// Michaël Ball
static const char *colorname[] = {
	/* Normal colors */
	"#1a1b26", /*  0: Base 00 - Black   */
	"#c0caf5", /*  1: Base 08 - Red     */
	"#9ece6a", /*  2: Base 0B - Green   */
	"#0db9d7", /*  3: Base 0A - Yellow  */
	"#2ac3de", /*  4: Base 0D - Blue    */
	"#bb9af7", /*  5: Base 0E - Magenta */
	"#b4f9f8", /*  6: Base 0C - Cyan    */
	"#a9b1d6", /*  7: Base 05 - White   */

	/* Bright colors */
	"#444b6a", /*  8: Base 03 - Bright Black */
	"#a9b1d6", /* 16: Base 09 */
	"#16161e", /* 18: Base 01 */
	"#2f3549", /* 19: Base 02 */
	"#787c99", /* 20: Base 04 */
	"#cbccd1", /* 21: Base 06 */
	"#f7768e", /* 17: Base 0F */
	"#d5d6db", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#a9b1d6", /* default fg: Base 05 */
	[257] = "#1a1b26", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

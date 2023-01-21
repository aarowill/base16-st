// Base16 Tokyo Night Light dark - simple terminal color setup
// Michaël Ball
static const char *colorname[] = {
	/* Normal colors */
	"#d5d6db", /*  0: Base 00 - Black   */
	"#343b58", /*  1: Base 08 - Red     */
	"#485e30", /*  2: Base 0B - Green   */
	"#166775", /*  3: Base 0A - Yellow  */
	"#34548a", /*  4: Base 0D - Blue    */
	"#5a4a78", /*  5: Base 0E - Magenta */
	"#3e6968", /*  6: Base 0C - Cyan    */
	"#343b59", /*  7: Base 05 - White   */

	/* Bright colors */
	"#9699a3", /*  8: Base 03 - Bright Black */
	"#965027", /* 16: Base 09 */
	"#cbccd1", /* 18: Base 01 */
	"#dfe0e5", /* 19: Base 02 */
	"#4c505e", /* 20: Base 04 */
	"#1a1b26", /* 21: Base 06 */
	"#8c4351", /* 17: Base 0F */
	"#1a1b26", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#343b59", /* default fg: Base 05 */
	[257] = "#d5d6db", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

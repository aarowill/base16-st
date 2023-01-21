// Base16 Tokyodark dark - simple terminal color setup
// Tiagovla (https://github.com/tiagovla/)
static const char *colorname[] = {
	/* Normal colors */
	"#11121d", /*  0: Base 00 - Black   */
	"#a485dd", /*  1: Base 08 - Red     */
	"#d7a65f", /*  2: Base 0B - Green   */
	"#7199ee", /*  3: Base 0A - Yellow  */
	"#95c561", /*  4: Base 0D - Blue    */
	"#ee6d85", /*  5: Base 0E - Magenta */
	"#a485dd", /*  6: Base 0C - Cyan    */
	"#abb2bf", /*  7: Base 05 - White   */

	/* Bright colors */
	"#393a45", /*  8: Base 03 - Bright Black */
	"#a485dd", /* 16: Base 09 */
	"#151621", /* 18: Base 01 */
	"#43444f", /* 19: Base 02 */
	"#1b1c27", /* 20: Base 04 */
	"#555661", /* 21: Base 06 */
	"#773440", /* 17: Base 0F */
	"#2c2d38", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#abb2bf", /* default fg: Base 05 */
	[257] = "#11121d", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

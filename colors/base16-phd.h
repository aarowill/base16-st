// Base16 PhD dark - simple terminal color setup
// Hennig Hasemann (http://leetless.de/vim.html)
static const char *colorname[] = {
	/* Normal colors */
	"#061229", /*  0: Base 00 - Black   */
	"#d07346", /*  1: Base 08 - Red     */
	"#99bf52", /*  2: Base 0B - Green   */
	"#fbd461", /*  3: Base 0A - Yellow  */
	"#5299bf", /*  4: Base 0D - Blue    */
	"#9989cc", /*  5: Base 0E - Magenta */
	"#72b9bf", /*  6: Base 0C - Cyan    */
	"#b8bbc2", /*  7: Base 05 - White   */

	/* Bright colors */
	"#717885", /*  8: Base 03 - Bright Black */
	"#f0a000", /* 16: Base 09 */
	"#2a3448", /* 18: Base 01 */
	"#4d5666", /* 19: Base 02 */
	"#9a99a3", /* 20: Base 04 */
	"#dbdde0", /* 21: Base 06 */
	"#b08060", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#b8bbc2", /* default fg: Base 05 */
	[257] = "#061229", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

// Base16 Silk Dark dark - simple terminal color setup
// Gabriel Fontes (https://github.com/Misterio77)
static const char *colorname[] = {
	/* Normal colors */
	"#0e3c46", /*  0: Base 00 - Black   */
	"#fb6953", /*  1: Base 08 - Red     */
	"#73d8ad", /*  2: Base 0B - Green   */
	"#fce380", /*  3: Base 0A - Yellow  */
	"#46bddd", /*  4: Base 0D - Blue    */
	"#756b8a", /*  5: Base 0E - Magenta */
	"#3fb2b9", /*  6: Base 0C - Cyan    */
	"#c7dbdd", /*  7: Base 05 - White   */

	/* Bright colors */
	"#587073", /*  8: Base 03 - Bright Black */
	"#fcab74", /* 16: Base 09 */
	"#1d494e", /* 18: Base 01 */
	"#2a5054", /* 19: Base 02 */
	"#9dc8cd", /* 20: Base 04 */
	"#cbf2f7", /* 21: Base 06 */
	"#9b647b", /* 17: Base 0F */
	"#d2faff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#c7dbdd", /* default fg: Base 05 */
	[257] = "#0e3c46", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

// Base16 emil dark - simple terminal color setup
// limelier
static const char *colorname[] = {
	/* Normal colors */
	"#efefef", /*  0: Base 00 - Black   */
	"#f43979", /*  1: Base 08 - Red     */
	"#0073a8", /*  2: Base 0B - Green   */
	"#ff669b", /*  3: Base 0A - Yellow  */
	"#471397", /*  4: Base 0D - Blue    */
	"#6916b6", /*  5: Base 0E - Magenta */
	"#2155d6", /*  6: Base 0C - Cyan    */
	"#313145", /*  7: Base 05 - White   */

	/* Bright colors */
	"#7c7c98", /*  8: Base 03 - Bright Black */
	"#d22a8b", /* 16: Base 09 */
	"#bebed2", /* 18: Base 01 */
	"#9e9eaf", /* 19: Base 02 */
	"#505063", /* 20: Base 04 */
	"#22223a", /* 21: Base 06 */
	"#8d17a5", /* 17: Base 0F */
	"#1a1a2f", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#313145", /* default fg: Base 05 */
	[257] = "#efefef", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

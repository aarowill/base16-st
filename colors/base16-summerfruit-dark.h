// Base16 Summerfruit Dark dark - simple terminal color setup
// Christopher Corley (http://christop.club/)
static const char *colorname[] = {
	/* Normal colors */
	"#151515", /*  0: Base 00 - Black   */
	"#ff0086", /*  1: Base 08 - Red     */
	"#00c918", /*  2: Base 0B - Green   */
	"#aba800", /*  3: Base 0A - Yellow  */
	"#3777e6", /*  4: Base 0D - Blue    */
	"#ad00a1", /*  5: Base 0E - Magenta */
	"#1faaaa", /*  6: Base 0C - Cyan    */
	"#d0d0d0", /*  7: Base 05 - White   */

	/* Bright colors */
	"#505050", /*  8: Base 03 - Bright Black */
	"#fd8900", /* 16: Base 09 */
	"#202020", /* 18: Base 01 */
	"#303030", /* 19: Base 02 */
	"#b0b0b0", /* 20: Base 04 */
	"#e0e0e0", /* 21: Base 06 */
	"#cc6633", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#d0d0d0", /* default fg: Base 05 */
	[257] = "#151515", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

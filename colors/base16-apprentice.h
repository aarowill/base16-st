// Base16 Apprentice dark - simple terminal color setup
// romainl
static const char *colorname[] = {
	/* Normal colors */
	"#262626", /*  0: Base 00 - Black   */
	"#5f8787", /*  1: Base 08 - Red     */
	"#87af87", /*  2: Base 0B - Green   */
	"#5f8787", /*  3: Base 0A - Yellow  */
	"#ffffaf", /*  4: Base 0D - Blue    */
	"#87afd7", /*  5: Base 0E - Magenta */
	"#5f875f", /*  6: Base 0C - Cyan    */
	"#bcbcbc", /*  7: Base 05 - White   */

	/* Bright colors */
	"#6c6c6c", /*  8: Base 03 - Bright Black */
	"#ff8700", /* 16: Base 09 */
	"#303030", /* 18: Base 01 */
	"#333333", /* 19: Base 02 */
	"#787878", /* 20: Base 04 */
	"#c9c9c9", /* 21: Base 06 */
	"#5f87af", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#bcbcbc", /* default fg: Base 05 */
	[257] = "#262626", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

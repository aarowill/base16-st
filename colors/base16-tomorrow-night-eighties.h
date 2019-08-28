// Base16 Tomorrow Night dark - simple terminal color setup
// Chris Kempson (http://chriskempson.com)
static const char *colorname[] = {
	/* Normal colors */
	"#2d2d2d", /*  0: Base 00 - Black   */
	"#f2777a", /*  1: Base 08 - Red     */
	"#99cc99", /*  2: Base 0B - Green   */
	"#ffcc66", /*  3: Base 0A - Yellow  */
	"#6699cc", /*  4: Base 0D - Blue    */
	"#cc99cc", /*  5: Base 0E - Magenta */
	"#66cccc", /*  6: Base 0C - Cyan    */
	"#cccccc", /*  7: Base 05 - White   */

	/* Bright colors */
	"#999999", /*  8: Base 03 - Bright Black */
	"#f99157", /* 16: Base 09 */
	"#393939", /* 18: Base 01 */
	"#515151", /* 19: Base 02 */
	"#b4b7b4", /* 20: Base 04 */
	"#e0e0e0", /* 21: Base 06 */
	"#a3685a", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#cccccc", /* default fg: Base 05 */
	[257] = "#2d2d2d", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

// Base16 Material Lighter dark - simple terminal color setup
// Nate Peterson
static const char *colorname[] = {
	/* Normal colors */
	"#fafafa", /*  0: Base 00 - Black   */
	"#ff5370", /*  1: Base 08 - Red     */
	"#91b859", /*  2: Base 0B - Green   */
	"#ffb62c", /*  3: Base 0A - Yellow  */
	"#6182b8", /*  4: Base 0D - Blue    */
	"#7c4dff", /*  5: Base 0E - Magenta */
	"#39adb5", /*  6: Base 0C - Cyan    */
	"#80cbc4", /*  7: Base 05 - White   */

	/* Bright colors */
	"#ccd7da", /*  8: Base 03 - Bright Black */
	"#f76d47", /* 16: Base 09 */
	"#e7eaec", /* 18: Base 01 */
	"#cceae7", /* 19: Base 02 */
	"#8796b0", /* 20: Base 04 */
	"#80cbc4", /* 21: Base 06 */
	"#e53935", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#80cbc4", /* default fg: Base 05 */
	[257] = "#fafafa", /* default bg: Base 00 */
};

// Foreground, background and cursor
static unsigned int defaultfg = 256;
static unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

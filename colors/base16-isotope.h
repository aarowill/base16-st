// Base16 Isotope dark - simple terminal color setup
// Jan T. Sott
static const char *colorname[] = {
	/* Normal colors */
	"#000000", /*  0: Base 00 - Black   */
	"#ff0000", /*  1: Base 08 - Red     */
	"#33ff00", /*  2: Base 0B - Green   */
	"#ff0099", /*  3: Base 0A - Yellow  */
	"#0066ff", /*  4: Base 0D - Blue    */
	"#cc00ff", /*  5: Base 0E - Magenta */
	"#00ffff", /*  6: Base 0C - Cyan    */
	"#d0d0d0", /*  7: Base 05 - White   */

	/* Bright colors */
	"#808080", /*  8: Base 03 - Bright Black */
	"#ff9900", /* 16: Base 09 */
	"#404040", /* 18: Base 01 */
	"#606060", /* 19: Base 02 */
	"#c0c0c0", /* 20: Base 04 */
	"#e0e0e0", /* 21: Base 06 */
	"#3300ff", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#d0d0d0", /* default fg: Base 05 */
	[257] = "#000000", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

// Base16 Evenok Dark dark - simple terminal color setup
// Mekeor Melire
static const char *colorname[] = {
	/* Normal colors */
	"#000000", /*  0: Base 00 - Black   */
	"#f5708a", /*  1: Base 08 - Red     */
	"#54bc5c", /*  2: Base 0B - Green   */
	"#b8a300", /*  3: Base 0A - Yellow  */
	"#00aff2", /*  4: Base 0D - Blue    */
	"#9095ff", /*  5: Base 0E - Magenta */
	"#00bab3", /*  6: Base 0C - Cyan    */
	"#d0d0d0", /*  7: Base 05 - White   */

	/* Bright colors */
	"#505050", /*  8: Base 03 - Bright Black */
	"#ee8122", /* 16: Base 09 */
	"#202020", /* 18: Base 01 */
	"#303030", /* 19: Base 02 */
	"#b0b0b0", /* 20: Base 04 */
	"#e0e0e0", /* 21: Base 06 */
	"#d47ada", /* 17: Base 0F */
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

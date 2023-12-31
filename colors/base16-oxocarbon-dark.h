// Base16 Oxocarbon Dark dark - simple terminal color setup
// shaunsingh/IBM
static const char *colorname[] = {
	/* Normal colors */
	"#161616", /*  0: Base 00 - Black   */
	"#3ddbd9", /*  1: Base 08 - Red     */
	"#33b1ff", /*  2: Base 0B - Green   */
	"#ee5396", /*  3: Base 0A - Yellow  */
	"#42be65", /*  4: Base 0D - Blue    */
	"#be95ff", /*  5: Base 0E - Magenta */
	"#ff7eb6", /*  6: Base 0C - Cyan    */
	"#f2f4f8", /*  7: Base 05 - White   */

	/* Bright colors */
	"#525252", /*  8: Base 03 - Bright Black */
	"#78a9ff", /* 16: Base 09 */
	"#262626", /* 18: Base 01 */
	"#393939", /* 19: Base 02 */
	"#dde1e6", /* 20: Base 04 */
	"#ffffff", /* 21: Base 06 */
	"#82cfff", /* 17: Base 0F */
	"#08bdba", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#f2f4f8", /* default fg: Base 05 */
	[257] = "#161616", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

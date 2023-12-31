// Base16 Oxocarbon Light dark - simple terminal color setup
// shaunsingh/IBM
static const char *colorname[] = {
	/* Normal colors */
	"#f2f4f8", /*  0: Base 00 - Black   */
	"#ff7eb6", /*  1: Base 08 - Red     */
	"#0f62fe", /*  2: Base 0B - Green   */
	"#ff6f00", /*  3: Base 0A - Yellow  */
	"#42be65", /*  4: Base 0D - Blue    */
	"#be95ff", /*  5: Base 0E - Magenta */
	"#673ab7", /*  6: Base 0C - Cyan    */
	"#393939", /*  7: Base 05 - White   */

	/* Bright colors */
	"#161616", /*  8: Base 03 - Bright Black */
	"#ee5396", /* 16: Base 09 */
	"#dde1e6", /* 18: Base 01 */
	"#525252", /* 19: Base 02 */
	"#262626", /* 20: Base 04 */
	"#525252", /* 21: Base 06 */
	"#37474f", /* 17: Base 0F */
	"#08bdba", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#393939", /* default fg: Base 05 */
	[257] = "#f2f4f8", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

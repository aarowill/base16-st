// Base16 iA Dark dark - simple terminal color setup
// iA Inc. (modified by aramisgithub)
static const char *colorname[] = {
	/* Normal colors */
	"#1a1a1a", /*  0: Base 00 - Black   */
	"#d88568", /*  1: Base 08 - Red     */
	"#83a471", /*  2: Base 0B - Green   */
	"#b99353", /*  3: Base 0A - Yellow  */
	"#8eccdd", /*  4: Base 0D - Blue    */
	"#b98eb2", /*  5: Base 0E - Magenta */
	"#7c9cae", /*  6: Base 0C - Cyan    */
	"#cccccc", /*  7: Base 05 - White   */

	/* Bright colors */
	"#767676", /*  8: Base 03 - Bright Black */
	"#d86868", /* 16: Base 09 */
	"#222222", /* 18: Base 01 */
	"#1d414d", /* 19: Base 02 */
	"#b8b8b8", /* 20: Base 04 */
	"#e8e8e8", /* 21: Base 06 */
	"#8b6c37", /* 17: Base 0F */
	"#f8f8f8", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#cccccc", /* default fg: Base 05 */
	[257] = "#1a1a1a", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

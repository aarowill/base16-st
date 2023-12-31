// Base16 Rosé Pine Dawn dark - simple terminal color setup
// Emilia Dunfelt &lt;edun@dunfelt.se&gt;
static const char *colorname[] = {
	/* Normal colors */
	"#faf4ed", /*  0: Base 00 - Black   */
	"#b4637a", /*  1: Base 08 - Red     */
	"#286983", /*  2: Base 0B - Green   */
	"#d7827e", /*  3: Base 0A - Yellow  */
	"#907aa9", /*  4: Base 0D - Blue    */
	"#ea9d34", /*  5: Base 0E - Magenta */
	"#56949f", /*  6: Base 0C - Cyan    */
	"#575279", /*  7: Base 05 - White   */

	/* Bright colors */
	"#9893a5", /*  8: Base 03 - Bright Black */
	"#ea9d34", /* 16: Base 09 */
	"#fffaf3", /* 18: Base 01 */
	"#f2e9de", /* 19: Base 02 */
	"#797593", /* 20: Base 04 */
	"#575279", /* 21: Base 06 */
	"#cecacd", /* 17: Base 0F */
	"#cecacd", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#575279", /* default fg: Base 05 */
	[257] = "#faf4ed", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

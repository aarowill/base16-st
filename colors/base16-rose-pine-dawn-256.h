// Base16 Rosé Pine Dawn dark - simple terminal color setup
// Emilia Dunfelt &lt;sayhi@dunfelt.se&gt;
static const char *colorname[] = {
	/* Normal colors */
	"#faf4ed", /*  0: Base 00 - Black   */
	"#1f1d2e", /*  1: Base 08 - Red     */
	"#d7827e", /*  2: Base 0B - Green   */
	"#ea9d34", /*  3: Base 0A - Yellow  */
	"#56949f", /*  4: Base 0D - Blue    */
	"#907aa9", /*  5: Base 0E - Magenta */
	"#286983", /*  6: Base 0C - Cyan    */
	"#575279", /*  7: Base 05 - White   */

	/* Bright colors */
	"#9893a5", /*  8: Base 03 - Bright Black */
	"#1f1d2e", /*  9: Base 08 - Red          */
	"#d7827e", /* 10: Base 0B - Green        */
	"#ea9d34", /* 11: Base 0A - Yellow       */
	"#56949f", /* 12: Base 0D - Blue         */
	"#907aa9", /* 13: Base 0E - Magenta      */
	"#286983", /* 14: Base 0C - Cyan         */
	"#26233a", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#b4637a", /* 16: Base 09 */
	"#c5c3ce", /* 17: Base 0F */
	"#fffaf3", /* 18: Base 01 */
	"#f2e9de", /* 19: Base 02 */
	"#6e6a86", /* 20: Base 04 */
	"#555169", /* 21: Base 06 */

	[255] = 0,

	[256] = "#575279", /* default fg: Base 05 */
	[257] = "#faf4ed", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

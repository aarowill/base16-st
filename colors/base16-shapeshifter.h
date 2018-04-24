// Base16 Shapeshifter dark - simple terminal color setup
// Tyler Benziger (http://tybenz.com)
static const char *colorname[] = {
	/* Normal colors */
	"#f9f9f9", /*  0: Base 00 - Black   */
	"#e92f2f", /*  1: Base 08 - Red     */
	"#0ed839", /*  2: Base 0B - Green   */
	"#dddd13", /*  3: Base 0A - Yellow  */
	"#3b48e3", /*  4: Base 0D - Blue    */
	"#f996e2", /*  5: Base 0E - Magenta */
	"#23edda", /*  6: Base 0C - Cyan    */
	"#102015", /*  7: Base 05 - White   */

	/* Bright colors */
	"#555555", /*  8: Base 03 - Bright Black */
	"#e09448", /* 16: Base 09 */
	"#e0e0e0", /* 18: Base 01 */
	"#ababab", /* 19: Base 02 */
	"#343434", /* 20: Base 04 */
	"#040404", /* 21: Base 06 */
	"#69542d", /* 17: Base 0F */
	"#000000", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#102015", /* default fg: Base 05 */
	[257] = "#f9f9f9", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

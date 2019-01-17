// Base16 Heetch Dark dark - simple terminal color setup
// Geoffrey Teale (tealeg@gmail.com)
static const char *colorname[] = {
	/* Normal colors */
	"#190134", /*  0: Base 00 - Black   */
	"#27d9d5", /*  1: Base 08 - Red     */
	"#c33678", /*  2: Base 0B - Green   */
	"#8f6c97", /*  3: Base 0A - Yellow  */
	"#bd0152", /*  4: Base 0D - Blue    */
	"#82034c", /*  5: Base 0E - Magenta */
	"#f80059", /*  6: Base 0C - Cyan    */
	"#bdb6c5", /*  7: Base 05 - White   */

	/* Bright colors */
	"#7b6d8b", /*  8: Base 03 - Bright Black */
	"#5ba2b6", /* 16: Base 09 */
	"#392551", /* 18: Base 01 */
	"#5a496e", /* 19: Base 02 */
	"#9c92a8", /* 20: Base 04 */
	"#dedae2", /* 21: Base 06 */
	"#470546", /* 17: Base 0F */
	"#feffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#bdb6c5", /* default fg: Base 05 */
	[257] = "#190134", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

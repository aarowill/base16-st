// Base16 Atlas dark - simple terminal color setup
// Alex Lende (https://ajlende.com)
static const char *colorname[] = {
	/* Normal colors */
	"#002635", /*  0: Base 00 - Black   */
	"#ff5a67", /*  1: Base 08 - Red     */
	"#7fc06e", /*  2: Base 0B - Green   */
	"#ffcc1b", /*  3: Base 0A - Yellow  */
	"#5dd7b9", /*  4: Base 0D - Blue    */
	"#9a70a4", /*  5: Base 0E - Magenta */
	"#14747e", /*  6: Base 0C - Cyan    */
	"#a1a19a", /*  7: Base 05 - White   */

	/* Bright colors */
	"#6c8b91", /*  8: Base 03 - Bright Black */
	"#f08e48", /* 16: Base 09 */
	"#00384d", /* 18: Base 01 */
	"#517f8d", /* 19: Base 02 */
	"#869696", /* 20: Base 04 */
	"#e6e6dc", /* 21: Base 06 */
	"#c43060", /* 17: Base 0F */
	"#fafaf8", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#a1a19a", /* default fg: Base 05 */
	[257] = "#002635", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

// Base16 Colors dark - simple terminal color setup
// mrmrs (http://clrs.cc)
static const char *colorname[] = {
	/* Normal colors */
	"#111111", /*  0: Base 00 - Black   */
	"#ff4136", /*  1: Base 08 - Red     */
	"#2ecc40", /*  2: Base 0B - Green   */
	"#ffdc00", /*  3: Base 0A - Yellow  */
	"#0074d9", /*  4: Base 0D - Blue    */
	"#b10dc9", /*  5: Base 0E - Magenta */
	"#7fdbff", /*  6: Base 0C - Cyan    */
	"#bbbbbb", /*  7: Base 05 - White   */

	/* Bright colors */
	"#777777", /*  8: Base 03 - Bright Black */
	"#ff851b", /* 16: Base 09 */
	"#333333", /* 18: Base 01 */
	"#555555", /* 19: Base 02 */
	"#999999", /* 20: Base 04 */
	"#dddddd", /* 21: Base 06 */
	"#85144b", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#bbbbbb", /* default fg: Base 05 */
	[257] = "#111111", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

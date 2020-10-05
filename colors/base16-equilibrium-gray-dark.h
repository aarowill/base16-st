// Base16 Equilibrium Gray Dark dark - simple terminal color setup
// Carlo Abelli
static const char *colorname[] = {
	/* Normal colors */
	"#111111", /*  0: Base 00 - Black   */
	"#f04339", /*  1: Base 08 - Red     */
	"#7f8b00", /*  2: Base 0B - Green   */
	"#bb8801", /*  3: Base 0A - Yellow  */
	"#008dd1", /*  4: Base 0D - Blue    */
	"#6a7fd2", /*  5: Base 0E - Magenta */
	"#00948b", /*  6: Base 0C - Cyan    */
	"#ababab", /*  7: Base 05 - White   */

	/* Bright colors */
	"#777777", /*  8: Base 03 - Bright Black */
	"#df5923", /* 16: Base 09 */
	"#1b1b1b", /* 18: Base 01 */
	"#262626", /* 19: Base 02 */
	"#919191", /* 20: Base 04 */
	"#c6c6c6", /* 21: Base 06 */
	"#e3488e", /* 17: Base 0F */
	"#e2e2e2", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#ababab", /* default fg: Base 05 */
	[257] = "#111111", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

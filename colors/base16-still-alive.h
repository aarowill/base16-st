// Base16 Still Alive dark - simple terminal color setup
// Derrick McKee (derrick.mckee@gmail.com)
static const char *colorname[] = {
	/* Normal colors */
	"#f0f0f0", /*  0: Base 00 - Black   */
	"#487830", /*  1: Base 08 - Red     */
	"#5c5c6a", /*  2: Base 0B - Green   */
	"#426395", /*  3: Base 0A - Yellow  */
	"#001878", /*  4: Base 0D - Blue    */
	"#900000", /*  5: Base 0E - Magenta */
	"#2c3c57", /*  6: Base 0C - Cyan    */
	"#d80000", /*  7: Base 05 - White   */

	/* Bright colors */
	"#f01818", /*  8: Base 03 - Bright Black */
	"#183048", /* 16: Base 09 */
	"#f0d848", /* 18: Base 01 */
	"#fff018", /* 19: Base 02 */
	"#f00000", /* 20: Base 04 */
	"#489000", /* 21: Base 06 */
	"#140c0d", /* 17: Base 0F */
	"#30a860", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#d80000", /* default fg: Base 05 */
	[257] = "#f0f0f0", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

// Base16 Spaceduck dark - simple terminal color setup
// Guillermo Rodriguez (https://github.com/pineapplegiant), packaged by Gabriel Fontes (https://github.com/Misterio77)
static const char *colorname[] = {
	/* Normal colors */
	"#16172d", /*  0: Base 00 - Black   */
	"#e33400", /*  1: Base 08 - Red     */
	"#5ccc96", /*  2: Base 0B - Green   */
	"#f2ce00", /*  3: Base 0A - Yellow  */
	"#7a5ccc", /*  4: Base 0D - Blue    */
	"#b3a1e6", /*  5: Base 0E - Magenta */
	"#00a3cc", /*  6: Base 0C - Cyan    */
	"#ecf0c1", /*  7: Base 05 - White   */

	/* Bright colors */
	"#686f9a", /*  8: Base 03 - Bright Black */
	"#e39400", /* 16: Base 09 */
	"#1b1c36", /* 18: Base 01 */
	"#30365f", /* 19: Base 02 */
	"#818596", /* 20: Base 04 */
	"#c1c3cc", /* 21: Base 06 */
	"#ce6f8f", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#ecf0c1", /* default fg: Base 05 */
	[257] = "#16172d", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

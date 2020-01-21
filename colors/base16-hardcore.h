// Base16 Hardcore dark - simple terminal color setup
// Chris Caller
static const char *colorname[] = {
	/* Normal colors */
	"#212121", /*  0: Base 00 - Black   */
	"#f92672", /*  1: Base 08 - Red     */
	"#a6e22e", /*  2: Base 0B - Green   */
	"#e6db74", /*  3: Base 0A - Yellow  */
	"#66d9ef", /*  4: Base 0D - Blue    */
	"#9e6ffe", /*  5: Base 0E - Magenta */
	"#708387", /*  6: Base 0C - Cyan    */
	"#cdcdcd", /*  7: Base 05 - White   */

	/* Bright colors */
	"#4a4a4a", /*  8: Base 03 - Bright Black */
	"#fd971f", /* 16: Base 09 */
	"#303030", /* 18: Base 01 */
	"#353535", /* 19: Base 02 */
	"#707070", /* 20: Base 04 */
	"#e5e5e5", /* 21: Base 06 */
	"#e8b882", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#cdcdcd", /* default fg: Base 05 */
	[257] = "#212121", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

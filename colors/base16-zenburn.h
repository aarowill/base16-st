// Base16 Zenburn dark - simple terminal color setup
// elnawe
static const char *colorname[] = {
	/* Normal colors */
	"#383838", /*  0: Base 00 - Black   */
	"#dca3a3", /*  1: Base 08 - Red     */
	"#5f7f5f", /*  2: Base 0B - Green   */
	"#e0cf9f", /*  3: Base 0A - Yellow  */
	"#7cb8bb", /*  4: Base 0D - Blue    */
	"#dc8cc3", /*  5: Base 0E - Magenta */
	"#93e0e3", /*  6: Base 0C - Cyan    */
	"#dcdccc", /*  7: Base 05 - White   */

	/* Bright colors */
	"#6f6f6f", /*  8: Base 03 - Bright Black */
	"#dfaf8f", /* 16: Base 09 */
	"#404040", /* 18: Base 01 */
	"#606060", /* 19: Base 02 */
	"#808080", /* 20: Base 04 */
	"#c0c0c0", /* 21: Base 06 */
	"#000000", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#dcdccc", /* default fg: Base 05 */
	[257] = "#383838", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

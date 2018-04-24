// Base16 XCode Dusk dark - simple terminal color setup
// Elsa Gonsiorowski (https://github.com/gonsie)
static const char *colorname[] = {
	/* Normal colors */
	"#282b35", /*  0: Base 00 - Black   */
	"#b21889", /*  1: Base 08 - Red     */
	"#df0002", /*  2: Base 0B - Green   */
	"#438288", /*  3: Base 0A - Yellow  */
	"#790ead", /*  4: Base 0D - Blue    */
	"#b21889", /*  5: Base 0E - Magenta */
	"#00a0be", /*  6: Base 0C - Cyan    */
	"#939599", /*  7: Base 05 - White   */

	/* Bright colors */
	"#686a71", /*  8: Base 03 - Bright Black */
	"#786dc5", /* 16: Base 09 */
	"#3d4048", /* 18: Base 01 */
	"#53555d", /* 19: Base 02 */
	"#7e8086", /* 20: Base 04 */
	"#a9aaae", /* 21: Base 06 */
	"#c77c48", /* 17: Base 0F */
	"#bebfc2", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#939599", /* default fg: Base 05 */
	[257] = "#282b35", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

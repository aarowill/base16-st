// Base16 selenized-white dark - simple terminal color setup
// Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
static const char *colorname[] = {
	/* Normal colors */
	"#ffffff", /*  0: Base 00 - Black   */
	"#bf0000", /*  1: Base 08 - Red     */
	"#008400", /*  2: Base 0B - Green   */
	"#af8500", /*  3: Base 0A - Yellow  */
	"#0054cf", /*  4: Base 0D - Blue    */
	"#6b40c3", /*  5: Base 0E - Magenta */
	"#009a8a", /*  6: Base 0C - Cyan    */
	"#474747", /*  7: Base 05 - White   */

	/* Bright colors */
	"#878787", /*  8: Base 03 - Bright Black */
	"#ba3700", /* 16: Base 09 */
	"#ebebeb", /* 18: Base 01 */
	"#cdcdcd", /* 19: Base 02 */
	"#878787", /* 20: Base 04 */
	"#282828", /* 21: Base 06 */
	"#dd0f9d", /* 17: Base 0F */
	"#282828", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#474747", /* default fg: Base 05 */
	[257] = "#ffffff", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

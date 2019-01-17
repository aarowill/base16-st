// Base16 Icy Dark dark - simple terminal color setup
// icyphox (https://icyphox.ga)
static const char *colorname[] = {
	/* Normal colors */
	"#021012", /*  0: Base 00 - Black   */
	"#16c1d9", /*  1: Base 08 - Red     */
	"#4dd0e1", /*  2: Base 0B - Green   */
	"#80deea", /*  3: Base 0A - Yellow  */
	"#00bcd4", /*  4: Base 0D - Blue    */
	"#00acc1", /*  5: Base 0E - Magenta */
	"#26c6da", /*  6: Base 0C - Cyan    */
	"#095b67", /*  7: Base 05 - White   */

	/* Bright colors */
	"#052e34", /*  8: Base 03 - Bright Black */
	"#b3ebf2", /* 16: Base 09 */
	"#031619", /* 18: Base 01 */
	"#041f23", /* 19: Base 02 */
	"#064048", /* 20: Base 04 */
	"#0c7c8c", /* 21: Base 06 */
	"#0097a7", /* 17: Base 0F */
	"#109cb0", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#095b67", /* default fg: Base 05 */
	[257] = "#021012", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

// Base16 Rosé Pine dark - simple terminal color setup
// Emilia Dunfelt &lt;sayhi@dunfelt.se&gt;
static const char *colorname[] = {
	/* Normal colors */
	"#191724", /*  0: Base 00 - Black   */
	"#e2e1e7", /*  1: Base 08 - Red     */
	"#ebbcba", /*  2: Base 0B - Green   */
	"#f6c177", /*  3: Base 0A - Yellow  */
	"#9ccfd8", /*  4: Base 0D - Blue    */
	"#c4a7e7", /*  5: Base 0E - Magenta */
	"#31748f", /*  6: Base 0C - Cyan    */
	"#e0def4", /*  7: Base 05 - White   */

	/* Bright colors */
	"#555169", /*  8: Base 03 - Bright Black */
	"#eb6f92", /* 16: Base 09 */
	"#1f1d2e", /* 18: Base 01 */
	"#26233a", /* 19: Base 02 */
	"#6e6a86", /* 20: Base 04 */
	"#f0f0f3", /* 21: Base 06 */
	"#e5e5e5", /* 17: Base 0F */
	"#c5c3ce", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#e0def4", /* default fg: Base 05 */
	[257] = "#191724", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

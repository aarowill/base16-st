// Base16 Rosé Pine dark - simple terminal color setup
// Emilia Dunfelt &lt;edun@dunfelt.se&gt;
static const char *colorname[] = {
	/* Normal colors */
	"#191724", /*  0: Base 00 - Black   */
	"#eb6f92", /*  1: Base 08 - Red     */
	"#31748f", /*  2: Base 0B - Green   */
	"#ebbcba", /*  3: Base 0A - Yellow  */
	"#c4a7e7", /*  4: Base 0D - Blue    */
	"#f6c177", /*  5: Base 0E - Magenta */
	"#9ccfd8", /*  6: Base 0C - Cyan    */
	"#e0def4", /*  7: Base 05 - White   */

	/* Bright colors */
	"#6e6a86", /*  8: Base 03 - Bright Black */
	"#eb6f92", /*  9: Base 08 - Red          */
	"#31748f", /* 10: Base 0B - Green        */
	"#ebbcba", /* 11: Base 0A - Yellow       */
	"#c4a7e7", /* 12: Base 0D - Blue         */
	"#f6c177", /* 13: Base 0E - Magenta      */
	"#9ccfd8", /* 14: Base 0C - Cyan         */
	"#524f67", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#f6c177", /* 16: Base 09 */
	"#524f67", /* 17: Base 0F */
	"#1f1d2e", /* 18: Base 01 */
	"#26233a", /* 19: Base 02 */
	"#908caa", /* 20: Base 04 */
	"#e0def4", /* 21: Base 06 */

	[255] = 0,

	[256] = "#e0def4", /* default fg: Base 05 */
	[257] = "#191724", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

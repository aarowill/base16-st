// Base16 Outrun Dark dark - simple terminal color setup
// Hugo Delahousse (http://github.com/hugodelahousse/)
static const char *colorname[] = {
	/* Normal colors */
	"#00002a", /*  0: Base 00 - Black   */
	"#ff4242", /*  1: Base 08 - Red     */
	"#59f176", /*  2: Base 0B - Green   */
	"#f3e877", /*  3: Base 0A - Yellow  */
	"#66b0ff", /*  4: Base 0D - Blue    */
	"#f10596", /*  5: Base 0E - Magenta */
	"#0ef0f0", /*  6: Base 0C - Cyan    */
	"#d0d0fa", /*  7: Base 05 - White   */

	/* Bright colors */
	"#50507a", /*  8: Base 03 - Bright Black */
	"#ff4242", /*  9: Base 08 - Red          */
	"#59f176", /* 10: Base 0B - Green        */
	"#f3e877", /* 11: Base 0A - Yellow       */
	"#66b0ff", /* 12: Base 0D - Blue         */
	"#f10596", /* 13: Base 0E - Magenta      */
	"#0ef0f0", /* 14: Base 0C - Cyan         */
	"#f5f5ff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#fc8d28", /* 16: Base 09 */
	"#f003ef", /* 17: Base 0F */
	"#20204a", /* 18: Base 01 */
	"#30305a", /* 19: Base 02 */
	"#b0b0da", /* 20: Base 04 */
	"#e0e0ff", /* 21: Base 06 */

	[255] = 0,

	[256] = "#d0d0fa", /* default fg: Base 05 */
	[257] = "#00002a", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

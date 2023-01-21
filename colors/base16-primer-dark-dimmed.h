// Base16 Primer Dark Dimmed dark - simple terminal color setup
// Jimmy Lin
static const char *colorname[] = {
	/* Normal colors */
	"#1c2128", /*  0: Base 00 - Black   */
	"#f47067", /*  1: Base 08 - Red     */
	"#57ab5a", /*  2: Base 0B - Green   */
	"#c69026", /*  3: Base 0A - Yellow  */
	"#539bf5", /*  4: Base 0D - Blue    */
	"#e275ad", /*  5: Base 0E - Magenta */
	"#96d0ff", /*  6: Base 0C - Cyan    */
	"#909dab", /*  7: Base 05 - White   */

	/* Bright colors */
	"#545d68", /*  8: Base 03 - Bright Black */
	"#e0823d", /* 16: Base 09 */
	"#373e47", /* 18: Base 01 */
	"#444c56", /* 19: Base 02 */
	"#768390", /* 20: Base 04 */
	"#adbac7", /* 21: Base 06 */
	"#ae5622", /* 17: Base 0F */
	"#cdd9e5", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#909dab", /* default fg: Base 05 */
	[257] = "#1c2128", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

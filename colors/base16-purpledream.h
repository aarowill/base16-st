// Base16 Purpledream dark - simple terminal color setup
// malet
static const char *colorname[] = {
	/* Normal colors */
	"#100510", /*  0: Base 00 - Black   */
	"#ff1d0d", /*  1: Base 08 - Red     */
	"#14cc64", /*  2: Base 0B - Green   */
	"#f000a0", /*  3: Base 0A - Yellow  */
	"#00a0f0", /*  4: Base 0D - Blue    */
	"#b000d0", /*  5: Base 0E - Magenta */
	"#0075b0", /*  6: Base 0C - Cyan    */
	"#ddd0dd", /*  7: Base 05 - White   */

	/* Bright colors */
	"#605060", /*  8: Base 03 - Bright Black */
	"#ccae14", /* 16: Base 09 */
	"#302030", /* 18: Base 01 */
	"#403040", /* 19: Base 02 */
	"#bbb0bb", /* 20: Base 04 */
	"#eee0ee", /* 21: Base 06 */
	"#6a2a3c", /* 17: Base 0F */
	"#fff0ff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#ddd0dd", /* default fg: Base 05 */
	[257] = "#100510", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

// Base16 One Light dark - simple terminal color setup
// Daniel Pfeifer (http://github.com/purpleKarrot)
static const char *colorname[] = {
	/* Normal colors */
	"#fafafa", /*  0: Base 00 - Black   */
	"#ca1243", /*  1: Base 08 - Red     */
	"#50a14f", /*  2: Base 0B - Green   */
	"#c18401", /*  3: Base 0A - Yellow  */
	"#4078f2", /*  4: Base 0D - Blue    */
	"#a626a4", /*  5: Base 0E - Magenta */
	"#0184bc", /*  6: Base 0C - Cyan    */
	"#383a42", /*  7: Base 05 - White   */

	/* Bright colors */
	"#a0a1a7", /*  8: Base 03 - Bright Black */
	"#d75f00", /* 16: Base 09 */
	"#f0f0f1", /* 18: Base 01 */
	"#e5e5e6", /* 19: Base 02 */
	"#696c77", /* 20: Base 04 */
	"#202227", /* 21: Base 06 */
	"#986801", /* 17: Base 0F */
	"#090a0b", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#383a42", /* default fg: Base 05 */
	[257] = "#fafafa", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

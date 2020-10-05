// Base16 Nebula dark - simple terminal color setup
// Gabriel Fontes (https://github.com/Misterio77)
static const char *colorname[] = {
	/* Normal colors */
	"#22273b", /*  0: Base 00 - Black   */
	"#777abc", /*  1: Base 08 - Red     */
	"#6562a8", /*  2: Base 0B - Green   */
	"#4f9062", /*  3: Base 0A - Yellow  */
	"#4d6bb6", /*  4: Base 0D - Blue    */
	"#716cae", /*  5: Base 0E - Magenta */
	"#226f68", /*  6: Base 0C - Cyan    */
	"#a4a6a9", /*  7: Base 05 - White   */

	/* Bright colors */
	"#6e6f72", /*  8: Base 03 - Bright Black */
	"#94929e", /* 16: Base 09 */
	"#414f60", /* 18: Base 01 */
	"#5a8380", /* 19: Base 02 */
	"#87888b", /* 20: Base 04 */
	"#c7c9cd", /* 21: Base 06 */
	"#8c70a7", /* 17: Base 0F */
	"#8dbdaa", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#a4a6a9", /* default fg: Base 05 */
	[257] = "#22273b", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

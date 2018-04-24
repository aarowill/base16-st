// Base16 Github dark - simple terminal color setup
// Defman21
static const char *colorname[] = {
	/* Normal colors */
	"#ffffff", /*  0: Base 00 - Black   */
	"#ed6a43", /*  1: Base 08 - Red     */
	"#183691", /*  2: Base 0B - Green   */
	"#795da3", /*  3: Base 0A - Yellow  */
	"#795da3", /*  4: Base 0D - Blue    */
	"#a71d5d", /*  5: Base 0E - Magenta */
	"#183691", /*  6: Base 0C - Cyan    */
	"#333333", /*  7: Base 05 - White   */

	/* Bright colors */
	"#969896", /*  8: Base 03 - Bright Black */
	"#0086b3", /* 16: Base 09 */
	"#f5f5f5", /* 18: Base 01 */
	"#c8c8fa", /* 19: Base 02 */
	"#e8e8e8", /* 20: Base 04 */
	"#ffffff", /* 21: Base 06 */
	"#333333", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#333333", /* default fg: Base 05 */
	[257] = "#ffffff", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

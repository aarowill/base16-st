// Base16 Material Palenight dark - simple terminal color setup
// Nate Peterson
static const char *colorname[] = {
	/* Normal colors */
	"#292d3e", /*  0: Base 00 - Black   */
	"#f07178", /*  1: Base 08 - Red     */
	"#c3e88d", /*  2: Base 0B - Green   */
	"#ffcb6b", /*  3: Base 0A - Yellow  */
	"#82aaff", /*  4: Base 0D - Blue    */
	"#c792ea", /*  5: Base 0E - Magenta */
	"#89ddff", /*  6: Base 0C - Cyan    */
	"#959dcb", /*  7: Base 05 - White   */

	/* Bright colors */
	"#676e95", /*  8: Base 03 - Bright Black */
	"#f78c6c", /* 16: Base 09 */
	"#444267", /* 18: Base 01 */
	"#32374d", /* 19: Base 02 */
	"#8796b0", /* 20: Base 04 */
	"#959dcb", /* 21: Base 06 */
	"#ff5370", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#959dcb", /* default fg: Base 05 */
	[257] = "#292d3e", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

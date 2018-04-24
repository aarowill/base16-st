// Base16 Material Darker dark - simple terminal color setup
// Nate Peterson
static const char *colorname[] = {
	/* Normal colors */
	"#212121", /*  0: Base 00 - Black   */
	"#f07178", /*  1: Base 08 - Red     */
	"#c3e88d", /*  2: Base 0B - Green   */
	"#ffcb6b", /*  3: Base 0A - Yellow  */
	"#82aaff", /*  4: Base 0D - Blue    */
	"#c792ea", /*  5: Base 0E - Magenta */
	"#89ddff", /*  6: Base 0C - Cyan    */
	"#eeffff", /*  7: Base 05 - White   */

	/* Bright colors */
	"#4a4a4a", /*  8: Base 03 - Bright Black */
	"#f78c6c", /* 16: Base 09 */
	"#303030", /* 18: Base 01 */
	"#353535", /* 19: Base 02 */
	"#b2ccd6", /* 20: Base 04 */
	"#eeffff", /* 21: Base 06 */
	"#ff5370", /* 17: Base 0F */
	"#ffffff", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#eeffff", /* default fg: Base 05 */
	[257] = "#212121", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

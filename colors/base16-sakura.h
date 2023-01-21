// Base16 Sakura dark - simple terminal color setup
// Misterio77 (http://github.com/Misterio77)
static const char *colorname[] = {
	/* Normal colors */
	"#feedf3", /*  0: Base 00 - Black   */
	"#df2d52", /*  1: Base 08 - Red     */
	"#2e916d", /*  2: Base 0B - Green   */
	"#c29461", /*  3: Base 0A - Yellow  */
	"#006e93", /*  4: Base 0D - Blue    */
	"#5e2180", /*  5: Base 0E - Magenta */
	"#1d8991", /*  6: Base 0C - Cyan    */
	"#564448", /*  7: Base 05 - White   */

	/* Bright colors */
	"#755f64", /*  8: Base 03 - Bright Black */
	"#f6661e", /* 16: Base 09 */
	"#f8e2e7", /* 18: Base 01 */
	"#e0ccd1", /* 19: Base 02 */
	"#665055", /* 20: Base 04 */
	"#42383a", /* 21: Base 06 */
	"#ba0d35", /* 17: Base 0F */
	"#33292b", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#564448", /* default fg: Base 05 */
	[257] = "#feedf3", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

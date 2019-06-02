// Base16 Horizon Dark dark - simple terminal color setup
// Michaël Ball (http://github.com/michael-ball/)
static const char *colorname[] = {
	/* Normal colors */
	"#1c1e26", /*  0: Base 00 - Black   */
	"#e93c58", /*  1: Base 08 - Red     */
	"#efaf8e", /*  2: Base 0B - Green   */
	"#efb993", /*  3: Base 0A - Yellow  */
	"#df5273", /*  4: Base 0D - Blue    */
	"#b072d1", /*  5: Base 0E - Magenta */
	"#24a8b4", /*  6: Base 0C - Cyan    */
	"#cbced0", /*  7: Base 05 - White   */

	/* Bright colors */
	"#676a8d", /*  8: Base 03 - Bright Black */
	"#e93c58", /*  9: Base 08 - Red          */
	"#efaf8e", /* 10: Base 0B - Green        */
	"#efb993", /* 11: Base 0A - Yellow       */
	"#df5273", /* 12: Base 0D - Blue         */
	"#b072d1", /* 13: Base 0E - Magenta      */
	"#24a8b4", /* 14: Base 0C - Cyan         */
	"#e3e6ee", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#e58d7d", /* 16: Base 09 */
	"#e4a382", /* 17: Base 0F */
	"#232530", /* 18: Base 01 */
	"#2e303e", /* 19: Base 02 */
	"#ced1d0", /* 20: Base 04 */
	"#dcdfe4", /* 21: Base 06 */

	[255] = 0,

	[256] = "#cbced0", /* default fg: Base 05 */
	[257] = "#1c1e26", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

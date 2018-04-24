// Base16 Rebecca dark - simple terminal color setup
// Victor Borja (http://github.com/vic) based on Rebecca Theme (http://github.com/vic/rebecca-theme)
static const char *colorname[] = {
	/* Normal colors */
	"#292a44", /*  0: Base 00 - Black   */
	"#a0a0c5", /*  1: Base 08 - Red     */
	"#6dfedf", /*  2: Base 0B - Green   */
	"#ae81ff", /*  3: Base 0A - Yellow  */
	"#2de0a7", /*  4: Base 0D - Blue    */
	"#7aa5ff", /*  5: Base 0E - Magenta */
	"#8eaee0", /*  6: Base 0C - Cyan    */
	"#f1eff8", /*  7: Base 05 - White   */

	/* Bright colors */
	"#666699", /*  8: Base 03 - Bright Black */
	"#a0a0c5", /*  9: Base 08 - Red          */
	"#6dfedf", /* 10: Base 0B - Green        */
	"#ae81ff", /* 11: Base 0A - Yellow       */
	"#2de0a7", /* 12: Base 0D - Blue         */
	"#7aa5ff", /* 13: Base 0E - Magenta      */
	"#8eaee0", /* 14: Base 0C - Cyan         */
	"#53495d", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#efe4a1", /* 16: Base 09 */
	"#ff79c6", /* 17: Base 0F */
	"#663399", /* 18: Base 01 */
	"#383a62", /* 19: Base 02 */
	"#a0a0c5", /* 20: Base 04 */
	"#ccccff", /* 21: Base 06 */

	[255] = 0,

	[256] = "#f1eff8", /* default fg: Base 05 */
	[257] = "#292a44", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

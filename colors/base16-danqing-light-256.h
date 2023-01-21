// Base16 DanQing Light dark - simple terminal color setup
// Wenhan Zhu (Cosmos) (zhuwenhan950913@gmail.com)
static const char *colorname[] = {
	/* Normal colors */
	"#fcfefd", /*  0: Base 00 - Black   */
	"#f9906f", /*  1: Base 08 - Red     */
	"#8ab361", /*  2: Base 0B - Green   */
	"#f0c239", /*  3: Base 0A - Yellow  */
	"#b0a4e3", /*  4: Base 0D - Blue    */
	"#cca4e3", /*  5: Base 0E - Magenta */
	"#30dff3", /*  6: Base 0C - Cyan    */
	"#5a605d", /*  7: Base 05 - White   */

	/* Bright colors */
	"#cad8d2", /*  8: Base 03 - Bright Black */
	"#f9906f", /*  9: Base 08 - Red          */
	"#8ab361", /* 10: Base 0B - Green        */
	"#f0c239", /* 11: Base 0A - Yellow       */
	"#b0a4e3", /* 12: Base 0D - Blue         */
	"#cca4e3", /* 13: Base 0E - Magenta      */
	"#30dff3", /* 14: Base 0C - Cyan         */
	"#2d302f", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#b38a61", /* 16: Base 09 */
	"#ca6924", /* 17: Base 0F */
	"#ecf6f2", /* 18: Base 01 */
	"#e0f0ef", /* 19: Base 02 */
	"#9da8a3", /* 20: Base 04 */
	"#434846", /* 21: Base 06 */

	[255] = 0,

	[256] = "#5a605d", /* default fg: Base 05 */
	[257] = "#fcfefd", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

// Base16 DanQing dark - simple terminal color setup
// Wenhan Zhu (Cosmos) (zhuwenhan950913@gmail.com)
static const char *colorname[] = {
	/* Normal colors */
	"#2d302f", /*  0: Base 00 - Black   */
	"#f9906f", /*  1: Base 08 - Red     */
	"#8ab361", /*  2: Base 0B - Green   */
	"#f0c239", /*  3: Base 0A - Yellow  */
	"#b0a4e3", /*  4: Base 0D - Blue    */
	"#cca4e3", /*  5: Base 0E - Magenta */
	"#30dff3", /*  6: Base 0C - Cyan    */
	"#e0f0ef", /*  7: Base 05 - White   */

	/* Bright colors */
	"#9da8a3", /*  8: Base 03 - Bright Black */
	"#f9906f", /*  9: Base 08 - Red          */
	"#8ab361", /* 10: Base 0B - Green        */
	"#f0c239", /* 11: Base 0A - Yellow       */
	"#b0a4e3", /* 12: Base 0D - Blue         */
	"#cca4e3", /* 13: Base 0E - Magenta      */
	"#30dff3", /* 14: Base 0C - Cyan         */
	"#fcfefd", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#b38a61", /* 16: Base 09 */
	"#ca6924", /* 17: Base 0F */
	"#434846", /* 18: Base 01 */
	"#5a605d", /* 19: Base 02 */
	"#cad8d2", /* 20: Base 04 */
	"#ecf6f2", /* 21: Base 06 */

	[255] = 0,

	[256] = "#e0f0ef", /* default fg: Base 05 */
	[257] = "#2d302f", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

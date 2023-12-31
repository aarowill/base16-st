// Base16 Jabuti dark - simple terminal color setup
// https://github.com/notusknot
static const char *colorname[] = {
	/* Normal colors */
	"#292a37", /*  0: Base 00 - Black   */
	"#ec6a88", /*  1: Base 08 - Red     */
	"#3fdaa4", /*  2: Base 0B - Green   */
	"#e1c697", /*  3: Base 0A - Yellow  */
	"#3fc6de", /*  4: Base 0D - Blue    */
	"#be95ff", /*  5: Base 0E - Magenta */
	"#ff7eb6", /*  6: Base 0C - Cyan    */
	"#c0cbe3", /*  7: Base 05 - White   */

	/* Bright colors */
	"#45475d", /*  8: Base 03 - Bright Black */
	"#ec6a88", /*  9: Base 08 - Red          */
	"#3fdaa4", /* 10: Base 0B - Green        */
	"#e1c697", /* 11: Base 0A - Yellow       */
	"#3fc6de", /* 12: Base 0D - Blue         */
	"#be95ff", /* 13: Base 0E - Magenta      */
	"#ff7eb6", /* 14: Base 0C - Cyan         */
	"#ffffff", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#efb993", /* 16: Base 09 */
	"#8b8da9", /* 17: Base 0F */
	"#343545", /* 18: Base 01 */
	"#3c3e51", /* 19: Base 02 */
	"#50526b", /* 20: Base 04 */
	"#d9e0ee", /* 21: Base 06 */

	[255] = 0,

	[256] = "#c0cbe3", /* default fg: Base 05 */
	[257] = "#292a37", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

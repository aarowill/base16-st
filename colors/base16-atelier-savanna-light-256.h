// Base16 Atelier Savanna Light dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#ecf4ee", /*  0: Base 00 - Black   */
	"#b16139", /*  1: Base 08 - Red     */
	"#489963", /*  2: Base 0B - Green   */
	"#a07e3b", /*  3: Base 0A - Yellow  */
	"#478c90", /*  4: Base 0D - Blue    */
	"#55859b", /*  5: Base 0E - Magenta */
	"#1c9aa0", /*  6: Base 0C - Cyan    */
	"#526057", /*  7: Base 05 - White   */

	/* Bright colors */
	"#78877d", /*  8: Base 03 - Bright Black */
	"#b16139", /*  9: Base 08 - Red          */
	"#489963", /* 10: Base 0B - Green        */
	"#a07e3b", /* 11: Base 0A - Yellow       */
	"#478c90", /* 12: Base 0D - Blue         */
	"#55859b", /* 13: Base 0E - Magenta      */
	"#1c9aa0", /* 14: Base 0C - Cyan         */
	"#171c19", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#9f713c", /* 16: Base 09 */
	"#867469", /* 17: Base 0F */
	"#dfe7e2", /* 18: Base 01 */
	"#87928a", /* 19: Base 02 */
	"#5f6d64", /* 20: Base 04 */
	"#232a25", /* 21: Base 06 */

	[255] = 0,

	[256] = "#526057", /* default fg: Base 05 */
	[257] = "#ecf4ee", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

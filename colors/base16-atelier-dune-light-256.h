// Base16 Atelier Dune Light dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#fefbec", /*  0: Base 00 - Black   */
	"#d73737", /*  1: Base 08 - Red     */
	"#60ac39", /*  2: Base 0B - Green   */
	"#ae9513", /*  3: Base 0A - Yellow  */
	"#6684e1", /*  4: Base 0D - Blue    */
	"#b854d4", /*  5: Base 0E - Magenta */
	"#1fad83", /*  6: Base 0C - Cyan    */
	"#6e6b5e", /*  7: Base 05 - White   */

	/* Bright colors */
	"#999580", /*  8: Base 03 - Bright Black */
	"#d73737", /*  9: Base 08 - Red          */
	"#60ac39", /* 10: Base 0B - Green        */
	"#ae9513", /* 11: Base 0A - Yellow       */
	"#6684e1", /* 12: Base 0D - Blue         */
	"#b854d4", /* 13: Base 0E - Magenta      */
	"#1fad83", /* 14: Base 0C - Cyan         */
	"#20201d", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#b65611", /* 16: Base 09 */
	"#d43552", /* 17: Base 0F */
	"#e8e4cf", /* 18: Base 01 */
	"#a6a28c", /* 19: Base 02 */
	"#7d7a68", /* 20: Base 04 */
	"#292824", /* 21: Base 06 */

	[255] = 0,

	[256] = "#6e6b5e", /* default fg: Base 05 */
	[257] = "#fefbec", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

// Base16 Atelier Plateau Light dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#f4ecec", /*  0: Base 00 - Black   */
	"#ca4949", /*  1: Base 08 - Red     */
	"#4b8b8b", /*  2: Base 0B - Green   */
	"#a06e3b", /*  3: Base 0A - Yellow  */
	"#7272ca", /*  4: Base 0D - Blue    */
	"#8464c4", /*  5: Base 0E - Magenta */
	"#5485b6", /*  6: Base 0C - Cyan    */
	"#585050", /*  7: Base 05 - White   */

	/* Bright colors */
	"#7e7777", /*  8: Base 03 - Bright Black */
	"#ca4949", /*  9: Base 08 - Red          */
	"#4b8b8b", /* 10: Base 0B - Green        */
	"#a06e3b", /* 11: Base 0A - Yellow       */
	"#7272ca", /* 12: Base 0D - Blue         */
	"#8464c4", /* 13: Base 0E - Magenta      */
	"#5485b6", /* 14: Base 0C - Cyan         */
	"#1b1818", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#b45a3c", /* 16: Base 09 */
	"#bd5187", /* 17: Base 0F */
	"#e7dfdf", /* 18: Base 01 */
	"#8a8585", /* 19: Base 02 */
	"#655d5d", /* 20: Base 04 */
	"#292424", /* 21: Base 06 */

	[255] = 0,

	[256] = "#585050", /* default fg: Base 05 */
	[257] = "#f4ecec", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

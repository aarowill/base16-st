// Base16 Harmonic16 Light dark - simple terminal color setup
// Jannik Siebert (https://github.com/janniks)
static const char *colorname[] = {
	/* Normal colors */
	"#f7f9fb", /*  0: Base 00 - Black   */
	"#bf8b56", /*  1: Base 08 - Red     */
	"#56bf8b", /*  2: Base 0B - Green   */
	"#8bbf56", /*  3: Base 0A - Yellow  */
	"#8b56bf", /*  4: Base 0D - Blue    */
	"#bf568b", /*  5: Base 0E - Magenta */
	"#568bbf", /*  6: Base 0C - Cyan    */
	"#405c79", /*  7: Base 05 - White   */

	/* Bright colors */
	"#aabcce", /*  8: Base 03 - Bright Black */
	"#bf8b56", /*  9: Base 08 - Red          */
	"#56bf8b", /* 10: Base 0B - Green        */
	"#8bbf56", /* 11: Base 0A - Yellow       */
	"#8b56bf", /* 12: Base 0D - Blue         */
	"#bf568b", /* 13: Base 0E - Magenta      */
	"#568bbf", /* 14: Base 0C - Cyan         */
	"#0b1c2c", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#bfbf56", /* 16: Base 09 */
	"#bf5656", /* 17: Base 0F */
	"#e5ebf1", /* 18: Base 01 */
	"#cbd6e2", /* 19: Base 02 */
	"#627e99", /* 20: Base 04 */
	"#223b54", /* 21: Base 06 */

	[255] = 0,

	[256] = "#405c79", /* default fg: Base 05 */
	[257] = "#f7f9fb", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

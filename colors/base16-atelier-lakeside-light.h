// Base16 Atelier Lakeside Light dark - simple terminal color setup
// Bram de Haan (http://atelierbramdehaan.nl)
static const char *colorname[] = {
	/* Normal colors */
	"#ebf8ff", /*  0: Base 00 - Black   */
	"#d22d72", /*  1: Base 08 - Red     */
	"#568c3b", /*  2: Base 0B - Green   */
	"#8a8a0f", /*  3: Base 0A - Yellow  */
	"#257fad", /*  4: Base 0D - Blue    */
	"#6b6bb8", /*  5: Base 0E - Magenta */
	"#2d8f6f", /*  6: Base 0C - Cyan    */
	"#516d7b", /*  7: Base 05 - White   */

	/* Bright colors */
	"#7195a8", /*  8: Base 03 - Bright Black */
	"#935c25", /* 16: Base 09 */
	"#c1e4f6", /* 18: Base 01 */
	"#7ea2b4", /* 19: Base 02 */
	"#5a7b8c", /* 20: Base 04 */
	"#1f292e", /* 21: Base 06 */
	"#b72dd2", /* 17: Base 0F */
	"#161b1d", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#516d7b", /* default fg: Base 05 */
	[257] = "#ebf8ff", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

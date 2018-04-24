// Base16 Porple dark - simple terminal color setup
// Niek den Breeje (https://github.com/AuditeMarlow)
static const char *colorname[] = {
	/* Normal colors */
	"#292c36", /*  0: Base 00 - Black   */
	"#f84547", /*  1: Base 08 - Red     */
	"#95c76f", /*  2: Base 0B - Green   */
	"#efa16b", /*  3: Base 0A - Yellow  */
	"#8485ce", /*  4: Base 0D - Blue    */
	"#b74989", /*  5: Base 0E - Magenta */
	"#64878f", /*  6: Base 0C - Cyan    */
	"#d8d8d8", /*  7: Base 05 - White   */

	/* Bright colors */
	"#65568a", /*  8: Base 03 - Bright Black */
	"#f84547", /*  9: Base 08 - Red          */
	"#95c76f", /* 10: Base 0B - Green        */
	"#efa16b", /* 11: Base 0A - Yellow       */
	"#8485ce", /* 12: Base 0D - Blue         */
	"#b74989", /* 13: Base 0E - Magenta      */
	"#64878f", /* 14: Base 0C - Cyan         */
	"#f8f8f8", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#d28e5d", /* 16: Base 09 */
	"#986841", /* 17: Base 0F */
	"#333344", /* 18: Base 01 */
	"#474160", /* 19: Base 02 */
	"#b8b8b8", /* 20: Base 04 */
	"#e8e8e8", /* 21: Base 06 */

	[255] = 0,

	[256] = "#d8d8d8", /* default fg: Base 05 */
	[257] = "#292c36", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

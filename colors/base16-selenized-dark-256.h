// Base16 selenized-dark dark - simple terminal color setup
// Jan Warchol (https://github.com/jan-warchol/selenized) / adapted to base16 by ali
static const char *colorname[] = {
	/* Normal colors */
	"#103c48", /*  0: Base 00 - Black   */
	"#fa5750", /*  1: Base 08 - Red     */
	"#75b938", /*  2: Base 0B - Green   */
	"#dbb32d", /*  3: Base 0A - Yellow  */
	"#4695f7", /*  4: Base 0D - Blue    */
	"#af88eb", /*  5: Base 0E - Magenta */
	"#41c7b9", /*  6: Base 0C - Cyan    */
	"#adbcbc", /*  7: Base 05 - White   */

	/* Bright colors */
	"#72898f", /*  8: Base 03 - Bright Black */
	"#fa5750", /*  9: Base 08 - Red          */
	"#75b938", /* 10: Base 0B - Green        */
	"#dbb32d", /* 11: Base 0A - Yellow       */
	"#4695f7", /* 12: Base 0D - Blue         */
	"#af88eb", /* 13: Base 0E - Magenta      */
	"#41c7b9", /* 14: Base 0C - Cyan         */
	"#cad8d9", /* 15: Base 05 - Bright White */

	/* A few more colors */

	"#ed8649", /* 16: Base 09 */
	"#f275be", /* 17: Base 0F */
	"#184956", /* 18: Base 01 */
	"#2d5b69", /* 19: Base 02 */
	"#72898f", /* 20: Base 04 */
	"#cad8d9", /* 21: Base 06 */

	[255] = 0,

	[256] = "#adbcbc", /* default fg: Base 05 */
	[257] = "#103c48", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

// Base16 Windows 95 Light dark - simple terminal color setup
// Fergus Collins (https://github.com/C-Fergus)
static const char *colorname[] = {
	/* Normal colors */
	"#fcfcfc", /*  0: Base 00 - Black   */
	"#a80000", /*  1: Base 08 - Red     */
	"#00a800", /*  2: Base 0B - Green   */
	"#a85400", /*  3: Base 0A - Yellow  */
	"#0000a8", /*  4: Base 0D - Blue    */
	"#a800a8", /*  5: Base 0E - Magenta */
	"#00a8a8", /*  6: Base 0C - Cyan    */
	"#545454", /*  7: Base 05 - White   */

	/* Bright colors */
	"#a8a8a8", /*  8: Base 03 - Bright Black */
	"#fcfc54", /* 16: Base 09 */
	"#e0e0e0", /* 18: Base 01 */
	"#c4c4c4", /* 19: Base 02 */
	"#7e7e7e", /* 20: Base 04 */
	"#2a2a2a", /* 21: Base 06 */
	"#54fc54", /* 17: Base 0F */
	"#000000", /* 15: Base 05 - Bright White */

	[255] = 0,

	[256] = "#545454", /* default fg: Base 05 */
	[257] = "#fcfcfc", /* default bg: Base 00 */
};

// Foreground, background, cursor, and reversed cursor colors
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

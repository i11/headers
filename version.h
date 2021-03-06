/**
 * CoreFoundation Version Header
 *
 * by HASHBANG Productions <http://hbang.ws>
 * WTFPL <http://wtfpl.net>
 *
 * 2.0	478.23
 * 2.1	478.26
 * 2.2	478.29
 * 3.0	478.47
 * 3.1	478.52
 * 3.2	478.61
 * 4.0	550.32
 * 4.1	550.38
 * 4.2	550.52
 * 4.3	550.58
 * 5.0	675.00
 * 5.1	690.10
 * 6.x	793.00
 * 7.0	847.20
 */

/**
 * iOS 2.0 - 4.2 are defined in CoreFoundation/CFBase.h.
 * The format prior to 4.0 is kCFCoreFoundationVersionNumber_iPhoneOS_X_Y
 * 4.0 and newer have the format kCFCoreFoundationVersionNumber_iOS_X_Y
 */

#import <CoreFoundation/CFBase.h>

/**
 * The weird thing about those #defines is that some newer ones don't
 * exist in newer SDKs. Let's define version numbers all the way up to
 * the latest.
 */

#ifndef kCFCoreFoundationVersionNumber_iOS_4_3
#define kCFCoreFoundationVersionNumber_iOS_4_3 550.58
#endif

#ifndef kCFCoreFoundationVersionNumber_iOS_5_0
#define kCFCoreFoundationVersionNumber_iOS_5_0 675.00
#endif

#ifndef kCFCoreFoundationVersionNumber_iOS_5_1
#define kCFCoreFoundationVersionNumber_iOS_5_1 690.10
#endif

#ifndef kCFCoreFoundationVersionNumber_iOS_6_0
#define kCFCoreFoundationVersionNumber_iOS_6_0 793.00
#endif

#ifndef kCFCoreFoundationVersionNumber_iOS_6_1
#define kCFCoreFoundationVersionNumber_iOS_6_1 793.00
#endif

#ifndef kCFCoreFoundationVersionNumber_iOS_7_0
#define kCFCoreFoundationVersionNumber_iOS_7_0 847.20
#endif

/**
 * Let's also define some useful functions to check which firmware
 * the user is on. (Note that feature detection is highly
 * recommended where possible)
 */

#define IS_IOS_OR_OLDER(version) (kCFCoreFoundationVersionNumber <= kCFCoreFoundationVersionNumber_##version)
#define IS_IOS_OR_NEWER(version) (kCFCoreFoundationVersionNumber >= kCFCoreFoundationVersionNumber_##version)
#define IS_IOS_BETWEEN(start, end) (kCFCoreFoundationVersionNumber >= kCFCoreFoundationVersionNumber_##start && kCFCoreFoundationVersionNumber <= kCFCoreFoundationVersionNumber_##end)

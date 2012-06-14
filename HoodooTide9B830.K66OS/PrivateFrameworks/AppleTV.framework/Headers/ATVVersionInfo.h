/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library


@interface ATVVersionInfo : NSObject {
}
+ (int)compareEFIVersion:(id)version withEFIVersion:(id)efiversion;	// 0x329083a5
+ (int)compareIRVersion:(id)version withIRVersion:(id)irversion;	// 0x3290841d
+ (int)compareOSVersion:(id)version andBuild:(id)build withOSVersion:(id)osversion andBuild:(id)build4;	// 0x32908205
+ (int)compareSIVersion:(id)version withSIVersion:(id)siversion;	// 0x32908565
+ (id)currentEFIVersion;	// 0x32908329
+ (id)currentIRVersion;	// 0x329083e9
+ (id)currentOSBuildVersion;	// 0x329081dd
+ (id)currentOSVersion;	// 0x329081b5
+ (id)currentSIBootVersion;	// 0x32908535
+ (id)currentSIMainVersion;	// 0x32908529
+ (BOOL)isSIFirmwareValid;	// 0x32908561
@end


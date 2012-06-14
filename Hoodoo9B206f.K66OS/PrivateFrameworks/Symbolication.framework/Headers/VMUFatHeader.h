/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "VMUHeader.h"

@class NSArray, NSDate, NSString;

@interface VMUFatHeader : VMUHeader {
	NSDate *_timestamp;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
	NSArray *_fatArchs;	// 12 = 0xc
}
@property(readonly, retain) NSArray *fatArchs;	// G=0x30bb3385; converted property
@property(readonly, retain) NSString *path;	// G=0x30bb3365; converted property
@property(readonly, retain) NSDate *timestamp;	// G=0x30bb3375; converted property
+ (id)fatHeaderWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x30bb3559
- (id)initWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x30bb3395
- (void)dealloc;	// 0x30bb35ad
- (id)fatArchMatchingArchitecture:(id)architecture;	// 0x30bb3641
// converted property getter: - (id)fatArchs;	// 0x30bb3385
- (BOOL)isFat;	// 0x30bb3361
// converted property getter: - (id)path;	// 0x30bb3365
// converted property getter: - (id)timestamp;	// 0x30bb3375
@end


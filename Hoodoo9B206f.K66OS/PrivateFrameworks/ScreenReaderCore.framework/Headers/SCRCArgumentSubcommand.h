/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSString;

@interface SCRCArgumentSubcommand : NSObject {
	NSString *_subcommandName;	// 4 = 0x4
	NSMutableArray *_optionArray;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *optionArray;	// G=0x3156c609; converted property
@property(readonly, retain) NSString *subcommandName;	// G=0x3156c5f9; converted property
+ (id)subcommandWithName:(id)name;	// 0x3156c6c1
- (id)initWithName:(id)name;	// 0x3156c625
- (void)addOption:(id)option argument:(id)argument target:(id)target action:(SEL)action argumentDescription:(id)description required:(BOOL)required;	// 0x3156c859
- (void)addOptions;	// 0x3156c5f5
- (int)compare:(id)compare;	// 0x3156c97d
- (void)dealloc;	// 0x31568b6d
- (id)description;	// 0x3156c70d
- (id)formattedHelpFooter;	// 0x3156c61d
- (id)formattedHelpHeader;	// 0x3156c619
- (unsigned)hash;	// 0x3156c9c5
- (BOOL)isEqual:(id)equal;	// 0x3156c9e5
// converted property getter: - (id)optionArray;	// 0x3156c609
- (int)run;	// 0x3156c621
- (void)showHelp;	// 0x3156c855
- (void)stop;	// 0x315692dd
// converted property getter: - (id)subcommandName;	// 0x3156c5f9
@end


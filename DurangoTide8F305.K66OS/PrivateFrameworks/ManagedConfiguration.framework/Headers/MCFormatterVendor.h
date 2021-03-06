/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <NSObject.h> // Unknown library
#import "ManagedConfiguration-Structs.h"

@class NSNumberFormatter;

@interface MCFormatterVendor : NSObject {
	NSNumberFormatter *_numberFormatter;	// 4 = 0x4
	dispatch_queue_s *_syncQueue;	// 8 = 0x8
}
@property(readonly, retain) NSNumberFormatter *numberFormatter;	// G=0x32b010ed; converted property
+ (id)sharedInstance;	// 0x32b01449
- (id)init;	// 0x32b01309
- (void)_localeDidChange:(id)_locale;	// 0x32b010a1
- (void)dealloc;	// 0x32b01399
// converted property getter: - (id)numberFormatter;	// 0x32b010ed
@end


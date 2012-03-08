/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import "BRAlertControl.h"

@class NSError;

__attribute__((visibility("hidden")))
@interface BRErrorControl : BRAlertControl {
@private
	NSError *_error;	// 76 = 0x4c
}
- (id)initWithError:(id)error;	// 0x3027a679
- (void)controlWasDeactivated;	// 0x3027a7cd
- (void)dealloc;	// 0x3027a781
@end

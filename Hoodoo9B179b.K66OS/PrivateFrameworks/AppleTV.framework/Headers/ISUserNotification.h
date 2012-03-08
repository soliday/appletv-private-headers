/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface ISUserNotification : NSObject {
@private
	int _allowedRetryCount;	// 4 = 0x4
	int _currentRetryCount;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	unsigned long _optionFlags;	// 16 = 0x10
	NSDictionary *_userInfo;	// 20 = 0x14
}
@property(assign) int allowedRetryCount;	// G=0x3042fcf9; S=0x3042fd09; @synthesize=_allowedRetryCount
@property(assign) int currentRetryCount;	// G=0x3042fd19; S=0x3042fd29; @synthesize=_currentRetryCount
@property(readonly, assign) NSDictionary *dictionary;	// G=0x3042fcb1; 
@property(readonly, assign) unsigned long optionFlags;	// G=0x3042fce9; 
@property(retain) NSDictionary *userInfo;	// G=0x3042fd39; S=0x3042fd4d; @synthesize=_userInfo
- (id)init;	// 0x3042fb69
- (id)initWithDictionary:(id)dictionary options:(unsigned long)options;	// 0x3042fba9
// declared property getter: - (int)allowedRetryCount;	// 0x3042fcf9
- (CFUserNotificationRef)copyUserNotification;	// 0x3042fc59
// declared property getter: - (int)currentRetryCount;	// 0x3042fd19
- (void)dealloc;	// 0x3042fbf9
// declared property getter: - (id)dictionary;	// 0x3042fcb1
// declared property getter: - (unsigned long)optionFlags;	// 0x3042fce9
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x3042fd09
// declared property setter: - (void)setCurrentRetryCount:(int)count;	// 0x3042fd29
// declared property setter: - (void)setUserInfo:(id)info;	// 0x3042fd4d
// declared property getter: - (id)userInfo;	// 0x3042fd39
@end

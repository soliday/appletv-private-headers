/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <NSObject.h> // Unknown library
#import "iTunesStore-Structs.h"

@class NSDictionary;

@interface ISUserNotification : NSObject {
	int _allowedRetryCount;	// 4 = 0x4
	int _currentRetryCount;	// 8 = 0x8
	NSDictionary *_dictionary;	// 12 = 0xc
	unsigned long _optionFlags;	// 16 = 0x10
	NSDictionary *_userInfo;	// 20 = 0x14
}
@property(assign) int allowedRetryCount;	// G=0x33db3695; S=0x33db36a5; @synthesize=_allowedRetryCount
@property(assign) int currentRetryCount;	// G=0x33db36b5; S=0x33db36c5; @synthesize=_currentRetryCount
@property(readonly, assign) NSDictionary *dictionary;	// G=0x33db364d; 
@property(readonly, assign) unsigned long optionFlags;	// G=0x33db3685; 
@property(retain) NSDictionary *userInfo;	// G=0x33db36d5; S=0x33db36e9; @synthesize=_userInfo
- (id)init;	// 0x33db3505
- (id)initWithDictionary:(id)dictionary options:(unsigned long)options;	// 0x33db3545
// declared property getter: - (int)allowedRetryCount;	// 0x33db3695
- (CFUserNotificationRef)copyUserNotification;	// 0x33db35f5
// declared property getter: - (int)currentRetryCount;	// 0x33db36b5
- (void)dealloc;	// 0x33db3595
// declared property getter: - (id)dictionary;	// 0x33db364d
// declared property getter: - (unsigned long)optionFlags;	// 0x33db3685
// declared property setter: - (void)setAllowedRetryCount:(int)count;	// 0x33db36a5
// declared property setter: - (void)setCurrentRetryCount:(int)count;	// 0x33db36c5
// declared property setter: - (void)setUserInfo:(id)info;	// 0x33db36e9
// declared property getter: - (id)userInfo;	// 0x33db36d5
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMCore.framework/Frameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <NSObject.h> // Unknown library

@class NSString, NSDictionary, NSMutableArray, NSDate, NSMutableDictionary;

@interface IMTunesController : NSObject {
	NSDate *_lastChange;	// 4 = 0x4
	NSDictionary *_lastInfo;	// 8 = 0x8
	NSMutableDictionary *_playerInfo;	// 12 = 0xc
	NSMutableArray *_listeners;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) BOOL isEnabled;	// G=0x34317909; 
@property(readonly, assign, nonatomic) NSString *messageFormat;	// G=0x34317019; 
@property(readonly, assign, nonatomic) NSDictionary *playerInfo;	// G=0x34317009; @synthesize=_playerInfo
+ (id)sharedTunesController;	// 0x34317a69
- (id)init;	// 0x343177a5
- (void)_playerChanged:(id)changed;	// 0x34317219
- (void)_playerChangedNotification:(id)notification;	// 0x343170b1
- (void)_updateMessage;	// 0x34317915
- (void)addListener:(id)listener;	// 0x34317071
- (id)autorelease;	// 0x34317005
- (void)dealloc;	// 0x34317725
// declared property getter: - (BOOL)isEnabled;	// 0x34317909
// declared property getter: - (id)messageFormat;	// 0x34317019
// declared property getter: - (id)playerInfo;	// 0x34317009
- (oneway void)release;	// 0x34316ff9
- (void)removeListener:(id)listener;	// 0x34317051
- (unsigned)retainCount;	// 0x34316ffd
@end


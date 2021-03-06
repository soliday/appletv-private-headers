/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

#import <NSObject.h> // Unknown library

@class NSData, NSArray;
@protocol FTPushHandlerDelegate;

@interface FTPushHandler : NSObject {
	NSArray *_topics;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	BOOL _registeredForPush;	// 12 = 0xc
}
@property(assign, nonatomic) id<FTPushHandlerDelegate> delegate;	// G=0x33fa9805; S=0x33fa9815; @synthesize=_delegate
@property(readonly, assign, nonatomic) NSData *pushToken;	// G=0x33fa9801; 
@property(assign) BOOL registered;	// G=0x33fa97ed; S=0x33fa97fd; 
@property(readonly, assign, nonatomic) NSArray *topics;	// G=0x33fa9825; @synthesize=_topics
+ (id)alloc;	// 0x33fa98e1
- (id)initWithTopics:(id)topics;	// 0x33fa9891
- (void)dealloc;	// 0x33fa9849
// declared property getter: - (id)delegate;	// 0x33fa9805
// declared property getter: - (id)pushToken;	// 0x33fa9801
// declared property getter: - (BOOL)registered;	// 0x33fa97ed
- (void)requestKeepAlive;	// 0x33fa9835
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33fa9815
// declared property setter: - (void)setRegistered:(BOOL)registered;	// 0x33fa97fd
// declared property getter: - (id)topics;	// 0x33fa9825
@end


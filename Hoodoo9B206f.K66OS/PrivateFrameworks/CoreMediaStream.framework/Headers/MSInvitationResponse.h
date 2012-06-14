/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library

@class MSShare;

@interface MSInvitationResponse : NSObject {
@private
	MSShare *_invitation;	// 4 = 0x4
	BOOL _accept;	// 8 = 0x8
}
@property(assign, nonatomic) BOOL accept;	// G=0x304d82c9; S=0x304d82d9; @synthesize=_accept
@property(retain, nonatomic) MSShare *invitation;	// G=0x304d8295; S=0x304d82a5; @synthesize=_invitation
+ (id)responseWithInvitation:(id)invitation accept:(BOOL)accept;	// 0x304d81a5
- (id)initWithInvitation:(id)invitation accept:(BOOL)accept;	// 0x304d81e5
// declared property getter: - (BOOL)accept;	// 0x304d82c9
- (void)dealloc;	// 0x304d8249
// declared property getter: - (id)invitation;	// 0x304d8295
// declared property setter: - (void)setAccept:(BOOL)accept;	// 0x304d82d9
// declared property setter: - (void)setInvitation:(id)invitation;	// 0x304d82a5
@end


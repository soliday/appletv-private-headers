/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "NSCoding.h"
#import "NSCopying.h"
#import <NSObject.h> // Unknown library
#import "BulletinBoard-Structs.h"

@class NSMutableDictionary, NSCountedSet;

@interface BBAttachments : NSObject <NSCopying, NSCoding> {
@private
	int primaryType;	// 4 = 0x4
	NSCountedSet *_additionalAttachments;	// 8 = 0x8
	NSMutableDictionary *_clientSideComposedImageInfos;	// 12 = 0xc
}
@property(retain, nonatomic) NSCountedSet *additionalAttachments;	// G=0x3427bfed; S=0x3427bffd; @synthesize=_additionalAttachments
@property(retain, nonatomic) NSMutableDictionary *clientSideComposedImageInfos;	// G=0x3427c021; S=0x3427c031; @synthesize=_clientSideComposedImageInfos
@property(assign, nonatomic) int primaryType;	// G=0x3427bfcd; S=0x3427bfdd; @synthesize
- (id)initWithCoder:(id)coder;	// 0x3427bead
- (void)addAttachmentOfType:(int)type;	// 0x3427bc85
// declared property getter: - (id)additionalAttachments;	// 0x3427bfed
// declared property getter: - (id)clientSideComposedImageInfos;	// 0x3427c021
- (id)copyWithZone:(NSZone *)zone;	// 0x3427bdfd
- (void)dealloc;	// 0x3427bc25
- (void)encodeWithCoder:(id)coder;	// 0x3427bf61
- (BOOL)isEqualToAttachments:(id)attachments;	// 0x3427bd91
- (unsigned)numberOfAdditionalAttachments;	// 0x3427bd11
- (unsigned)numberOfAdditionalAttachmentsOfType:(int)type;	// 0x3427bd49
// declared property getter: - (int)primaryType;	// 0x3427bfcd
// declared property setter: - (void)setAdditionalAttachments:(id)attachments;	// 0x3427bffd
// declared property setter: - (void)setClientSideComposedImageInfos:(id)infos;	// 0x3427c031
// declared property setter: - (void)setPrimaryType:(int)type;	// 0x3427bfdd
@end


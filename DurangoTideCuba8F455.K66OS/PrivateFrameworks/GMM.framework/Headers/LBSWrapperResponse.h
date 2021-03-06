/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class LBSGLocResponse;

@interface LBSWrapperResponse : PBCodable {
@private
	int _status;	// 4 = 0x4
	BOOL _hasStatus;	// 8 = 0x8
	LBSGLocResponse *_reply;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasReply;	// G=0x3445d635; 
@property(readonly, assign, nonatomic) BOOL hasStatus;	// G=0x3445d659; @synthesize=_hasStatus
@property(retain, nonatomic) LBSGLocResponse *reply;	// G=0x3445d649; S=0x3445da49; @synthesize=_reply
@property(assign, nonatomic) int status;	// G=0x3445d669; S=0x3445d619; @synthesize=_status
- (id)init;	// 0x3445d679
- (void)dealloc;	// 0x3445da01
- (id)description;	// 0x3445d6a5
// declared property getter: - (BOOL)hasReply;	// 0x3445d635
// declared property getter: - (BOOL)hasStatus;	// 0x3445d659
- (BOOL)readFrom:(id)from;	// 0x3445d855
// declared property getter: - (id)reply;	// 0x3445d649
// declared property setter: - (void)setReply:(id)reply;	// 0x3445da49
// declared property setter: - (void)setStatus:(int)status;	// 0x3445d619
// declared property getter: - (int)status;	// 0x3445d669
- (void)writeTo:(id)to;	// 0x3445d789
@end


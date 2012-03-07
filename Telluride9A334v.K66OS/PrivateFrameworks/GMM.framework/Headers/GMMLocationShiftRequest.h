/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library

@class GMMMapPoint;

__attribute__((visibility("hidden")))
@interface GMMLocationShiftRequest : PBRequest {
	GMMMapPoint *_originalPoint;	// 4 = 0x4
}
@property(retain, nonatomic) GMMMapPoint *originalPoint;	// G=0x35ba51c5; S=0x35ba51d5; @synthesize=_originalPoint
- (void)dealloc;	// 0x35ba4e95
- (id)description;	// 0x35ba4ed9
- (id)dictionaryRepresentation;	// 0x35ba4f49
// declared property getter: - (id)originalPoint;	// 0x35ba51c5
- (BOOL)readFrom:(id)from;	// 0x35ba4f9d
- (unsigned)requestTypeCode;	// 0x35ba51a5
- (Class)responseClass;	// 0x35ba51a9
// declared property setter: - (void)setOriginalPoint:(id)point;	// 0x35ba51d5
- (void)writeTo:(id)to;	// 0x35ba5111
@end

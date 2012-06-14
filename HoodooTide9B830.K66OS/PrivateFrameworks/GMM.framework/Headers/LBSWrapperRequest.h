/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBRequest.h> // Unknown library

@class LBSGLocRequest;

@interface LBSWrapperRequest : PBRequest {
	BOOL _hasRequestType;	// 4 = 0x4
	int _requestType;	// 8 = 0x8
	LBSGLocRequest *_request;	// 12 = 0xc
}
@property(readonly, assign, nonatomic) BOOL hasRequest;	// G=0x31fbb3b1; 
@property(assign, nonatomic) BOOL hasRequestType;	// G=0x31fbb77d; S=0x31fbb78d; @synthesize=_hasRequestType
@property(retain, nonatomic) LBSGLocRequest *request;	// G=0x31fbb7ad; S=0x31fbb7bd; @synthesize=_request
@property(assign, nonatomic) int requestType;	// G=0x31fbb79d; S=0x31fbb38d; @synthesize=_requestType
- (void)dealloc;	// 0x31fbb349
- (id)description;	// 0x31fbb3c9
- (id)dictionaryRepresentation;	// 0x31fbb439
// declared property getter: - (BOOL)hasRequest;	// 0x31fbb3b1
// declared property getter: - (BOOL)hasRequestType;	// 0x31fbb77d
- (BOOL)readFrom:(id)from;	// 0x31fbb4e5
// declared property getter: - (id)request;	// 0x31fbb7ad
// declared property getter: - (int)requestType;	// 0x31fbb79d
- (unsigned)requestTypeCode;	// 0x31fbb75d
- (Class)responseClass;	// 0x31fbb761
// declared property setter: - (void)setHasRequestType:(BOOL)type;	// 0x31fbb78d
// declared property setter: - (void)setRequest:(id)request;	// 0x31fbb7bd
// declared property setter: - (void)setRequestType:(int)type;	// 0x31fbb38d
- (void)writeTo:(id)to;	// 0x31fbb685
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface GMMClientPropertiesResponse : PBCodable {
	NSString *_replacementCohort;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) BOOL hasReplacementCohort;	// G=0x315a4dd9; 
@property(retain, nonatomic) NSString *replacementCohort;	// G=0x315a4fbd; S=0x315a4fcd; @synthesize=_replacementCohort
- (void)dealloc;	// 0x315a4d95
- (id)description;	// 0x315a4df1
- (id)dictionaryRepresentation;	// 0x315a4e61
// declared property getter: - (BOOL)hasReplacementCohort;	// 0x315a4dd9
- (BOOL)readFrom:(id)from;	// 0x315a4eb5
// declared property getter: - (id)replacementCohort;	// 0x315a4fbd
// declared property setter: - (void)setReplacementCohort:(id)cohort;	// 0x315a4fcd
- (void)writeTo:(id)to;	// 0x315a4f8d
@end


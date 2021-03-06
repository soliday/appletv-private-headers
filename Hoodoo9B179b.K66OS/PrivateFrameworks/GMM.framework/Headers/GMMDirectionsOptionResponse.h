/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

#import <PBCodable.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface GMMDirectionsOptionResponse : PBCodable {
	NSMutableArray *_optionDefinitions;	// 4 = 0x4
}
@property(retain, nonatomic) NSMutableArray *optionDefinitions;	// G=0x31cf71f1; S=0x31cf7201; @synthesize=_optionDefinitions
- (void)addOptionDefinition:(id)definition;	// 0x31cf6e01
- (void)dealloc;	// 0x31cf6dbd
- (id)description;	// 0x31cf6ea5
- (id)dictionaryRepresentation;	// 0x31cf6f15
- (id)optionDefinitionAtIndex:(unsigned)index;	// 0x31cf6e85
// declared property getter: - (id)optionDefinitions;	// 0x31cf71f1
- (unsigned)optionDefinitionsCount;	// 0x31cf6e65
- (BOOL)readFrom:(id)from;	// 0x31cf6f69
// declared property setter: - (void)setOptionDefinitions:(id)definitions;	// 0x31cf7201
- (void)writeTo:(id)to;	// 0x31cf70dd
@end


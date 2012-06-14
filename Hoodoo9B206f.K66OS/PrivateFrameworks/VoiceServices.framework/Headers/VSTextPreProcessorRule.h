/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import "VoiceServices-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString;

@interface VSTextPreProcessorRule : NSObject {
	NSString *_matchPattern;	// 4 = 0x4
	NSString *_replacement;	// 8 = 0x8
	BOOL _caseSensitive;	// 12 = 0xc
	BOOL _eatPunctuation;	// 13 = 0xd
}
- (id)initWithDictionaryRepresentation:(id)dictionaryRepresentation;	// 0x31521dc5
- (void)dealloc;	// 0x31521efd
- (id)matchedString:(id)string forTokenInRange:(XXStruct_K5nmsA *)range;	// 0x31521f5d
@end


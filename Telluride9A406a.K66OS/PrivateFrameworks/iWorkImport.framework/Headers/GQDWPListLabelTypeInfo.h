/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"

@class GQDWPTextLabel;

__attribute__((visibility("hidden")))
@interface GQDWPListLabelTypeInfo : NSObject <GQDNameMappable> {
@private
	int mType;	// 4 = 0x4
	GQDWPTextLabel *mLabel;	// 8 = 0x8
}
+ (const StateSpec *)stateForReading;	// 0x33c1cbed
- (void)dealloc;	// 0x33c1cc19
- (id)label;	// 0x33c1cc09
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x33c1cc65
- (int)type;	// 0x33c1cbf9
@end

/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQPObjectHandler.h"
#import "GQPObjectReader.h"

@class GQDSStyle, GQDSStylesheet;

__attribute__((visibility("hidden")))
@interface GQPStyleReader : NSObject <GQPObjectReader, GQPObjectHandler> {
@private
	int mStyleType;	// 4 = 0x4
	CFArrayRef mEntries;	// 8 = 0x8
	GQDSStylesheet *mStylesheet;	// 12 = 0xc
	int mCurrentProperty;	// 16 = 0x10
	BOOL mStyleIsIdentified;	// 20 = 0x14
	BOOL mStyleIdentiferEqualsParentIdentifier;	// 21 = 0x15
	char *mIdentifier;	// 24 = 0x18
	char *mUid;	// 28 = 0x1c
	char *mParentIdentifier;	// 32 = 0x20
	GQDSStyle *mStyle;	// 36 = 0x24
}
+ (void)initialize;	// 0x317e15f1
- (id)initWithStyleType:(int)styleType;	// 0x317e1579
- (BOOL)beginProperty:(const char *)property;	// 0x317e1a71
- (int)beginReadingFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x317e170d
- (id)createStyle;	// 0x317e1ab1
- (void)dealloc;	// 0x317e199d
- (void)doneProperty;	// 0x317e1ba1
- (int)doneReading:(id)reading;	// 0x317e1681
- (void)handleBoolValue:(BOOL)value;	// 0x317e1c0d
- (void)handleDoubleValue:(double)value;	// 0x317e1cb5
- (void)handleFloatValue:(float)value;	// 0x317e1c7d
- (void)handleIntValue:(int)value;	// 0x317e1c45
- (void)handleObject:(id)object;	// 0x317e160d
@end


/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PXTransition : NSObject {
}
+ (void)initialize;	// 0x34545481
+ (int)readDirection:(xmlNode *)direction defaultValue:(int)value;	// 0x345495f5
+ (int)readInOut:(xmlNode *)anOut defaultValue:(int)value;	// 0x34574801
+ (int)readOrientation:(xmlNode *)orientation attribute:(const char *)attribute defaultValue:(int)value;	// 0x34576655
+ (void)readTransitionFromNode:(xmlNode *)node tgtTransition:(id)transition drawingState:(id)state;	// 0x3452f821
@end


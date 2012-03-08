/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDrawablesGenerator.h"


__attribute__((visibility("hidden")))
@interface GQHDrawable : NSObject <GQDrawablesGenerator> {
}
+ (void)aboutToGenerateDrawable:(id)generateDrawable htmlState:(id)state;	// 0x3599126d
+ (int)beginDrawables:(id)drawables;	// 0x35991231
+ (Class)beginTable:(id)table;	// 0x3599137d
+ (void)doneGeneratingDrawable:(id)drawable htmlState:(id)state;	// 0x35991311
+ (int)endDrawables:(id)drawables;	// 0x35991235
+ (int)handleDrawable:(id)drawable state:(id)state;	// 0x35991239
+ (int)handleFloatingDrawable:(id)drawable htmlState:(id)state;	// 0x35991399
+ (int)handleInlineDrawable:(id)drawable htmlState:(id)state;	// 0x35991b6d
@end

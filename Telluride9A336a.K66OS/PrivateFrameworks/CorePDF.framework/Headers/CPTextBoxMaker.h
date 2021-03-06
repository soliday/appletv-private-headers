/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

#import <NSObject.h> // Unknown library

@class CPBody, CPZone;

@interface CPTextBoxMaker : NSObject {
	CPBody *bodyZone;	// 4 = 0x4
	CPZone *mainZone;	// 8 = 0x8
}
+ (void)boxLayoutsIn:(id)anIn;	// 0x34a06049
+ (void)promoteLayoutsIn:(id)anIn;	// 0x34a05fed
- (void)boxLayout:(id)layout;	// 0x34a05e91
- (void)boxLayoutsIn:(id)anIn;	// 0x34a05f81
- (BOOL)layoutIsSliced:(id)sliced;	// 0x34a060a5
- (void)makeBoxesWith:(id)with parent:(id)parent;	// 0x34a05ad1
- (void)promoteLayoutsIn:(id)anIn;	// 0x34a05e25
- (void)promoteLayoutsInCertainRegions:(id)certainRegions;	// 0x34a05ce9
- (void)rotate:(id)rotate;	// 0x34a05c8d
- (void)rotateTextBox:(id)box;	// 0x34a061a1
@end


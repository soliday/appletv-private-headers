/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRControl.h"

@class BRControllerStack, NSMutableDictionary, BRContextMenuControl;

@interface BRController : BRControl {
@private
	NSMutableDictionary *_labels;	// 44 = 0x2c
	BRControllerStack *_stack;	// 48 = 0x30
	BOOL _depthLimited;	// 52 = 0x34
	BRContextMenuControl *_contextMenu;	// 56 = 0x38
	id _wasPushedBlock;	// 60 = 0x3c
	id _wasPoppedBlock;	// 64 = 0x40
	id _wasBuriedBlock;	// 68 = 0x44
	id _wasExhumedBlock;	// 72 = 0x48
}
@property(assign) BOOL depthLimited;	// G=0x32f4520d; S=0x32f451fd; converted property
@property(retain) BRControllerStack *stack;	// G=0x32f2a9e5; S=0x32f15459; converted property
@property(copy, nonatomic) id wasBuriedBlock;	// G=0x32f45249; S=0x32f45899; @synthesize=_wasBuriedBlock
@property(copy, nonatomic) id wasExhumedBlock;	// G=0x32f45239; S=0x32f458c5; @synthesize=_wasExhumedBlock
@property(copy, nonatomic) id wasPoppedBlock;	// G=0x32f45259; S=0x32f4586d; @synthesize=_wasPoppedBlock
@property(copy, nonatomic) id wasPushedBlock;	// G=0x32f45269; S=0x32f45841; @synthesize=_wasPushedBlock
+ (id)controllerWithContentControl:(id)contentControl;	// 0x32f4539d
- (id)init;	// 0x32f15271
- (void)_contextMenuCancelItemSelected:(id)selected;	// 0x32f452a9
- (void)addLabel:(id)label;	// 0x32f239d5
- (BOOL)brEventAction:(id)action;	// 0x32f45461
- (BOOL)canBeRemovedFromStack;	// 0x32f451f9
- (int)contextMenuDimOption;	// 0x32f45289
- (BOOL)contextMenuIsVisible;	// 0x32f45349
- (id)controlForContextMenuPositioning;	// 0x32f4527d
- (id)controlForContextMenuStart;	// 0x32f45281
- (id)controlToDim;	// 0x32f45285
- (void)controlWasDeactivated;	// 0x32f45719
- (void)dealloc;	// 0x32f21e2d
// converted property getter: - (BOOL)depthLimited;	// 0x32f4520d
- (id)description;	// 0x32f345f9
- (void)dismissContextMenu;	// 0x32f45309
- (long)errorNumberForNoContent;	// 0x32f45221
- (BOOL)isLabelled:(id)labelled;	// 0x32f2a9f5
- (BOOL)isNetworkDependent;	// 0x32f154dd
- (BOOL)isValidAfterDataUpdate;	// 0x32f4521d
- (id)providersForContextMenu;	// 0x32f45279
- (BOOL)recreateOnReselect;	// 0x32f2f0e5
- (void)removeLabel:(id)label;	// 0x32f2d8c9
// converted property setter: - (void)setDepthLimited:(BOOL)limited;	// 0x32f451fd
// converted property setter: - (void)setStack:(id)stack;	// 0x32f15459
// declared property setter: - (void)setWasBuriedBlock:(id)block;	// 0x32f45899
// declared property setter: - (void)setWasExhumedBlock:(id)block;	// 0x32f458c5
// declared property setter: - (void)setWasPoppedBlock:(id)block;	// 0x32f4586d
// declared property setter: - (void)setWasPushedBlock:(id)block;	// 0x32f45841
// converted property getter: - (id)stack;	// 0x32f2a9e5
- (BOOL)topOfStack;	// 0x32f45371
- (id)transitionType;	// 0x32f45229
- (void)wasBuried;	// 0x32f452dd
// declared property getter: - (id)wasBuriedBlock;	// 0x32f45249
- (void)wasExhumed;	// 0x32f4528d
// declared property getter: - (id)wasExhumedBlock;	// 0x32f45239
- (void)wasPopped;	// 0x32f21dc5
// declared property getter: - (id)wasPoppedBlock;	// 0x32f45259
- (void)wasPushed;	// 0x32f214cd
// declared property getter: - (id)wasPushedBlock;	// 0x32f45269
@end

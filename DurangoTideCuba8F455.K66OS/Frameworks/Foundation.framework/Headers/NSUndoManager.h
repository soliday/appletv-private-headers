/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSArray;

@interface NSUndoManager : NSObject {
@private
	id _undoStack;	// 4 = 0x4
	id _redoStack;	// 8 = 0x8
	NSArray *_runLoopModes;	// 12 = 0xc
	int _disabled;	// 16 = 0x10
	struct {
		unsigned undoing : 1;
		unsigned redoing : 1;
		unsigned registeredForCallback : 1;
		unsigned postingCheckpointNotification : 1;
		unsigned groupsByEvent : 1;
		unsigned reserved : 27;
	} _flags;	// 20 = 0x14
	id _target;	// 24 = 0x18
	id _proxy;	// 28 = 0x1c
	void *_NSUndoManagerReserved1;	// 32 = 0x20
	void *_NSUndoManagerReserved2;	// 36 = 0x24
}
@property(assign) BOOL groupsByEvent;	// G=0x310adcb5; S=0x310adcc9; converted property
@property(assign) unsigned levelsOfUndo;	// G=0x310ae0c5; S=0x310ae0e5; converted property
@property(retain) NSArray *runLoopModes;	// G=0x3102f0f9; S=0x310ae071; converted property
+ (void)_endTopLevelGroupings;	// 0x310ae4e5
+ (void)_setEndsTopLevelGroupingsAfterRunLoopIterations:(BOOL)iterations;	// 0x310adc7d
- (id)init;	// 0x3102ea69
- (void)_cancelAutomaticTopLevelGroupEnding;	// 0x310ae39d
- (void)_commitUndoGrouping;	// 0x310ae161
- (BOOL)_endUndoGroupRemovingIfEmpty:(BOOL)empty;	// 0x3102fa0d
- (void)_forwardTargetInvocation:(id)invocation;	// 0x310ae779
- (id)_methodSignatureForTargetSelector:(SEL)targetSelector;	// 0x310ae325
- (void)_postCheckpointNotification;	// 0x3102fbcd
- (void)_prepareEventGrouping;	// 0x3102ef85
- (void)_processEndOfEventNotification:(id)eventNotification;	// 0x3102f9b9
- (void)_registerUndoObject:(id)object;	// 0x3102ee65
- (void)_rollbackUndoGrouping;	// 0x310ae105
- (void)_scheduleAutomaticTopLevelGroupEnding;	// 0x3102effd
- (void)_setGroupIdentifier:(id)identifier;	// 0x3102f695
- (BOOL)_shouldCoalesceTypingForText:(id)text :(id)arg2;	// 0x310ae185
- (id)_undoStack;	// 0x310adc6d
- (void)beginUndoGrouping;	// 0x3102f3a1
- (BOOL)canRedo;	// 0x310ae011
- (BOOL)canUndo;	// 0x310ae049
- (void)dealloc;	// 0x310ae431
- (void)disableUndoRegistration;	// 0x310adc89
- (void)enableUndoRegistration;	// 0x310aed19
- (void)endUndoGrouping;	// 0x3102f9e9
- (int)groupingLevel;	// 0x31033435
// converted property getter: - (BOOL)groupsByEvent;	// 0x310adcb5
- (BOOL)isRedoing;	// 0x3102ed69
- (BOOL)isUndoRegistrationEnabled;	// 0x310adc9d
- (BOOL)isUndoing;	// 0x3102ed55
// converted property getter: - (unsigned)levelsOfUndo;	// 0x310ae0c5
- (id)prepareWithInvocationTarget:(id)invocationTarget;	// 0x310adfb9
- (void)redo;	// 0x310ae879
- (id)redoActionName;	// 0x310adf61
- (id)redoMenuItemTitle;	// 0x310aedad
- (id)redoMenuTitleForUndoActionName:(id)undoActionName;	// 0x310af0b1
- (void)registerUndoWithTarget:(id)target selector:(SEL)selector object:(id)object;	// 0x3102ed7d
- (void)removeAllActions;	// 0x3102ec6d
- (void)removeAllActionsWithTarget:(id)target;	// 0x31033475
// converted property getter: - (id)runLoopModes;	// 0x3102f0f9
- (void)setActionName:(id)name;	// 0x3102f681
// converted property setter: - (void)setGroupsByEvent:(BOOL)event;	// 0x310adcc9
// converted property setter: - (void)setLevelsOfUndo:(unsigned)undo;	// 0x310ae0e5
// converted property setter: - (void)setRunLoopModes:(id)modes;	// 0x310ae071
- (void)undo;	// 0x310aec19
- (id)undoActionName;	// 0x310adf8d
- (id)undoMenuItemTitle;	// 0x310aee41
- (id)undoMenuTitleForUndoActionName:(id)undoActionName;	// 0x310af051
- (void)undoNestedGroup;	// 0x310aea55
@end


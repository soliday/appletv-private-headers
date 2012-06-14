/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"
#import "iTunesStore-Structs.h"

@class ISDialogButton, NSArray, ISDialog;
@protocol ISDialogOperationDelegate;

@interface ISDialogOperation : ISOperation {
	ISDialog *_dialog;	// 60 = 0x3c
	BOOL _performDefaultActions;	// 64 = 0x40
	ISDialogButton *_selectedButton;	// 68 = 0x44
	NSArray *_textFieldValues;	// 72 = 0x48
	id _userNotification;	// 76 = 0x4c
}
@property(assign) id<ISDialogOperationDelegate> delegate;	// @dynamic
@property(retain) ISDialog *dialog;	// G=0x35544b55; S=0x35544b69; @synthesize=_dialog
@property(assign) BOOL performDefaultActions;	// G=0x35544b8d; S=0x35544b9d; @synthesize=_performDefaultActions
@property(retain) ISDialogButton *selectedButton;	// G=0x35544bad; S=0x35544bc1; @synthesize=_selectedButton
@property(readonly, assign) NSArray *textFieldValues;	// G=0x35544221; 
@property(retain) id userNotification;	// G=0x35544be5; S=0x35544bf9; @synthesize=_userNotification
+ (id)operationWithDialog:(id)dialog;	// 0x35543f39
+ (id)operationWithError:(id)error;	// 0x35543f9d
- (id)init;	// 0x35543e55
- (void)_handleResponseForNotification:(CFUserNotificationRef)notification responseFlags:(unsigned long)flags;	// 0x355444f5
- (void)_run;	// 0x35544575
- (void)_showUserNotification:(id)notification;	// 0x355449a9
- (void)_waitForUserNotificationResponse:(CFUserNotificationRef)userNotificationResponse;	// 0x35544add
- (void)cancel;	// 0x35544281
- (void)dealloc;	// 0x35543e95
// declared property getter: - (id)dialog;	// 0x35544b55
- (void)handleButtonSelected:(int)selected withResponseDictionary:(id)responseDictionary;	// 0x35544001
// declared property getter: - (BOOL)performDefaultActions;	// 0x35544b8d
- (void)run;	// 0x355442c9
// declared property getter: - (id)selectedButton;	// 0x35544bad
// declared property setter: - (void)setDialog:(id)dialog;	// 0x35544b69
// declared property setter: - (void)setPerformDefaultActions:(BOOL)actions;	// 0x35544b9d
// declared property setter: - (void)setSelectedButton:(id)button;	// 0x35544bc1
// declared property setter: - (void)setUserNotification:(id)notification;	// 0x35544bf9
// declared property getter: - (id)textFieldValues;	// 0x35544221
// declared property getter: - (id)userNotification;	// 0x35544be5
@end


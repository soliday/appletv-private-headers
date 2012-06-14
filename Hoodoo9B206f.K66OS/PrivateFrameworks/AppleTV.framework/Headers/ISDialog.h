/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSArray, NSMutableDictionary, NSLock, SSAuthenticationContext, NSString;

__attribute__((visibility("hidden")))
@interface ISDialog : NSObject {
@private
	BOOL _allowDuplicates;	// 4 = 0x4
	SSAuthenticationContext *_authenticationContext;	// 8 = 0x8
	BOOL _authorizationIsForced;	// 12 = 0xc
	NSArray *_buttons;	// 16 = 0x10
	int _defaultButtonIndex;	// 20 = 0x14
	NSString *_displayCountKey;	// 24 = 0x18
	BOOL _dismissOnLock;	// 28 = 0x1c
	BOOL _expectsResponse;	// 29 = 0x1d
	BOOL _groupsTextFields;	// 30 = 0x1e
	int _kind;	// 32 = 0x20
	NSLock *_lock;	// 36 = 0x24
	int _maxDisplayCount;	// 40 = 0x28
	NSString *_message;	// 44 = 0x2c
	BOOL _oneButtonPerLine;	// 48 = 0x30
	BOOL _shouldDismissAfterUnlock;	// 49 = 0x31
	BOOL _shouldDisplayAsTopMost;	// 50 = 0x32
	BOOL _shouldHideButtonsInAwayView;	// 51 = 0x33
	NSArray *_textFields;	// 52 = 0x34
	NSString *_title;	// 56 = 0x38
	int _unlockActionButtonIndex;	// 60 = 0x3c
	NSMutableDictionary *_userInfo;	// 64 = 0x40
}
@property(assign) BOOL allowDuplicates;	// G=0x368195b1; S=0x368195c1; @synthesize=_allowDuplicates
@property(copy) SSAuthenticationContext *authenticationContext;	// G=0x368195d1; S=0x368195e5; @synthesize=_authenticationContext
@property(assign) BOOL authorizationIsForced;	// G=0x36819609; S=0x36819619; @synthesize=_authorizationIsForced
@property(retain) NSArray *buttons;	// G=0x36819629; S=0x3681963d; @synthesize=_buttons
@property(assign) int defaultButtonIndex;	// G=0x36819661; S=0x36819671; @synthesize=_defaultButtonIndex
@property(assign) BOOL dismissOnLock;	// G=0x36819681; S=0x36819691; @synthesize=_dismissOnLock
@property(copy) NSString *displayCountKey;	// G=0x36818f65; S=0x36819339; 
@property(readonly, assign, getter=isDisplayable) BOOL displayable;	// G=0x368190a1; 
@property(assign) BOOL expectsResponse;	// G=0x368196a1; S=0x368196b1; @synthesize=_expectsResponse
@property(assign) BOOL groupsTextFields;	// G=0x368196c1; S=0x368196d1; @synthesize=_groupsTextFields
@property(assign) int kind;	// G=0x368196e1; S=0x368196f1; @synthesize=_kind
@property(assign) int maximumDisplayCount;	// G=0x368192ed; S=0x368193bd; 
@property(retain) NSString *message;	// G=0x36819701; S=0x36819715; @synthesize=_message
@property(assign) BOOL oneButtonPerLine;	// G=0x36819739; S=0x36819749; @synthesize=_oneButtonPerLine
@property(assign) BOOL shouldDismissAfterUnlock;	// G=0x36819759; S=0x36819769; @synthesize=_shouldDismissAfterUnlock
@property(assign) BOOL shouldDisplayAsTopMost;	// G=0x36819779; S=0x36819789; @synthesize=_shouldDisplayAsTopMost
@property(assign) BOOL shouldHideButtonsInAwayView;	// G=0x36819799; S=0x368197a9; @synthesize=_shouldHideButtonsInAwayView
@property(retain) NSArray *textFields;	// G=0x368197b9; S=0x368197cd; @synthesize=_textFields
@property(retain) NSString *title;	// G=0x368197f1; S=0x36819805; @synthesize=_title
@property(assign) int unlockActionButtonIndex;	// G=0x36819829; S=0x36819839; @synthesize=_unlockActionButtonIndex
+ (int)displayCountForKey:(id)key;	// 0x3681891d
- (id)init;	// 0x368179c9
- (id)initWithAuthenticationChallege:(id)authenticationChallege;	// 0x36819849
- (id)initWithDialogDictionary:(id)dialogDictionary;	// 0x36817a79
- (id)initWithError:(id)error;	// 0x36818125
- (id)initWithOfferDeviceError:(id)offerDeviceError;	// 0x36818465
- (id)initWithTitle:(id)title message:(id)message;	// 0x36818731
- (int)_kindForString:(id)string;	// 0x36819545
// declared property getter: - (BOOL)allowDuplicates;	// 0x368195b1
// declared property getter: - (id)authenticationContext;	// 0x368195d1
// declared property getter: - (BOOL)authorizationIsForced;	// 0x36819609
// declared property getter: - (id)buttons;	// 0x36819629
- (id)copyUserNotification;	// 0x3681896d
- (void)dealloc;	// 0x36818845
// declared property getter: - (int)defaultButtonIndex;	// 0x36819661
// declared property getter: - (BOOL)dismissOnLock;	// 0x36819681
// declared property getter: - (id)displayCountKey;	// 0x36818f65
// declared property getter: - (BOOL)expectsResponse;	// 0x368196a1
// declared property getter: - (BOOL)groupsTextFields;	// 0x368196c1
- (void)incrementDisplayCount;	// 0x36818fd1
// declared property getter: - (BOOL)isDisplayable;	// 0x368190a1
- (BOOL)isEqual:(id)equal;	// 0x36819169
// declared property getter: - (int)kind;	// 0x368196e1
// declared property getter: - (int)maximumDisplayCount;	// 0x368192ed
// declared property getter: - (id)message;	// 0x36819701
// declared property getter: - (BOOL)oneButtonPerLine;	// 0x36819739
// declared property setter: - (void)setAllowDuplicates:(BOOL)duplicates;	// 0x368195c1
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x368195e5
// declared property setter: - (void)setAuthorizationIsForced:(BOOL)forced;	// 0x36819619
// declared property setter: - (void)setButtons:(id)buttons;	// 0x3681963d
// declared property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x36819671
// declared property setter: - (void)setDismissOnLock:(BOOL)lock;	// 0x36819691
// declared property setter: - (void)setDisplayCountKey:(id)key;	// 0x36819339
// declared property setter: - (void)setExpectsResponse:(BOOL)response;	// 0x368196b1
// declared property setter: - (void)setGroupsTextFields:(BOOL)fields;	// 0x368196d1
// declared property setter: - (void)setKind:(int)kind;	// 0x368196f1
// declared property setter: - (void)setMaximumDisplayCount:(int)count;	// 0x368193bd
// declared property setter: - (void)setMessage:(id)message;	// 0x36819715
// declared property setter: - (void)setOneButtonPerLine:(BOOL)line;	// 0x36819749
// declared property setter: - (void)setShouldDismissAfterUnlock:(BOOL)dismissAfterUnlock;	// 0x36819769
// declared property setter: - (void)setShouldDisplayAsTopMost:(BOOL)displayAsTopMost;	// 0x36819789
// declared property setter: - (void)setShouldHideButtonsInAwayView:(BOOL)hideButtonsInAwayView;	// 0x368197a9
// declared property setter: - (void)setTextFields:(id)fields;	// 0x368197cd
// declared property setter: - (void)setTitle:(id)title;	// 0x36819805
// declared property setter: - (void)setUnlockActionButtonIndex:(int)index;	// 0x36819839
- (void)setValue:(id)value forUserInfoKey:(id)userInfoKey;	// 0x36819409
// declared property getter: - (BOOL)shouldDismissAfterUnlock;	// 0x36819759
// declared property getter: - (BOOL)shouldDisplayAsTopMost;	// 0x36819779
// declared property getter: - (BOOL)shouldHideButtonsInAwayView;	// 0x36819799
// declared property getter: - (id)textFields;	// 0x368197b9
// declared property getter: - (id)title;	// 0x368197f1
// declared property getter: - (int)unlockActionButtonIndex;	// 0x36819829
- (id)valueForUserInfoKey:(id)userInfoKey;	// 0x368194c5
@end


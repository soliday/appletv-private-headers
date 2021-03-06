/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

#import <BasicAccount.h> // Unknown library


@interface BasicAccount (DAChildAccountExtensions)
- (id)childAccountPropertiesArrayBySettingChildProperties:(id)properties forChildAccountType:(id)childAccountType;	// 0x36c19805
- (id)childPropertiesForAccountType:(id)accountType defaultProperties:(id)properties outParentNeedsSave:(BOOL *)save;	// 0x36c19725
@end

@interface BasicAccount (DAMMeExtras)
- (BOOL)isValidDAMMeAccount;	// 0x36c21a69
- (id)subscribedCalendarRecords;	// 0x36c21b1d
@end

@interface BasicAccount (DAIMAPNotesExtensions)
- (BOOL)accountClassStringIsIMAPSubclass;	// 0x36c25679
- (BOOL)accountTypeStringIsIMAPSubclass;	// 0x36c255d1
- (BOOL)accountTypeStringOwnsIMAPChild;	// 0x36c25749
- (BOOL)isValidIMAPNotesAccount;	// 0x36c257c9
@end

@interface BasicAccount (DACalDAVChildExtensions)
- (BOOL)accountPropertiesHaveCalDAVEnabled:(id)enabled;	// 0x36c261f5
- (BOOL)accountTypeStringCanOwnCalDAVAccounts;	// 0x36c2614d
- (BOOL)isValidCalDAVChildAccount;	// 0x36c262b9
@end

@interface BasicAccount (DACardDAVChildExtensions)
- (BOOL)accountPropertiesHaveCardDAVEnabled:(id)enabled;	// 0x36c264d5
- (BOOL)accountTypeStringCanOwnCardDAVAccounts;	// 0x36c2646d
- (BOOL)isValidCardDAVChildAccount;	// 0x36c26565
@end

@interface BasicAccount (BookmarkDAVChildExtensions)
- (BOOL)accountPropertiesHaveBookmarkDAVEnabled:(id)enabled;	// 0x36c2bc45
- (BOOL)accountTypeStringCanOwnBookmarkDAVAccounts;	// 0x36c2bc05
- (BOOL)isValidBookmarkDAVChildAccount;	// 0x36c2bcd5
@end


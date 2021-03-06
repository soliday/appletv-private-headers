/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h> // Unknown library

@class NSDictionary, NSString;

@interface SSDialogButton : NSObject {
@private
	NSDictionary *_actionDictionary;	// 4 = 0x4
	NSString *_title;	// 8 = 0x8
}
@property(readonly, assign, nonatomic) NSString *URLTarget;	// G=0x365202d5; 
@property(readonly, assign, nonatomic) id actionParameter;	// G=0x36520229; 
@property(readonly, assign, nonatomic) NSString *buttonAction;	// G=0x3652028d; 
@property(readonly, assign, nonatomic) NSString *buttonTitle;	// G=0x365201f1; 
- (id)init;	// 0x365200bd
- (id)initWithTitle:(id)title actionDictionary:(id)dictionary;	// 0x365200d1
// declared property getter: - (id)URLTarget;	// 0x365202d5
// declared property getter: - (id)actionParameter;	// 0x36520229
// declared property getter: - (id)buttonAction;	// 0x3652028d
// declared property getter: - (id)buttonTitle;	// 0x365201f1
- (void)dealloc;	// 0x36520191
- (id)valueForActionProperty:(id)actionProperty;	// 0x365202f1
@end


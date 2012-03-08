/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIImage, NSString, NSURL, NSArray, UIColor;

@interface UIPasteboard : NSObject {
@private
	NSString *_name;	// 4 = 0x4
}
@property(copy, nonatomic) NSURL *URL;	// G=0x359185bd; S=0x3591857d; 
@property(copy, nonatomic) NSArray *URLs;	// G=0x35918705; S=0x359185f9; 
@property(readonly, assign, nonatomic) int changeCount;	// G=0x359181a9; 
@property(copy, nonatomic) UIColor *color;	// G=0x35918b8d; S=0x35918b4d; 
@property(copy, nonatomic) NSArray *colors;	// G=0x35918cd5; S=0x35918bc9; 
@property(copy, nonatomic) UIImage *image;	// G=0x35918785; S=0x35918745; 
@property(copy, nonatomic) NSArray *images;	// G=0x35918999; S=0x3591888d; 
@property(copy, nonatomic) NSArray *items;	// G=0x359181bd; S=0x35918335; 
@property(readonly, assign, nonatomic) NSString *name;	// G=0x35917625; 
@property(readonly, assign, nonatomic) int numberOfItems;	// G=0x3578fa8d; 
@property(assign, nonatomic, getter=isPersistent) BOOL persistent;	// G=0x35918179; S=0x35918195; 
@property(copy, nonatomic) NSString *string;	// G=0x359183f5; S=0x359183b5; 
@property(copy, nonatomic) NSArray *strings;	// G=0x3591853d; S=0x35918431; 
+ (id)_findPasteboard;	// 0x35918d15
+ (id)_printPasteboard;	// 0x35918d6d
+ (id)generalPasteboard;	// 0x357707c1
+ (id)pasteboardWithName:(id)name create:(BOOL)create;	// 0x35917265
+ (id)pasteboardWithUniqueName;	// 0x359173e1
+ (void)removePasteboardWithName:(id)name;	// 0x359174c5
- (id)init;	// 0x35917549
// declared property getter: - (id)URL;	// 0x359185bd
// declared property getter: - (id)URLs;	// 0x35918705
- (id)_initWithName:(id)name system:(BOOL)system create:(BOOL)create;	// 0x35770819
- (void)_pasteboardChanged:(id)changed;	// 0x35918dc5
- (void)addItems:(id)items;	// 0x35917fa9
// declared property getter: - (int)changeCount;	// 0x359181a9
// declared property getter: - (id)color;	// 0x35918b8d
// declared property getter: - (id)colors;	// 0x35918cd5
- (BOOL)containsPasteboardTypes:(id)types;	// 0x35770c11
- (BOOL)containsPasteboardTypes:(id)types inItemSet:(id)itemSet;	// 0x3578fbd9
- (id)dataForPasteboardType:(id)pasteboardType;	// 0x35917689
- (id)dataForPasteboardType:(id)pasteboardType inItemSet:(id)itemSet;	// 0x35917ea1
- (void)dealloc;	// 0x359175c5
// declared property getter: - (id)image;	// 0x35918785
// declared property getter: - (id)images;	// 0x35918999
// declared property getter: - (BOOL)isPersistent;	// 0x35918179
- (id)itemSetWithPasteboardTypes:(id)pasteboardTypes;	// 0x35917d09
// declared property getter: - (id)items;	// 0x359181bd
// declared property getter: - (id)name;	// 0x35917625
// declared property getter: - (int)numberOfItems;	// 0x3578fa8d
- (id)pasteboardTypes;	// 0x3591765d
- (id)pasteboardTypesForItemSet:(id)itemSet;	// 0x35917c29
// declared property setter: - (void)setColor:(id)color;	// 0x35918b4d
// declared property setter: - (void)setColors:(id)colors;	// 0x35918bc9
- (void)setData:(id)data forPasteboardType:(id)pasteboardType;	// 0x35917b95
// declared property setter: - (void)setImage:(id)image;	// 0x35918745
// declared property setter: - (void)setImages:(id)images;	// 0x3591888d
// declared property setter: - (void)setItems:(id)items;	// 0x35918335
// declared property setter: - (void)setPersistent:(BOOL)persistent;	// 0x35918195
// declared property setter: - (void)setString:(id)string;	// 0x359183b5
// declared property setter: - (void)setStrings:(id)strings;	// 0x35918431
// declared property setter: - (void)setURL:(id)url;	// 0x3591857d
// declared property setter: - (void)setURLs:(id)urls;	// 0x359185f9
- (void)setValue:(id)value forPasteboardType:(id)pasteboardType;	// 0x35917985
// declared property getter: - (id)string;	// 0x359183f5
// declared property getter: - (id)strings;	// 0x3591853d
- (id)valueForPasteboardType:(id)pasteboardType;	// 0x359176b5
- (id)valuesForPasteboardType:(id)pasteboardType inItemSet:(id)itemSet;	// 0x35917d9d
@end

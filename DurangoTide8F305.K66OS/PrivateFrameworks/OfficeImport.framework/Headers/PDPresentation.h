/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import "OCDDocument.h"

@class NSMutableArray, NSMutableDictionary, OADTextListStyle, OADDrawingGroup;

__attribute__((visibility("hidden")))
@interface PDPresentation : OCDDocument {
@private
	OADDrawingGroup *mDrawingGroup;	// 16 = 0x10
	NSMutableArray *mSlideMasters;	// 20 = 0x14
	NSMutableArray *mNotesMasters;	// 24 = 0x18
	NSMutableArray *mSlides;	// 28 = 0x1c
	NSMutableArray *mBulletBlips;	// 32 = 0x20
	CGSize mSlideSize;	// 36 = 0x24
	CGSize mNotesSize;	// 44 = 0x2c
	BOOL mIsAutoPlay;	// 52 = 0x34
	BOOL mIsCommentsVisible;	// 53 = 0x35
	BOOL mIsLooping;	// 54 = 0x36
	BOOL mIsKiosk;	// 55 = 0x37
	NSMutableDictionary *mCommentAuthors;	// 56 = 0x38
	OADTextListStyle *mDefaultTextStyle;	// 60 = 0x3c
}
@property(assign) BOOL isAutoPlay;	// G=0x345cc699; S=0x3449c901; converted property
@property(assign) BOOL isCommentsVisible;	// G=0x345cc6a9; S=0x344a745d; converted property
@property(assign) BOOL isKiosk;	// G=0x345cc6c9; S=0x344d79a1; converted property
@property(assign) BOOL isLooping;	// G=0x345cc6b9; S=0x344d7991; converted property
@property(assign) CGSize notesSize;	// G=0x345cc681; S=0x344a7445; converted property
@property(assign) CGSize slideSize;	// G=0x34439db5; S=0x344a742d; converted property
- (id)init;	// 0x3449bd01
- (unsigned long)addBulletBlip:(id)blip;	// 0x344cb255
- (void)addNotesMaster:(id)master;	// 0x34539089
- (void)addSlide:(id)slide;	// 0x345cc785
- (void)addSlideMaster:(id)master;	// 0x344a879d
- (id)bulletBlipAtIndex:(long)index;	// 0x345cc719
- (unsigned long)bulletBlipCount;	// 0x344cb2c1
- (id)bulletBlips;	// 0x3452714d
- (id)commentAuthorForId:(unsigned)anId;	// 0x345cc6d9
- (void)dealloc;	// 0x34460c55
- (id)defaultTextStyle;	// 0x344a6781
- (id)drawingGroup;	// 0x344399fd
- (unsigned)indexOfSlide:(id)slide;	// 0x345cc739
// converted property getter: - (BOOL)isAutoPlay;	// 0x345cc699
// converted property getter: - (BOOL)isCommentsVisible;	// 0x345cc6a9
// converted property getter: - (BOOL)isKiosk;	// 0x345cc6c9
// converted property getter: - (BOOL)isLooping;	// 0x345cc6b9
- (id)notesMasterAtIndex:(unsigned)index;	// 0x345cc7e5
- (unsigned)notesMasterCount;	// 0x345cc805
// converted property getter: - (CGSize)notesSize;	// 0x345cc681
- (void)setCommentAuthor:(id)author forId:(unsigned)anId;	// 0x3454e861
// converted property setter: - (void)setIsAutoPlay:(BOOL)play;	// 0x3449c901
// converted property setter: - (void)setIsCommentsVisible:(BOOL)visible;	// 0x344a745d
// converted property setter: - (void)setIsKiosk:(BOOL)kiosk;	// 0x344d79a1
// converted property setter: - (void)setIsLooping:(BOOL)looping;	// 0x344d7991
// converted property setter: - (void)setNotesSize:(CGSize)size;	// 0x344a7445
// converted property setter: - (void)setSlideSize:(CGSize)size;	// 0x344a742d
- (id)slideAtIndex:(unsigned)index;	// 0x345cc7a5
- (unsigned)slideCount;	// 0x345cc7c5
- (id)slideMasterAtIndex:(unsigned)index;	// 0x345cc825
- (unsigned)slideMasterCount;	// 0x345cc845
// converted property getter: - (CGSize)slideSize;	// 0x34439db5
@end


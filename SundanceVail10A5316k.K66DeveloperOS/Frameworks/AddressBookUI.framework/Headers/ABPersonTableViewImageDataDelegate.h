/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <NSObject.h> // Unknown library
#import "AddressBookUI-Structs.h"
#import "ABPersonImageDataDelegate.h"

@class ABPersonTableViewDataSource;

@interface ABPersonTableViewImageDataDelegate : NSObject <ABPersonImageDataDelegate> {
@private
	CFDictionaryRef _currentImageData;	// 4 = 0x4
	void *_personForImageData;	// 8 = 0x8
	BOOL _hasImageChanges;	// 12 = 0xc
	BOOL _didChangePreferredPersonForImage;	// 13 = 0xd
	ABPersonTableViewDataSource *_dataSource;	// 16 = 0x10
}
@property(assign) CFDictionaryRef currentImageData;	// G=0x34cd1e1d; S=0x34cd1e6d; converted property
@property(assign, nonatomic) ABPersonTableViewDataSource *dataSource;	// G=0x34cd27a5; S=0x34cd27b5; @synthesize=_dataSource
@property(readonly, assign) BOOL didChangePreferredPersonForImage;	// G=0x34cd2795; converted property
@property(readonly, assign) BOOL hasImageChanges;	// G=0x34cd1ea1; converted property
@property(assign) void *personForImageData;	// G=0x34cd1ce9; S=0x34cd1cfd; converted property
// converted property getter: - (CFDictionaryRef)currentImageData;	// 0x34cd1e1d
// declared property getter: - (id)dataSource;	// 0x34cd27a5
- (void)dealloc;	// 0x34cd119d
// converted property getter: - (BOOL)didChangePreferredPersonForImage;	// 0x34cd2795
// converted property getter: - (BOOL)hasImageChanges;	// 0x34cd1ea1
- (BOOL)hasImageDataForPerson:(void *)person;	// 0x34cd1635
- (id)imageDataWithFormat:(int)format cropRect:(CGRect *)rect forPerson:(void *)person;	// 0x34cd17d5
- (id)imageDataWithFormat:(int)format cropRect:(CGRect *)rect forPerson:(void *)person isRemoved:(BOOL *)removed;	// 0x34cd225d
- (void)imageWillSave;	// 0x34cd1d51
- (void)markImagesWith:(id)with forPerson:(void *)person;	// 0x34cd11f9
- (id)people;	// 0x34cd14ed
// converted property getter: - (void *)personForImageData;	// 0x34cd1ce9
- (void *)personForImageDataExcludingPeople:(id)imageDataExcludingPeople;	// 0x34cd24bd
- (void)refreshImageData;	// 0x34cd1d41
- (void)reloadImageData;	// 0x34cd1d9d
- (void)removeImageDataForPerson:(void *)person;	// 0x34cd1a7d
- (void)resetImageData;	// 0x34cd1eb1
// converted property setter: - (void)setCurrentImageData:(CFDictionaryRef)data;	// 0x34cd1e6d
// declared property setter: - (void)setDataSource:(id)source;	// 0x34cd27b5
- (void)setImageData:(id)data withFormat:(int)format cropRect:(CGRect)rect forPerson:(void *)person;	// 0x34cd17f9
// converted property setter: - (void)setPersonForImageData:(void *)imageData;	// 0x34cd1cfd
- (void)updateRecordImages;	// 0x34cd1f01
- (id)writablePeople;	// 0x34cd1515
@end


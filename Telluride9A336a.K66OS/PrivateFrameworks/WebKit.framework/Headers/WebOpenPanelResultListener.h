/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"
#import "WebOpenPanelResultListener.h"
#import "NSObject.h"


@protocol WebOpenPanelResultListener <NSObject>
- (void)cancel;
- (void)chooseFilename:(id)filename;
- (void)chooseFilenames:(id)filenames;
@end

__attribute__((visibility("hidden")))
@interface WebOpenPanelResultListener : NSObject <WebOpenPanelResultListener> {
@private
	FileChooser *_chooser;	// 4 = 0x4
}
- (id)initWithChooser:(PassRefPtr<WebCore::FileChooser>)chooser;	// 0x364a966d
- (void)cancel;	// 0x364a9aa5
- (void)chooseFilename:(id)filename;	// 0x364a995d
- (void)chooseFilenames:(id)filenames;	// 0x364a96b5
@end

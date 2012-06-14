/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

#import <NSObject.h> // Unknown library
#import "ASParsing.h"

@class NSInvocation, NSMutableDictionary;

@interface ASItem : NSObject <ASParsing> {
	ASItem *_root;	// 4 = 0x4
	ASItem *_parent;	// 8 = 0x8
	int _codePage;	// 12 = 0xc
	int _token;	// 16 = 0x10
	NSObject<ASParsing> *_currentlyParsingSubItem;	// 20 = 0x14
	int _currentlyParsingCPTNumber;	// 24 = 0x18
	NSInvocation *_currentStreamInvocation;	// 28 = 0x1c
	int _parsingState;	// 32 = 0x20
	NSMutableDictionary *_parseRuleUsageNumbers;	// 36 = 0x24
}
@property(retain) NSInvocation *currentStreamInvocation;	// G=0x3189e4f5; S=0x3189e505; converted property
@property(readonly, retain) ASItem *parent;	// G=0x3189e099; converted property
@property(readonly, assign) int parsingState;	// G=0x3189e4e5; converted property
+ (BOOL)acceptsTopLevelLeaves;	// 0x3189c541
+ (BOOL)expectsContent;	// 0x3189e549
+ (BOOL)frontingBasicTypes;	// 0x3189c6c1
+ (BOOL)notifyOfUnknownTokens;	// 0x3189c741
+ (BOOL)parsingLeafNode;	// 0x3189c5c1
+ (BOOL)parsingWithSubItems;	// 0x3189c641
- (id)init;	// 0x3189c7c1
- (int)_dataclass;	// 0x3189d665
- (BOOL)_haveEnoughDataToKeepParsingWithContext:(id)context curToken:(unsigned char)token;	// 0x3189d781
- (BOOL)_itemPathMatches:(id)matches;	// 0x3189e0a9
- (BOOL)_itemPathWithDCCPTMatches:(id)dccptmatches dccpt:(int)dccpt;	// 0x3189e211
- (BOOL)_parseNextValueWithDataclass:(int)dataclass context:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict6 parseRules:(id)rules account:(id)account;	// 0x3189d805
- (id)_replacementObjectWithCallbackDict:(id)callbackDict;	// 0x3189e15d
- (void)_setCurrentlyParsingSubItem:(id)item;	// 0x3189d515
- (BOOL)_setupFirstParseWithContext:(id)context root:(id)root parent:(id)parent;	// 0x3189d559
- (BOOL)_streamIfNecessaryFromContext:(id)context;	// 0x3189d6d9
- (int)_streamYourLittleHeartOutWithContext:(id)context;	// 0x3189c8a9
- (id)_streamingInvocationForStreamingCallbackDict:(id)streamingCallbackDict dccpt:(int)dccpt;	// 0x3189e379
- (id)asParseRules;	// 0x3189e499
// converted property getter: - (id)currentStreamInvocation;	// 0x3189e4f5
- (void)dealloc;	// 0x3189c835
- (void)ignoreThisContent:(id)content;	// 0x3189e451
- (BOOL)nextParsedObjectWithContext:(id)context root:(id)root callbackDict:(id)dict streamCallbackDict:(id)dict4 dataclass:(int)dataclass outParsedObject:(id *)object outCPTNumber:(int *)number account:(id)account;	// 0x3189cdad
// converted property getter: - (id)parent;	// 0x3189e099
- (void)parseASParseContext:(id)context root:(id)root parent:(id)parent callbackDict:(id)dict streamCallbackDict:(id)dict5 account:(id)account;	// 0x3189dc7d
// converted property getter: - (int)parsingState;	// 0x3189e4e5
// converted property setter: - (void)setCurrentStreamInvocation:(id)invocation;	// 0x3189e505
@end


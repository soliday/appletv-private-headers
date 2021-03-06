/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "ATVThunderXMLParser.h"

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface ATVThunderGamePreviewParser : NSObject <ATVThunderXMLParser> {
@private
	BOOL homeSection;	// 4 = 0x4
	int currentPeriod;	// 8 = 0x8
	NSString *_gameState;	// 12 = 0xc
	NSString *_gameStartTime;	// 16 = 0x10
	NSString *_gamePeriod;	// 20 = 0x14
	NSString *_gameClock;	// 24 = 0x18
	NSString *_courtURL;	// 28 = 0x1c
	NSString *_courtFrameURL;	// 32 = 0x20
	NSString *_homeTeamAbbrev;	// 36 = 0x24
	NSString *_homeTeamName;	// 40 = 0x28
	NSString *_homeTeamScore;	// 44 = 0x2c
	NSString *_homeTeamLogoURL;	// 48 = 0x30
	NSString *_homeQ1;	// 52 = 0x34
	NSString *_homeQ2;	// 56 = 0x38
	NSString *_homeQ3;	// 60 = 0x3c
	NSString *_homeQ4;	// 64 = 0x40
	NSString *_homeOT1;	// 68 = 0x44
	NSString *_homeOT2;	// 72 = 0x48
	NSString *_homeOT3;	// 76 = 0x4c
	NSString *_homeOT4;	// 80 = 0x50
	NSString *_homeFgPerc;	// 84 = 0x54
	NSString *_homeTimeouts;	// 88 = 0x58
	NSMutableArray *_homePlayers;	// 92 = 0x5c
	NSString *_awayTeamAbbrev;	// 96 = 0x60
	NSString *_awayTeamName;	// 100 = 0x64
	NSString *_awayTeamScore;	// 104 = 0x68
	NSString *_awayTeamLogoURL;	// 108 = 0x6c
	NSString *_awayQ1;	// 112 = 0x70
	NSString *_awayQ2;	// 116 = 0x74
	NSString *_awayQ3;	// 120 = 0x78
	NSString *_awayQ4;	// 124 = 0x7c
	NSString *_awayOT1;	// 128 = 0x80
	NSString *_awayOT2;	// 132 = 0x84
	NSString *_awayOT3;	// 136 = 0x88
	NSString *_awayOT4;	// 140 = 0x8c
	NSString *_awayFgPerc;	// 144 = 0x90
	NSString *_awayTimeouts;	// 148 = 0x94
	NSMutableArray *_awayPlayers;	// 152 = 0x98
}
@property(copy, nonatomic) NSString *awayFgPerc;	// G=0x32fd5499; S=0x32fd54a9; @synthesize=_awayFgPerc
@property(copy, nonatomic) NSString *awayOT1;	// G=0x32fd53c9; S=0x32fd53d9; @synthesize=_awayOT1
@property(copy, nonatomic) NSString *awayOT2;	// G=0x32fd53fd; S=0x32fd540d; @synthesize=_awayOT2
@property(copy, nonatomic) NSString *awayOT3;	// G=0x32fd5431; S=0x32fd5441; @synthesize=_awayOT3
@property(copy, nonatomic) NSString *awayOT4;	// G=0x32fd5465; S=0x32fd5475; @synthesize=_awayOT4
@property(retain, nonatomic) NSMutableArray *awayPlayers;	// G=0x32fd5501; S=0x32fd5511; @synthesize=_awayPlayers
@property(copy, nonatomic) NSString *awayQ1;	// G=0x32fd52f9; S=0x32fd5309; @synthesize=_awayQ1
@property(copy, nonatomic) NSString *awayQ2;	// G=0x32fd532d; S=0x32fd533d; @synthesize=_awayQ2
@property(copy, nonatomic) NSString *awayQ3;	// G=0x32fd5361; S=0x32fd5371; @synthesize=_awayQ3
@property(copy, nonatomic) NSString *awayQ4;	// G=0x32fd5395; S=0x32fd53a5; @synthesize=_awayQ4
@property(copy, nonatomic) NSString *awayTeamAbbrev;	// G=0x32fd5229; S=0x32fd5239; @synthesize=_awayTeamAbbrev
@property(copy, nonatomic) NSString *awayTeamLogoURL;	// G=0x32fd52c5; S=0x32fd52d5; @synthesize=_awayTeamLogoURL
@property(copy, nonatomic) NSString *awayTeamName;	// G=0x32fd525d; S=0x32fd526d; @synthesize=_awayTeamName
@property(copy, nonatomic) NSString *awayTeamScore;	// G=0x32fd5291; S=0x32fd52a1; @synthesize=_awayTeamScore
@property(copy, nonatomic) NSString *awayTimeouts;	// G=0x32fd54cd; S=0x32fd54dd; @synthesize=_awayTimeouts
@property(copy, nonatomic) NSString *courtFrameURL;	// G=0x32fd4ee9; S=0x32fd4ef9; @synthesize=_courtFrameURL
@property(copy, nonatomic) NSString *courtURL;	// G=0x32fd4eb5; S=0x32fd4ec5; @synthesize=_courtURL
@property(copy, nonatomic) NSString *gameClock;	// G=0x32fd4e81; S=0x32fd4e91; @synthesize=_gameClock
@property(copy, nonatomic) NSString *gamePeriod;	// G=0x32fd4e4d; S=0x32fd4e5d; @synthesize=_gamePeriod
@property(copy, nonatomic) NSString *gameStartTime;	// G=0x32fd4e19; S=0x32fd4e29; @synthesize=_gameStartTime
@property(copy, nonatomic) NSString *gameState;	// G=0x32fd4de5; S=0x32fd4df5; @synthesize=_gameState
@property(copy, nonatomic) NSString *homeFgPerc;	// G=0x32fd518d; S=0x32fd519d; @synthesize=_homeFgPerc
@property(copy, nonatomic) NSString *homeOT1;	// G=0x32fd50bd; S=0x32fd50cd; @synthesize=_homeOT1
@property(copy, nonatomic) NSString *homeOT2;	// G=0x32fd50f1; S=0x32fd5101; @synthesize=_homeOT2
@property(copy, nonatomic) NSString *homeOT3;	// G=0x32fd5125; S=0x32fd5135; @synthesize=_homeOT3
@property(copy, nonatomic) NSString *homeOT4;	// G=0x32fd5159; S=0x32fd5169; @synthesize=_homeOT4
@property(retain, nonatomic) NSMutableArray *homePlayers;	// G=0x32fd51f5; S=0x32fd5205; @synthesize=_homePlayers
@property(copy, nonatomic) NSString *homeQ1;	// G=0x32fd4fed; S=0x32fd4ffd; @synthesize=_homeQ1
@property(copy, nonatomic) NSString *homeQ2;	// G=0x32fd5021; S=0x32fd5031; @synthesize=_homeQ2
@property(copy, nonatomic) NSString *homeQ3;	// G=0x32fd5055; S=0x32fd5065; @synthesize=_homeQ3
@property(copy, nonatomic) NSString *homeQ4;	// G=0x32fd5089; S=0x32fd5099; @synthesize=_homeQ4
@property(copy, nonatomic) NSString *homeTeamAbbrev;	// G=0x32fd4f1d; S=0x32fd4f2d; @synthesize=_homeTeamAbbrev
@property(copy, nonatomic) NSString *homeTeamLogoURL;	// G=0x32fd4fb9; S=0x32fd4fc9; @synthesize=_homeTeamLogoURL
@property(copy, nonatomic) NSString *homeTeamName;	// G=0x32fd4f51; S=0x32fd4f61; @synthesize=_homeTeamName
@property(copy, nonatomic) NSString *homeTeamScore;	// G=0x32fd4f85; S=0x32fd4f95; @synthesize=_homeTeamScore
@property(copy, nonatomic) NSString *homeTimeouts;	// G=0x32fd51c1; S=0x32fd51d1; @synthesize=_homeTimeouts
- (id)init;	// 0x32fd3571
// declared property getter: - (id)awayFgPerc;	// 0x32fd5499
// declared property getter: - (id)awayOT1;	// 0x32fd53c9
// declared property getter: - (id)awayOT2;	// 0x32fd53fd
// declared property getter: - (id)awayOT3;	// 0x32fd5431
// declared property getter: - (id)awayOT4;	// 0x32fd5465
// declared property getter: - (id)awayPlayers;	// 0x32fd5501
// declared property getter: - (id)awayQ1;	// 0x32fd52f9
// declared property getter: - (id)awayQ2;	// 0x32fd532d
// declared property getter: - (id)awayQ3;	// 0x32fd5361
// declared property getter: - (id)awayQ4;	// 0x32fd5395
// declared property getter: - (id)awayTeamAbbrev;	// 0x32fd5229
// declared property getter: - (id)awayTeamLogoURL;	// 0x32fd52c5
// declared property getter: - (id)awayTeamName;	// 0x32fd525d
// declared property getter: - (id)awayTeamScore;	// 0x32fd5291
// declared property getter: - (id)awayTimeouts;	// 0x32fd54cd
// declared property getter: - (id)courtFrameURL;	// 0x32fd4ee9
// declared property getter: - (id)courtURL;	// 0x32fd4eb5
- (id)createStorePage;	// 0x32fd3925
- (id)createStorePageForError:(int)error;	// 0x32fd4381
- (void)dealloc;	// 0x32fd361d
// declared property getter: - (id)gameClock;	// 0x32fd4e81
// declared property getter: - (id)gamePeriod;	// 0x32fd4e4d
// declared property getter: - (id)gameStartTime;	// 0x32fd4e19
// declared property getter: - (id)gameState;	// 0x32fd4de5
// declared property getter: - (id)homeFgPerc;	// 0x32fd518d
// declared property getter: - (id)homeOT1;	// 0x32fd50bd
// declared property getter: - (id)homeOT2;	// 0x32fd50f1
// declared property getter: - (id)homeOT3;	// 0x32fd5125
// declared property getter: - (id)homeOT4;	// 0x32fd5159
// declared property getter: - (id)homePlayers;	// 0x32fd51f5
// declared property getter: - (id)homeQ1;	// 0x32fd4fed
// declared property getter: - (id)homeQ2;	// 0x32fd5021
// declared property getter: - (id)homeQ3;	// 0x32fd5055
// declared property getter: - (id)homeQ4;	// 0x32fd5089
// declared property getter: - (id)homeTeamAbbrev;	// 0x32fd4f1d
// declared property getter: - (id)homeTeamLogoURL;	// 0x32fd4fb9
// declared property getter: - (id)homeTeamName;	// 0x32fd4f51
// declared property getter: - (id)homeTeamScore;	// 0x32fd4f85
// declared property getter: - (id)homeTimeouts;	// 0x32fd51c1
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x32fd4385
// declared property setter: - (void)setAwayFgPerc:(id)perc;	// 0x32fd54a9
// declared property setter: - (void)setAwayOT1:(id)a1;	// 0x32fd53d9
// declared property setter: - (void)setAwayOT2:(id)a2;	// 0x32fd540d
// declared property setter: - (void)setAwayOT3:(id)a3;	// 0x32fd5441
// declared property setter: - (void)setAwayOT4:(id)a4;	// 0x32fd5475
// declared property setter: - (void)setAwayPlayers:(id)players;	// 0x32fd5511
// declared property setter: - (void)setAwayQ1:(id)a1;	// 0x32fd5309
// declared property setter: - (void)setAwayQ2:(id)a2;	// 0x32fd533d
// declared property setter: - (void)setAwayQ3:(id)a3;	// 0x32fd5371
// declared property setter: - (void)setAwayQ4:(id)a4;	// 0x32fd53a5
// declared property setter: - (void)setAwayTeamAbbrev:(id)abbrev;	// 0x32fd5239
// declared property setter: - (void)setAwayTeamLogoURL:(id)url;	// 0x32fd52d5
// declared property setter: - (void)setAwayTeamName:(id)name;	// 0x32fd526d
// declared property setter: - (void)setAwayTeamScore:(id)score;	// 0x32fd52a1
// declared property setter: - (void)setAwayTimeouts:(id)timeouts;	// 0x32fd54dd
// declared property setter: - (void)setCourtFrameURL:(id)url;	// 0x32fd4ef9
// declared property setter: - (void)setCourtURL:(id)url;	// 0x32fd4ec5
// declared property setter: - (void)setGameClock:(id)clock;	// 0x32fd4e91
// declared property setter: - (void)setGamePeriod:(id)period;	// 0x32fd4e5d
// declared property setter: - (void)setGameStartTime:(id)time;	// 0x32fd4e29
// declared property setter: - (void)setGameState:(id)state;	// 0x32fd4df5
// declared property setter: - (void)setHomeFgPerc:(id)perc;	// 0x32fd519d
// declared property setter: - (void)setHomeOT1:(id)a1;	// 0x32fd50cd
// declared property setter: - (void)setHomeOT2:(id)a2;	// 0x32fd5101
// declared property setter: - (void)setHomeOT3:(id)a3;	// 0x32fd5135
// declared property setter: - (void)setHomeOT4:(id)a4;	// 0x32fd5169
// declared property setter: - (void)setHomePlayers:(id)players;	// 0x32fd5205
// declared property setter: - (void)setHomeQ1:(id)a1;	// 0x32fd4ffd
// declared property setter: - (void)setHomeQ2:(id)a2;	// 0x32fd5031
// declared property setter: - (void)setHomeQ3:(id)a3;	// 0x32fd5065
// declared property setter: - (void)setHomeQ4:(id)a4;	// 0x32fd5099
// declared property setter: - (void)setHomeTeamAbbrev:(id)abbrev;	// 0x32fd4f2d
// declared property setter: - (void)setHomeTeamLogoURL:(id)url;	// 0x32fd4fc9
// declared property setter: - (void)setHomeTeamName:(id)name;	// 0x32fd4f61
// declared property setter: - (void)setHomeTeamScore:(id)score;	// 0x32fd4f95
// declared property setter: - (void)setHomeTimeouts:(id)timeouts;	// 0x32fd51d1
@end


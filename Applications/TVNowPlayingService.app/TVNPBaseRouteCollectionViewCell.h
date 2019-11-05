/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:01:19 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVNowPlayingService.app/TVNowPlayingService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVNowPlayingService/TVNowPlayingService-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSString, NSNumber, _UIFloatingContentView, UIView, UIImageView, TVNPRoutingMusicBarsView, UILabel, TVNPNowPlayingProgressView, TVNPNowPlayingSliderView, UILayoutGuide, NSMutableArray;

@interface TVNPBaseRouteCollectionViewCell : UICollectionViewCell {

	BOOL _isFocused;
	BOOL _allowsGrouping;
	BOOL _displayAsSelected;
	BOOL _showingVolumeSlider;
	BOOL _enabled;
	NSString* _titleText;
	NSString* _subtitleText;
	unsigned long long _deviceType;
	unsigned long long _musicBarState;
	NSNumber* _volumeLevel;
	_UIFloatingContentView* _floatingContentView;
	UIView* _backgroundColorView;
	UIImageView* _iconView;
	UIImageView* _checkmarkView;
	TVNPRoutingMusicBarsView* _musicBarsView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	TVNPNowPlayingProgressView* _volumeProgressView;
	TVNPNowPlayingSliderView* _volumeSliderView;
	UILayoutGuide* _layoutGuide;
	NSMutableArray* _volatileContraints;

}

@property (nonatomic,readonly) _UIFloatingContentView * floatingContentView;                     //@synthesize floatingContentView=_floatingContentView - In the implementation block
@property (nonatomic,readonly) UIView * backgroundColorView;                                     //@synthesize backgroundColorView=_backgroundColorView - In the implementation block
@property (nonatomic,readonly) UIImageView * iconView;                                           //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,readonly) UIImageView * checkmarkView;                                      //@synthesize checkmarkView=_checkmarkView - In the implementation block
@property (nonatomic,readonly) TVNPRoutingMusicBarsView * musicBarsView;                         //@synthesize musicBarsView=_musicBarsView - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                                          //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) TVNPNowPlayingProgressView * volumeProgressView;                  //@synthesize volumeProgressView=_volumeProgressView - In the implementation block
@property (nonatomic,readonly) TVNPNowPlayingSliderView * volumeSliderView;                      //@synthesize volumeSliderView=_volumeSliderView - In the implementation block
@property (nonatomic,readonly) UILayoutGuide * layoutGuide;                                      //@synthesize layoutGuide=_layoutGuide - In the implementation block
@property (assign,getter=isShowingVolumeSlider,nonatomic) BOOL showingVolumeSlider;              //@synthesize showingVolumeSlider=_showingVolumeSlider - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                      //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSMutableArray * volatileContraints;                              //@synthesize volatileContraints=_volatileContraints - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                 //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                                              //@synthesize subtitleText=_subtitleText - In the implementation block
@property (assign,nonatomic) BOOL allowsGrouping;                                                //@synthesize allowsGrouping=_allowsGrouping - In the implementation block
@property (assign,nonatomic) unsigned long long deviceType;                                      //@synthesize deviceType=_deviceType - In the implementation block
@property (assign,nonatomic) BOOL displayAsSelected;                                             //@synthesize displayAsSelected=_displayAsSelected - In the implementation block
@property (assign,nonatomic) unsigned long long musicBarState;                                   //@synthesize musicBarState=_musicBarState - In the implementation block
@property (nonatomic,copy) NSNumber * volumeLevel;                                               //@synthesize volumeLevel=_volumeLevel - In the implementation block
+(void)_configureFloatingContentViewAppearance;
+(id)_iconImageForDeviceType:(unsigned long long)arg1 focused:(BOOL)arg2 ;
+(id)_volumeImage:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)prepareForReuse;
-(unsigned long long)deviceType;
-(void)setDeviceType:(unsigned long long)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)titleText;
-(void)setTitleText:(NSString *)arg1 ;
-(NSNumber *)volumeLevel;
-(void)setVolumeLevel:(NSNumber *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(UILabel *)titleLabel;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)subtitleLabel;
-(void)updateConstraints;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(UIImageView *)iconView;
-(void)setShowingVolumeSlider:(BOOL)arg1 ;
-(BOOL)isShowingVolumeSlider;
-(void)volumeSliderValueChanged:(id)arg1 ;
-(UIImageView *)checkmarkView;
-(void)applyLayoutAttributes:(id)arg1 ;
-(_UIFloatingContentView *)floatingContentView;
-(UIView *)backgroundColorView;
-(UILayoutGuide *)layoutGuide;
-(void)_configureAppearanceForControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)setDisplayAsSelected:(BOOL)arg1 ;
-(void)setMusicBarState:(unsigned long long)arg1 ;
-(void)setAllowsGrouping:(BOOL)arg1 ;
-(void)_addInitialConstraints;
-(unsigned long long)_controlStateForCell;
-(unsigned long long)musicBarState;
-(id)_checkmarkImage:(BOOL)arg1 focused:(BOOL)arg2 ;
-(BOOL)displayAsSelected;
-(BOOL)allowsGrouping;
-(TVNPRoutingMusicBarsView *)musicBarsView;
-(TVNPNowPlayingProgressView *)volumeProgressView;
-(TVNPNowPlayingSliderView *)volumeSliderView;
-(NSMutableArray *)volatileContraints;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherUI/WeatherUI-Structs.h>
#import <UIKitCore/UIView.h>

@protocol OS_dispatch_source;
@class WUIDynamicWeatherBackground, NSArray, WUIDynamicWeatherBackgroundInteractiveTransaction, NSObject, UIImageView, WUIWeatherCondition;

@interface WUIWeatherConditionBackgroundView : UIView {

	long long _activeIndex;
	BOOL _hidesConditions;
	BOOL _hasViewAppeared;
	WUIDynamicWeatherBackground* _background;
	double _scrollOffset;
	NSArray* _cities;
	WUIDynamicWeatherBackgroundInteractiveTransaction* _crossfadeTransaction;
	NSObject*<OS_dispatch_source> _crossfadeEffectTimer;
	UIImageView* _introductionImageView;
	WUIWeatherCondition* _leftCondition;
	WUIWeatherCondition* _rightCondition;

}

@property (nonatomic,retain) NSArray * cities;                                                                      //@synthesize cities=_cities - In the implementation block
@property (nonatomic,retain) WUIDynamicWeatherBackgroundInteractiveTransaction * crossfadeTransaction;              //@synthesize crossfadeTransaction=_crossfadeTransaction - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> crossfadeEffectTimer;                                    //@synthesize crossfadeEffectTimer=_crossfadeEffectTimer - In the implementation block
@property (nonatomic,retain) UIImageView * introductionImageView;                                                   //@synthesize introductionImageView=_introductionImageView - In the implementation block
@property (nonatomic,retain) WUIWeatherCondition * leftCondition;                                                   //@synthesize leftCondition=_leftCondition - In the implementation block
@property (nonatomic,retain) WUIWeatherCondition * rightCondition;                                                  //@synthesize rightCondition=_rightCondition - In the implementation block
@property (nonatomic,readonly) NSArray * conditions; 
@property (nonatomic,readonly) WUIDynamicWeatherBackground * background;                                            //@synthesize background=_background - In the implementation block
@property (assign,nonatomic) BOOL hidesConditions;                                                                  //@synthesize hidesConditions=_hidesConditions - In the implementation block
@property (assign,nonatomic) BOOL hasViewAppeared;                                                                  //@synthesize hasViewAppeared=_hasViewAppeared - In the implementation block
@property (assign,nonatomic) double scrollOffset;                                                                   //@synthesize scrollOffset=_scrollOffset - In the implementation block
-(void)dealloc;
-(WUIDynamicWeatherBackground *)background;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSArray *)conditions;
-(id)_conditions;
-(void)layoutSubviews;
-(NSArray *)cities;
-(void)setCities:(NSArray *)arg1 ;
-(void)_cityDidUpdate:(id)arg1 ;
-(void)animateTransitionToSize:(CGSize)arg1 ;
-(void)setLeftCondition:(WUIWeatherCondition *)arg1 ;
-(void)setRightCondition:(WUIWeatherCondition *)arg1 ;
-(void)setCities:(id)arg1 activeCityIndex:(long long)arg2 activeCityLiveConditionOnly:(BOOL)arg3 animationDuration:(double)arg4 ;
-(void)_setCondition:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_conditionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasViewAppeared;
-(void)_removeSideLayers;
-(void)_addBackAllLayers;
-(void)setCities:(id)arg1 activeCityIndex:(long long)arg2 ;
-(void)didTransitionToSize:(CGSize)arg1 ;
-(void)setCities:(id)arg1 activeCityIndex:(long long)arg2 animationDuration:(double)arg3 ;
-(void)updateConditionIfNeededWithCities:(id)arg1 activeCityIndex:(long long)arg2 ;
-(void)updateConditionsAboutCityIndex:(long long)arg1 ;
-(void)setScrollEnded;
-(void)setHidesConditions:(BOOL)arg1 ;
-(void)setScrollOffset:(double)arg1 ;
-(id)relinquishConditionViewForCityAtIndex:(long long)arg1 ;
-(void)useConditionView:(id)arg1 activeCityIndex:(unsigned long long)arg2 ;
-(void)prepareToSuspend;
-(void)prepareToResume;
-(void)saveImageForKeyCondition;
-(BOOL)hidesConditions;
-(void)setHasViewAppeared:(BOOL)arg1 ;
-(double)scrollOffset;
-(WUIDynamicWeatherBackgroundInteractiveTransaction *)crossfadeTransaction;
-(void)setCrossfadeTransaction:(WUIDynamicWeatherBackgroundInteractiveTransaction *)arg1 ;
-(NSObject*<OS_dispatch_source>)crossfadeEffectTimer;
-(void)setCrossfadeEffectTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(UIImageView *)introductionImageView;
-(void)setIntroductionImageView:(UIImageView *)arg1 ;
-(WUIWeatherCondition *)leftCondition;
-(WUIWeatherCondition *)rightCondition;
@end


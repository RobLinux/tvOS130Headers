/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:55 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/PlugIns/GKGameSessionDashboardExtension.appex/GKGameSessionDashboardExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>

@class GKCloudPlayer;

@interface GKGameSessionPlayerPhotoView : UIImageView {

	BOOL _useDarkerPlaceholder;
	BOOL _isUsingPlaceholder;
	BOOL _shouldBeFocused;
	GKCloudPlayer* _player;

}

@property (assign,nonatomic) BOOL shouldBeFocused;                   //@synthesize shouldBeFocused=_shouldBeFocused - In the implementation block
@property (nonatomic,retain) GKCloudPlayer * player;                 //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) BOOL useDarkerPlaceholder;              //@synthesize useDarkerPlaceholder=_useDarkerPlaceholder - In the implementation block
@property (nonatomic,readonly) BOOL isUsingPlaceholder;              //@synthesize isUsingPlaceholder=_isUsingPlaceholder - In the implementation block
-(GKCloudPlayer *)player;
-(void)setPlayer:(GKCloudPlayer *)arg1 ;
-(void)setFocused:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(BOOL)isUsingPlaceholder;
-(BOOL)useDarkerPlaceholder;
-(void)updateFocusEffects;
-(BOOL)shouldBeFocused;
-(void)setUseDarkerPlaceholder:(BOOL)arg1 ;
-(void)setShouldBeFocused:(BOOL)arg1 ;
-(void)setPlayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)displayPlayerImageWithCompletionHandler:(/*^block*/id)arg1 ;
@end


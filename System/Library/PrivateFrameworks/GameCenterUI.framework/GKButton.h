/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <GameCenterUI/GKTextStyleReplay.h>

@class GKTextStyle, NSString;

@interface GKButton : UIButton <GKTextStyleReplay> {

	GKTextStyle* _baseStyle;
	GKTextStyle* _appliedStyle;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) GKTextStyle * baseStyle; 
@property (nonatomic,retain) GKTextStyle * appliedStyle;              //@synthesize appliedStyle=_appliedStyle - In the implementation block
+(void)initialize;
-(void)_UIAppearance_setBaseStyle:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)applyTextStyle:(id)arg1 ;
-(GKTextStyle *)appliedStyle;
-(void)setAppliedStyle:(GKTextStyle *)arg1 ;
-(void)replayAndApplyStyleWithSystemContentChange:(BOOL)arg1 ;
-(GKTextStyle *)baseStyle;
-(void)setBaseStyle:(GKTextStyle *)arg1 ;
@end


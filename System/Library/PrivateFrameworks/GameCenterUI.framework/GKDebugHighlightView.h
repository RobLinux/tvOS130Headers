/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterUI/GameCenterUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIColor, NSString;

@interface GKDebugHighlightView : UIView {

	BOOL _isOval;
	UIColor* _color;
	NSString* _caption;

}

@property (nonatomic,retain) UIColor * color;                 //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSString * caption;              //@synthesize caption=_caption - In the implementation block
@property (assign,nonatomic) BOOL isOval;                     //@synthesize isOval=_isOval - In the implementation block
-(id)init;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)isOval;
-(void)setIsOval:(BOOL)arg1 ;
@end


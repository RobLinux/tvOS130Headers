/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:54 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <UIKitCore/UIButton.h>
#import <SiriTVUI/SiriTVUITemplateItemView.h>

@class NSString;

@interface SiriTVUITemplateButton : UIButton <SiriTVUITemplateItemView> {

	BOOL hasPriorityLayout;
	unsigned long long _backgroundImageStyle;
	CGSize _backgroundImageSize;

}

@property (assign,nonatomic) CGSize backgroundImageSize;                           //@synthesize backgroundImageSize=_backgroundImageSize - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundImageStyle;              //@synthesize backgroundImageStyle=_backgroundImageStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasPriorityLayout; 
+(id)defaultButton;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1 ;
-(CGRect)backgroundRectForBounds:(CGRect)arg1 ;
-(BOOL)shouldFitWithinContentMargins;
-(unsigned long long)backgroundImageStyle;
-(CGSize)backgroundImageSize;
-(void)setBackgroundImageSize:(CGSize)arg1 ;
-(void)setBackgroundImageStyle:(unsigned long long)arg1 ;
@end


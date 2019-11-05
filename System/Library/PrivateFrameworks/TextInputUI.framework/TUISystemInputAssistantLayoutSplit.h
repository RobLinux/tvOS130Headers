/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:36 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <TextInputUI/TUISystemInputAssistantLayout.h>

@interface TUISystemInputAssistantLayoutSplit : TUISystemInputAssistantLayout {

	double _leftSplitWidth;
	double _rightSplitWidth;

}

@property (assign,nonatomic) double leftSplitWidth;               //@synthesize leftSplitWidth=_leftSplitWidth - In the implementation block
@property (assign,nonatomic) double rightSplitWidth;              //@synthesize rightSplitWidth=_rightSplitWidth - In the implementation block
-(id)init;
-(BOOL)usesUnifiedButtonBar;
-(void)configureButtonBarsInViewSet:(id)arg1 forApplicationAssistantItem:(id)arg2 withSystemAssistantItem:(id)arg3 withAssistantView:(id)arg4 ;
-(void)layoutViewSet:(id)arg1 inBounds:(CGRect)arg2 forAssistantView:(id)arg3 ;
-(double)leftSplitWidth;
-(void)setLeftSplitWidth:(double)arg1 ;
-(double)rightSplitWidth;
-(void)setRightSplitWidth:(double)arg1 ;
@end


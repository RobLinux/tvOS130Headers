/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIReusableFooterView.h>

@protocol SiriUIActionableFooterViewDelegate;
@class UIButton, SiriUIKeyline, SiriUISnippetViewController, NSString;

@interface SiriUIActionableFooterView : SiriUIReusableFooterView {

	UIButton* _button;
	SiriUIKeyline* _keyline;
	BOOL _hasKeyline;
	SiriUISnippetViewController* _snippetViewController;
	id<SiriUIActionableFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIActionableFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (assign,nonatomic) BOOL hasKeyline;                                                     //@synthesize hasKeyline=_hasKeyline - In the implementation block
+(double)defaultHeight;
-(id<SiriUIActionableFooterViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUIActionableFooterViewDelegate>)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)edgeInsets;
-(void)layoutSubviews;
-(void)_buttonTapped:(id)arg1 ;
-(id)snippetViewController;
-(void)setSnippetViewController:(id)arg1 ;
-(void)setHasKeyline:(BOOL)arg1 ;
-(BOOL)hasKeyline;
@end


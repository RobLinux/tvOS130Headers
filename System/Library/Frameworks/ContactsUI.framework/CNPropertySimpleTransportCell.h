/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:51 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertySimpleCell.h>

@class CNTransportButton, UIImageView, UIColor;

@interface CNPropertySimpleTransportCell : CNPropertySimpleCell {

	CNTransportButton* _transportIcon1;
	CNTransportButton* _transportIcon2;
	CNTransportButton* _transportIcon3;
	UIImageView* _starView;
	BOOL _allowsActions;
	BOOL _shouldShowTransportButtons;
	UIColor* _actionsColor;

}

@property (assign,nonatomic) BOOL allowsActions;                                       //@synthesize allowsActions=_allowsActions - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowStar; 
@property (assign,nonatomic) BOOL shouldShowTransportButtons;                          //@synthesize shouldShowTransportButtons=_shouldShowTransportButtons - In the implementation block
@property (nonatomic,readonly) CNTransportButton * transportIcon1; 
@property (nonatomic,readonly) CNTransportButton * transportIcon2; 
@property (nonatomic,readonly) CNTransportButton * transportIcon3; 
@property (nonatomic,readonly) CNTransportButton * standardTransportIcon; 
@property (nonatomic,readonly) UIImageView * standardStarView; 
@property (nonatomic,retain) UIColor * actionsColor;                                   //@synthesize actionsColor=_actionsColor - In the implementation block
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setCardGroupItem:(id)arg1 ;
-(id)variableConstraints;
-(BOOL)shouldPerformDefaultAction;
-(id)rightMostView;
-(void)setAllowsActions:(BOOL)arg1 ;
-(void)setActionsColor:(UIColor *)arg1 ;
-(BOOL)allowsActions;
-(void)updateWithPropertyItem:(id)arg1 ;
-(void)setShouldShowTransportButtons:(BOOL)arg1 ;
-(void)transportButtonClicked:(id)arg1 ;
-(BOOL)shouldShowStar;
-(void)updateStarIcon;
-(CNTransportButton *)transportIcon1;
-(CNTransportButton *)transportIcon2;
-(void)updateTransportButtons;
-(BOOL)shouldShowTransportButtons;
-(CNTransportButton *)transportIcon3;
-(void)_contentSizeCategoryDidChange:(id)arg1 ;
-(void)_updateStarImageForView:(id)arg1 ;
-(CNTransportButton *)standardTransportIcon;
-(UIImageView *)standardStarView;
-(UIColor *)actionsColor;
@end


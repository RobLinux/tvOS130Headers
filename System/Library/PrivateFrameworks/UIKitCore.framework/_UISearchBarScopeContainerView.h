/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class _UISearchBarScopeContainerLayout;

@interface _UISearchBarScopeContainerView : UIView {

	_UISearchBarScopeContainerLayout* _layout;

}

@property (nonatomic,retain) _UISearchBarScopeContainerLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(_UISearchBarScopeContainerLayout *)layout;
-(void)setLayout:(_UISearchBarScopeContainerLayout *)arg1 ;
-(void)setNeedsLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(BOOL)_isKnownUISearchBarComponentContainer;
@end

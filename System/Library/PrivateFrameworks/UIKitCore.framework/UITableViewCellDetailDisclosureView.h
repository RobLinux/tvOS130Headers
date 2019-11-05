/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIButton, UIImageView, UITableViewCell;

@interface UITableViewCellDetailDisclosureView : UIControl {

	UIButton* _accessoryButton;
	UIImageView* _disclosureView;
	UITableViewCell* _cell;

}

@property (nonatomic,readonly) UIButton * accessoryButton;              //@synthesize accessoryButton=_accessoryButton - In the implementation block
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)setSemanticContentAttribute:(long long)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(UIButton *)accessoryButton;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 cell:(id)arg3 buttonType:(long long)arg4 shouldReverseLayoutDirection:(BOOL)arg5 ;
@end


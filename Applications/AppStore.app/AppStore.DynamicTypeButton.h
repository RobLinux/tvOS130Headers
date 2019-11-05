/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:52:10 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/AppStore.app/AppStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppStore/AppStore-Structs.h>
#import <UIKitCore/UIButton.h>

@interface AppStore.DynamicTypeButton : UIButton {

	 fontUseCaseContentSizeCategory;
	 fontUseCase;
	 _focusItemContainer;
	 primaryActionHandler;
	 titleColorFollowsTintColor;

}

@property (retain,nonatomic) id<UIFocusItemContainer> focusItemContainer; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id<UIFocusItemContainer>)focusItemContainer;
-(void)setFocusItemContainer:(id<UIFocusItemContainer>)arg1 ;
-(void)didTriggerPrimaryAction:(id)arg1 ;
@end


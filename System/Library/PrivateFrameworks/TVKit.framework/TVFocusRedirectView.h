/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIFocusContainerGuide;

@interface TVFocusRedirectView : UIView {

	BOOL _containsInertia;
	UIFocusContainerGuide* _containerGuide;

}

@property (assign,nonatomic) BOOL containsInertia;                                  //@synthesize containsInertia=_containsInertia - In the implementation block
@property (nonatomic,readonly) UIFocusContainerGuide * containerGuide;              //@synthesize containerGuide=_containerGuide - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIFocusContainerGuide *)containerGuide;
-(BOOL)_containsInertiaSelectionChanges;
-(BOOL)containsInertia;
-(void)setContainsInertia:(BOOL)arg1 ;
@end
